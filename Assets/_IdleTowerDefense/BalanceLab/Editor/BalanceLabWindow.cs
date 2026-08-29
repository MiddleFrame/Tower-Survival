using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using UnityEditor;
using UnityEngine;

public sealed class BalanceLabWindow : EditorWindow
{
    private BalanceScenario _scenario;
    private BalancePopulationScenario _population;
    private BalanceSimulator.BatchResult _lastResult;
    private BalanceSimulator.PopulationResult _lastPopulationResult;
    private Vector2 _scroll;
    private Editor _scenarioEditor;
    private Editor _populationEditor;

    [MenuItem("Tools/Idle Tower Defense/Balance Lab")]
    private static void Open() => GetWindow<BalanceLabWindow>("Balance Lab");

    private void OnEnable()
    {
        if (_scenario == null)
        {
            string guid = AssetDatabase.FindAssets("t:BalanceScenario").FirstOrDefault();
            if (!string.IsNullOrEmpty(guid))
                _scenario = AssetDatabase.LoadAssetAtPath<BalanceScenario>(AssetDatabase.GUIDToAssetPath(guid));
        }
        if (_population == null)
        {
            string populationGuid = AssetDatabase.FindAssets("t:BalancePopulationScenario").FirstOrDefault();
            if (!string.IsNullOrEmpty(populationGuid))
                _population = AssetDatabase.LoadAssetAtPath<BalancePopulationScenario>(AssetDatabase.GUIDToAssetPath(populationGuid));
        }
    }

    [MenuItem("Assets/Create/Idle Tower Defense/Balance Lab/Scenario from Game Settings", true)]
    private static bool CanCreateScenario() => Selection.activeObject is GameSettings;

    [MenuItem("Assets/Create/Idle Tower Defense/Balance Lab/Scenario from Game Settings")]
    private static void CreateScenarioFromSettings()
    {
        var scenario = CreateInstance<BalanceScenario>();
        scenario.gameSettings = (GameSettings)Selection.activeObject;
        string sourcePath = AssetDatabase.GetAssetPath(Selection.activeObject);
        string path = AssetDatabase.GenerateUniqueAssetPath(Path.Combine(Path.GetDirectoryName(sourcePath) ?? "Assets", "Balance Scenario.asset"));
        AssetDatabase.CreateAsset(scenario, path);
        AssetDatabase.SaveAssets();
        Selection.activeObject = scenario;
    }

    private void OnGUI()
    {
        _scroll = EditorGUILayout.BeginScrollView(_scroll);
        EditorGUILayout.HelpBox("Scenario assets keep test inputs separate from production balance. Running a scenario never changes game assets.", MessageType.Info);
        _scenario = (BalanceScenario)EditorGUILayout.ObjectField("Scenario", _scenario, typeof(BalanceScenario), false);

        using (new EditorGUI.DisabledScope(_scenario == null))
        {
            if (_scenario != null)
            {
                EditorGUILayout.Space();
                EditorGUILayout.LabelField("Input", EditorStyles.boldLabel);
                Editor.CreateCachedEditor(_scenario, null, ref _scenarioEditor);
                _scenarioEditor.OnInspectorGUI();
                EditorGUILayout.Space();
                if (GUILayout.Button("Run selected scenario", GUILayout.Height(32))) RunScenario(_scenario);
                if (GUILayout.Button("Run every BalanceScenario in project")) RunAll();
                if (GUILayout.Button("Export exact curves (CSV)")) ExportCurves(_scenario);
            }
        }

        if (_lastResult != null)
        {
            EditorGUILayout.Space();
            EditorGUILayout.LabelField("Last result", EditorStyles.boldLabel);
            EditorGUILayout.LabelField("Scenario", _lastResult.scenario);
            EditorGUILayout.LabelField("Survived configured limit", _lastResult.survivalRate.ToString("P1"));
            EditorGUILayout.LabelField("Mean / median kills", $"{_lastResult.meanKills:0.0} / {_lastResult.medianKills:0.0}");
            EditorGUILayout.LabelField("Mean / median seconds", $"{_lastResult.meanSeconds:0.0} / {_lastResult.medianSeconds:0.0}");
            EditorGUILayout.LabelField("Mean ore / gold", $"{_lastResult.meanOre:0.0} / {_lastResult.meanGold:0.0}");
            EditorGUILayout.LabelField("Mean peak enemies", _lastResult.meanPeakEnemies.ToString("0.0"));
            foreach (string warning in _lastResult.warnings)
                EditorGUILayout.HelpBox(warning, MessageType.Warning);
        }

        EditorGUILayout.Space(16f);
        EditorGUILayout.LabelField("Player population", EditorStyles.boldLabel);
        EditorGUILayout.HelpBox("Runs multi-session player journeys. Archetype weights create behavioral cohorts; combat skill is sampled separately for every player.", MessageType.Info);
        _population = (BalancePopulationScenario)EditorGUILayout.ObjectField("Population", _population,
            typeof(BalancePopulationScenario), false);
        if (_population != null)
        {
            Editor.CreateCachedEditor(_population, null, ref _populationEditor);
            _populationEditor.OnInspectorGUI();
            if (GUILayout.Button("Run player population", GUILayout.Height(36))) RunPopulation(_population);
        }

        if (_lastPopulationResult != null)
        {
            EditorGUILayout.Space();
            EditorGUILayout.LabelField("Population result", EditorStyles.boldLabel);
            EditorGUILayout.LabelField("Players / days", $"{_lastPopulationResult.players} / {_lastPopulationResult.days}");
            EditorGUILayout.LabelField("Mean sessions", _lastPopulationResult.meanSessions.ToString("0.0"));
            EditorGUILayout.LabelField("Kills P10 / P50 / P90",
                $"{_lastPopulationResult.p10Kills:0} / {_lastPopulationResult.p50Kills:0} / {_lastPopulationResult.p90Kills:0}");
            EditorGUILayout.LabelField("Persistent levels P10 / P50 / P90",
                $"{_lastPopulationResult.p10PersistentLevels:0} / {_lastPopulationResult.p50PersistentLevels:0} / {_lastPopulationResult.p90PersistentLevels:0}");
            for (int tier = 0; tier < _lastPopulationResult.tierReachRates.Count; tier++)
                EditorGUILayout.LabelField($"Reached Tier {tier + 1}", _lastPopulationResult.tierReachRates[tier].ToString("P1"));
            foreach (BalanceSimulator.CohortResult cohort in _lastPopulationResult.cohortResults)
                EditorGUILayout.LabelField(cohort.archetype,
                    $"n={cohort.players}, median kills={cohort.medianKills:0}, median upgrades={cohort.medianPersistentLevels:0}");
            foreach (string warning in _lastPopulationResult.warnings)
                EditorGUILayout.HelpBox(warning, MessageType.Warning);
        }
        EditorGUILayout.EndScrollView();
    }

    private void OnDisable()
    {
        if (_scenarioEditor != null)
            DestroyImmediate(_scenarioEditor);
        if (_populationEditor != null)
            DestroyImmediate(_populationEditor);
    }

    private void RunScenario(BalanceScenario scenario)
    {
        try
        {
            _lastResult = BalanceSimulator.Run(scenario);
            string folder = EnsureReportFolder();
            string stem = SafeName(scenario.name) + "_" + DateTime.Now.ToString("yyyyMMdd_HHmmss");
            File.WriteAllText(Path.Combine(folder, stem + ".json"), JsonUtility.ToJson(_lastResult, true));
            WriteRunCsv(Path.Combine(folder, stem + "_runs.csv"), _lastResult);
            AssetDatabase.Refresh();
            Debug.Log($"Balance Lab finished '{scenario.name}'. Reports: {folder}", scenario);
        }
        catch (Exception exception)
        {
            Debug.LogException(exception, scenario);
            EditorUtility.DisplayDialog("Balance Lab", exception.Message, "OK");
        }
    }

    private void RunPopulation(BalancePopulationScenario population)
    {
        try
        {
            _lastPopulationResult = BalanceSimulator.RunPopulation(population, (current, total) =>
                EditorUtility.DisplayProgressBar("Balance Lab population",
                    $"Player {current + 1:N0} / {total:N0}", current / (float)Math.Max(1, total)));
            string folder = EnsureReportFolder();
            string stem = SafeName(population.name) + "_population_" + DateTime.Now.ToString("yyyyMMdd_HHmmss");
            File.WriteAllText(Path.Combine(folder, stem + ".json"), JsonUtility.ToJson(_lastPopulationResult, true));
            WritePlayerCsv(Path.Combine(folder, stem + "_players.csv"), _lastPopulationResult);
            WriteCohortCsv(Path.Combine(folder, stem + "_cohorts.csv"), _lastPopulationResult);
            WriteJourneyCsv(Path.Combine(folder, stem + "_journeys.csv"), _lastPopulationResult);
            Debug.Log($"Balance Lab population finished '{population.name}'. Reports: {folder}", population);
        }
        catch (Exception exception)
        {
            Debug.LogException(exception, population);
            EditorUtility.DisplayDialog("Balance Lab population", exception.Message, "OK");
        }
        finally
        {
            EditorUtility.ClearProgressBar();
        }
    }

    private void RunAll()
    {
        string[] guids = AssetDatabase.FindAssets("t:BalanceScenario");
        var results = new List<BalanceSimulator.BatchResult>();
        try
        {
            for (int i = 0; i < guids.Length; i++)
            {
                var scenario = AssetDatabase.LoadAssetAtPath<BalanceScenario>(AssetDatabase.GUIDToAssetPath(guids[i]));
                EditorUtility.DisplayProgressBar("Balance Lab", scenario.name, i / (float)Math.Max(1, guids.Length));
                results.Add(BalanceSimulator.Run(scenario));
            }
            string path = Path.Combine(EnsureReportFolder(), "batch_" + DateTime.Now.ToString("yyyyMMdd_HHmmss") + ".csv");
            WriteBatchCsv(path, results);
            AssetDatabase.Refresh();
            if (results.Count > 0) _lastResult = results[results.Count - 1];
            Debug.Log($"Balance Lab ran {results.Count} scenarios. Summary: {path}");
        }
        finally
        {
            EditorUtility.ClearProgressBar();
        }
    }

    private static void ExportCurves(BalanceScenario scenario)
    {
        string folder = EnsureReportFolder();
        WriteSpawnCurve(Path.Combine(folder, SafeName(scenario.name) + "_spawn_curve.csv"), scenario);
        WriteUpgradeCurves(Path.Combine(folder, SafeName(scenario.name) + "_upgrade_curves.csv"), scenario);
        AssetDatabase.Refresh();
        Debug.Log($"Balance Lab exported exact curves to {folder}", scenario);
    }

    private static void WriteSpawnCurve(string path, BalanceScenario scenario)
    {
        EnemySpawnSettings settings = scenario.gameSettings.EnemySpawnSettings[scenario.tier];
        var csv = new StringBuilder("event,spawned_before,stage,group_size,interval,health_multiplier,damage_multiplier,expected_base_hp,expected_base_damage,expected_ore_per_enemy,exp_per_next_enemy\n");
        int spawned = 0;
        int stage = 0;
        int group = 1;
        float hpMultiplier = 1f;
        float damageMultiplier = 1f;
        float exp = 1f;
        for (int e = 0; e < scenario.maximumSpawnEvents; e++)
        {
            if (stage + 1 < settings.stages.Length && spawned >= settings.stages[stage + 1].enemiesKilledToStartStage) stage++;
            float expectedHp = 0f;
            float expectedDamage = 0f;
            for (int i = 0; i < settings.stages[stage]._enemyChances.Length && i < settings._stats.Length; i++)
            {
                expectedHp += settings.stages[stage]._enemyChances[i] * settings._stats[i].startingHealth;
                expectedDamage += settings.stages[stage]._enemyChances[i] * settings._stats[i].damage;
            }
            exp *= 1.01f;
            csv.AppendLine(string.Join(",", e + 1, spawned, stage, group,
                F(settings.stages[stage].enemySpawnRate), F(hpMultiplier), F(damageMultiplier),
                F(expectedHp * hpMultiplier), F(expectedDamage * damageMultiplier), F(settings.OreMultiplier * 0.2f), F(exp)));
            spawned += group;
            hpMultiplier *= settings.EnemyHealthMultiplier;
            damageMultiplier *= settings.EnemyDamageMultiplier;
            group = settings.stages[stage].enemySpawnCount;
        }
        File.WriteAllText(path, csv.ToString(), Encoding.UTF8);
    }

    private static void WriteUpgradeCurves(string path, BalanceScenario scenario)
    {
        var csv = new StringBuilder("scope,title,level,cost,cumulative_cost\n");
        foreach (TemporaryUpgradeBase upgrade in scenario.gameSettings.UpgradeSettings.TemporaryUpgrades)
        {
            long cumulative = 0;
            for (int level = 0; level < Math.Min(upgrade.maxUpgradeCount, 1000); level++)
            {
                int cost = Mathf.FloorToInt((level + 1) * upgrade.costUpgradeMultiplier);
                cumulative += cost;
                csv.AppendLine($"temporary,{Csv(upgrade.Title)},{level + 1},{cost},{cumulative}");
            }
        }
        foreach (PersistentUpgradeBase upgrade in scenario.gameSettings.UpgradeSettings.PersistentUpgrades)
        {
            var serialized = new SerializedObject(upgrade);
            float baseCost = serialized.FindProperty("baseCost").floatValue;
            float exponent = serialized.FindProperty("upgradeCostExponent").floatValue;
            float additional = serialized.FindProperty("upgradeCostAdditional").floatValue;
            double cumulative = 0;
            for (int level = 0; level < Math.Min(upgrade.maxUpgradeCount, 1000); level++)
            {
                double raw = baseCost * Math.Pow(exponent, level) + additional * level;
                long cost = raw >= int.MaxValue ? int.MaxValue : (long)raw;
                cumulative += cost;
                csv.AppendLine($"persistent,{Csv(upgrade.Title)},{level + 1},{cost},{F(cumulative)}");
                if (cost == int.MaxValue) break;
            }
        }
        File.WriteAllText(path, csv.ToString(), Encoding.UTF8);
    }

    private static void WriteRunCsv(string path, BalanceSimulator.BatchResult result)
    {
        var csv = new StringBuilder("run,seed,survived_limit,seconds,spawned,kills,peak_enemies,tower_health,scrap_unspent,ore,gold\n");
        foreach (BalanceSimulator.RunResult row in result.runResults)
            csv.AppendLine(string.Join(",", row.run, row.seed, row.survivedLimit ? 1 : 0, F(row.seconds), row.spawned,
                row.kills, row.peakEnemies, F(row.towerHealth), row.scrap, row.ore, row.gold));
        File.WriteAllText(path, csv.ToString(), Encoding.UTF8);
    }

    private static void WriteBatchCsv(string path, IEnumerable<BalanceSimulator.BatchResult> results)
    {
        var csv = new StringBuilder("scenario,runs,survival_rate,mean_seconds,median_seconds,mean_kills,median_kills,mean_scrap_unspent,mean_ore,mean_gold,mean_peak_enemies\n");
        foreach (BalanceSimulator.BatchResult r in results)
            csv.AppendLine(string.Join(",", Csv(r.scenario), r.runs, F(r.survivalRate), F(r.meanSeconds), F(r.medianSeconds),
                F(r.meanKills), F(r.medianKills), F(r.meanScrapUnspent), F(r.meanOre), F(r.meanGold), F(r.meanPeakEnemies)));
        File.WriteAllText(path, csv.ToString(), Encoding.UTF8);
    }

    private static void WritePlayerCsv(string path, BalanceSimulator.PopulationResult result)
    {
        var csv = new StringBuilder("player,seed,archetype,sessions,total_kills,total_play_seconds,highest_tier,ore,gold,persistent_levels,mine_capacity,mine_limit,attack_damage,attack_speed,max_targets,multishot,range,health,regeneration,scrap_per_kill,ore_per_kill,gold_per_10_kills\n");
        foreach (BalanceSimulator.PlayerResult p in result.playerResults)
        {
            BalanceLevels l = p.finalLevels;
            csv.AppendLine(string.Join(",", p.player, p.seed, Csv(p.archetype), p.sessions, p.totalKills,
                F(p.totalPlaySeconds), p.highestTier + 1, p.ore, p.gold, p.persistentLevels, p.mineCapacity, p.mineLimit,
                l.attackDamage, l.attackSpeed, l.maxTargets, l.multishot, l.range, l.health, l.regeneration,
                l.scrapPerKill, l.orePerKill, l.goldPerTenKills));
        }
        File.WriteAllText(path, csv.ToString(), Encoding.UTF8);
    }

    private static void WriteCohortCsv(string path, BalanceSimulator.PopulationResult result)
    {
        var csv = new StringBuilder("archetype,players,mean_sessions,mean_kills,median_kills,mean_persistent_levels,median_persistent_levels,mean_highest_tier\n");
        foreach (BalanceSimulator.CohortResult c in result.cohortResults)
            csv.AppendLine(string.Join(",", Csv(c.archetype), c.players, F(c.meanSessions), F(c.meanKills),
                F(c.medianKills), F(c.meanPersistentLevels), F(c.medianPersistentLevels), F(c.meanHighestTier + 1)));
        File.WriteAllText(path, csv.ToString(), Encoding.UTF8);
    }

    private static void WriteJourneyCsv(string path, BalanceSimulator.PopulationResult result)
    {
        var csv = new StringBuilder("player,archetype,day,session,tier,total_kills,ore,gold,persistent_levels\n");
        foreach (BalanceSimulator.PlayerResult player in result.playerResults)
            foreach (BalanceSimulator.JourneyPoint point in player.journey)
                csv.AppendLine(string.Join(",", player.player, Csv(player.archetype), point.day, point.session,
                    point.tier + 1, point.kills, point.ore, point.gold, point.persistentLevels));
        File.WriteAllText(path, csv.ToString(), Encoding.UTF8);
    }

    private static string EnsureReportFolder()
    {
        string folder = Path.GetFullPath(Path.Combine(Application.dataPath, "../BalanceReports"));
        Directory.CreateDirectory(folder);
        return folder;
    }

    private static string SafeName(string value) => string.Concat(value.Select(c => Path.GetInvalidFileNameChars().Contains(c) ? '_' : c));
    private static string Csv(string value) => "\"" + (value ?? string.Empty).Replace("\"", "\"\"") + "\"";
    private static string F(double value) => value.ToString("0.######", CultureInfo.InvariantCulture);
}
