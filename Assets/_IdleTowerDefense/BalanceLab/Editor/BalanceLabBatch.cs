using System;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;

public static class BalanceLabBatch
{
    // Lightweight CI/smoke entry point. It never changes the source assets.
    public static void RunSmokeTest()
    {
        string guid = AssetDatabase.FindAssets("t:BalancePopulationScenario").FirstOrDefault();
        if (string.IsNullOrEmpty(guid))
            throw new InvalidOperationException("No BalancePopulationScenario asset was found.");

        BalancePopulationScenario source = AssetDatabase.LoadAssetAtPath<BalancePopulationScenario>(
            AssetDatabase.GUIDToAssetPath(guid));
        if (source == null || source.sessionScenario == null)
            throw new InvalidOperationException("Population scenario or its session scenario is missing.");

        BalancePopulationScenario population = UnityEngine.Object.Instantiate(source);
        BalanceScenario session = UnityEngine.Object.Instantiate(source.sessionScenario);
        population.sessionScenario = session;
        population.players = 3;
        population.days = 1;
        population.sessionsPerDay = 1;
        session.maximumSpawnEvents = Math.Min(25, session.maximumSpawnEvents);
        session.maximumSeconds = Math.Min(45f, session.maximumSeconds);

        BalanceSimulator.PopulationResult result = BalanceSimulator.RunPopulation(population);
        if (result.playerResults.Count != population.players || result.cohortResults.Count == 0)
            throw new InvalidOperationException("Balance population smoke test returned incomplete statistics.");

        Debug.Log($"Balance Lab smoke test passed: {result.players} players, " +
                  $"P50 kills {result.p50Kills:0}, {result.cohortResults.Count} cohorts sampled.");
        UnityEngine.Object.DestroyImmediate(session);
        UnityEngine.Object.DestroyImmediate(population);
    }

    public static void RunDefaultPopulation()
    {
        string guid = AssetDatabase.FindAssets("t:BalancePopulationScenario").FirstOrDefault();
        BalancePopulationScenario population = string.IsNullOrEmpty(guid) ? null :
            AssetDatabase.LoadAssetAtPath<BalancePopulationScenario>(AssetDatabase.GUIDToAssetPath(guid));
        if (population == null)
            throw new InvalidOperationException("No BalancePopulationScenario asset was found.");

        BalanceSimulator.PopulationResult result = BalanceSimulator.RunPopulation(population);
        string folder = Path.GetFullPath(Path.Combine(Application.dataPath, "../BalanceReports"));
        Directory.CreateDirectory(folder);
        string path = Path.Combine(folder, "default_population_" + DateTime.Now.ToString("yyyyMMdd_HHmmss") + ".json");
        File.WriteAllText(path, JsonUtility.ToJson(result, true));
        Debug.Log($"Balance Lab default population passed: {result.players} players, " +
                  $"kills P10/P50/P90 {result.p10Kills:0}/{result.p50Kills:0}/{result.p90Kills:0}, " +
                  $"persistent levels P10/P50/P90 {result.p10PersistentLevels:0}/{result.p50PersistentLevels:0}/{result.p90PersistentLevels:0}. " +
                  $"Report: {path}");
    }
}
