using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;

internal static class BalanceSimulator
{
    [Serializable]
    internal sealed class BatchResult
    {
        public string scenario;
        public int runs;
        public float survivalRate;
        public float meanSeconds;
        public float medianSeconds;
        public float meanKills;
        public float medianKills;
        public float meanScrapUnspent;
        public float meanOre;
        public float meanGold;
        public float meanPeakEnemies;
        public List<RunResult> runResults = new List<RunResult>();
        public List<string> warnings = new List<string>();
    }

    [Serializable]
    internal sealed class RunResult
    {
        public int run;
        public int seed;
        public bool survivedLimit;
        public float seconds;
        public int spawned;
        public int kills;
        public int peakEnemies;
        public float towerHealth;
        public int scrap;
        public int ore;
        public int gold;
    }

    [Serializable]
    internal sealed class PopulationResult
    {
        public string scenario;
        public int players;
        public int days;
        public float meanSessions;
        public float meanKills;
        public float p10Kills;
        public float p50Kills;
        public float p90Kills;
        public float meanPersistentLevels;
        public float p10PersistentLevels;
        public float p50PersistentLevels;
        public float p90PersistentLevels;
        public List<float> tierReachRates = new List<float>();
        public List<PlayerResult> playerResults = new List<PlayerResult>();
        public List<CohortResult> cohortResults = new List<CohortResult>();
        public List<string> warnings = new List<string>();
    }

    [Serializable]
    internal sealed class PlayerResult
    {
        public int player;
        public int seed;
        public string archetype;
        public int sessions;
        public int totalKills;
        public float totalPlaySeconds;
        public int highestTier;
        public int ore;
        public int gold;
        public int persistentLevels;
        public int mineCapacity;
        public int mineLimit;
        public BalanceLevels finalLevels;
        public List<int> tierReachedDay = new List<int>();
        public List<JourneyPoint> journey = new List<JourneyPoint>();
    }

    [Serializable]
    internal sealed class JourneyPoint
    {
        public int day;
        public int session;
        public int tier;
        public int kills;
        public int ore;
        public int gold;
        public int persistentLevels;
    }

    [Serializable]
    internal sealed class CohortResult
    {
        public string archetype;
        public int players;
        public float meanSessions;
        public float meanKills;
        public float medianKills;
        public float meanPersistentLevels;
        public float medianPersistentLevels;
        public float meanHighestTier;
    }

    private sealed class EnemyState
    {
        public float health;
        public float distance;
        public float speed;
        public float stopRange;
        public float damage;
        public float cooldown;
        public float attackTimer;
        public int scrap;
        public int ore;
        public bool destroyAfterAttack;
    }

    private sealed class UpgradeInfo
    {
        public BalanceUpgradeKind kind;
        public TemporaryUpgradeBase temporary;
        public int persistent;
        public int temporaryCount;
    }

    private sealed class MineState
    {
        public bool owned;
        public int capacity = 1;
        public int limit = 1;
        public float storedOre;
        public float storedGold;
    }

    internal static BatchResult Run(BalanceScenario scenario)
    {
        Validate(scenario);
        var result = new BatchResult { scenario = scenario.name, runs = scenario.runs };
        AddWarnings(scenario, result.warnings);

        for (int i = 0; i < scenario.runs; i++)
            result.runResults.Add(RunSession(scenario, i, scenario.randomSeed + i * 7919, scenario.tier,
                scenario.persistentLevels, scenario.purchasePriority, 1f, 1f, 0f));

        result.survivalRate = result.runResults.Count(x => x.survivedLimit) / (float)scenario.runs;
        result.meanSeconds = (float)result.runResults.Average(x => x.seconds);
        result.medianSeconds = Median(result.runResults.Select(x => x.seconds));
        result.meanKills = (float)result.runResults.Average(x => x.kills);
        result.medianKills = Median(result.runResults.Select(x => (float)x.kills));
        result.meanScrapUnspent = (float)result.runResults.Average(x => x.scrap);
        result.meanOre = (float)result.runResults.Average(x => x.ore);
        result.meanGold = (float)result.runResults.Average(x => x.gold);
        result.meanPeakEnemies = (float)result.runResults.Average(x => x.peakEnemies);
        return result;
    }

    internal static PopulationResult RunPopulation(BalancePopulationScenario population, Action<int, int> progress = null)
    {
        ValidatePopulation(population);
        BalanceScenario scenario = population.sessionScenario;
        var result = new PopulationResult
        {
            scenario = population.name,
            players = population.players,
            days = population.days
        };
        AddWarnings(scenario, result.warnings);
        result.warnings.Add("Player archetypes are hypotheses. Calibrate their weights and behavior ranges with analytics when enough real players exist.");

        for (int playerIndex = 0; playerIndex < population.players; playerIndex++)
        {
            progress?.Invoke(playerIndex, population.players);
            int seed = population.randomSeed + playerIndex * 104729;
            var random = new System.Random(seed);
            BalancePlayerArchetype archetype = PickArchetype(population.archetypes, random);
            result.playerResults.Add(RunJourney(population, archetype, playerIndex, seed, random));
        }

        float[] kills = result.playerResults.Select(x => (float)x.totalKills).ToArray();
        float[] levels = result.playerResults.Select(x => (float)x.persistentLevels).ToArray();
        result.meanSessions = (float)result.playerResults.Average(x => x.sessions);
        result.meanKills = kills.Average();
        result.p10Kills = Percentile(kills, 0.1f);
        result.p50Kills = Percentile(kills, 0.5f);
        result.p90Kills = Percentile(kills, 0.9f);
        result.meanPersistentLevels = levels.Average();
        result.p10PersistentLevels = Percentile(levels, 0.1f);
        result.p50PersistentLevels = Percentile(levels, 0.5f);
        result.p90PersistentLevels = Percentile(levels, 0.9f);
        for (int tier = 0; tier < scenario.gameSettings.EnemySpawnSettings.Length; tier++)
            result.tierReachRates.Add(result.playerResults.Count(x => x.highestTier >= tier) / (float)population.players);

        foreach (IGrouping<string, PlayerResult> group in result.playerResults.GroupBy(x => x.archetype))
        {
            result.cohortResults.Add(new CohortResult
            {
                archetype = group.Key,
                players = group.Count(),
                meanSessions = (float)group.Average(x => x.sessions),
                meanKills = (float)group.Average(x => x.totalKills),
                medianKills = Median(group.Select(x => (float)x.totalKills)),
                meanPersistentLevels = (float)group.Average(x => x.persistentLevels),
                medianPersistentLevels = Median(group.Select(x => (float)x.persistentLevels)),
                meanHighestTier = (float)group.Average(x => x.highestTier)
            });
        }
        return result;
    }

    private static PlayerResult RunJourney(BalancePopulationScenario population, BalancePlayerArchetype archetype,
        int playerIndex, int seed, System.Random random)
    {
        BalanceScenario scenario = population.sessionScenario;
        BalanceLevels levels = scenario.persistentLevels.Clone();
        int ore = population.startingOre;
        int gold = population.startingGold;
        int tier = population.progressThroughTiers ? 0 : scenario.tier;
        int[] records = new int[scenario.gameSettings.EnemySpawnSettings.Length];
        int[] pages = { scenario.attackPage, scenario.defencePage, scenario.utilityPage };
        int[] tierDays = Enumerable.Repeat(-1, records.Length).ToArray();
        tierDays[tier] = 0;
        var mine = new MineState();
        var player = new PlayerResult
        {
            player = playerIndex + 1,
            seed = seed,
            archetype = archetype.name,
            highestTier = tier
        };

        List<BalanceUpgradeKind> priority = PriorityFor(archetype.strategy);
        if (archetype.strategy == BalancePlayerStrategy.Cheapest)
            priority = priority.OrderBy(x => TemporaryBaseCost(scenario, x)).ToList();
        else if (archetype.strategy == BalancePlayerStrategy.Random)
            Shuffle(priority, random);
        float efficiency = Mathf.Clamp(SampleNormal(random, archetype.meanCombatEfficiency,
            archetype.combatEfficiencyDeviation), 0.1f, 1.5f);
        int journeySession = 0;

        for (int day = 1; day <= population.days; day++)
        {
            AccrueMine(population, mine);
            if (random.NextDouble() > archetype.dailyPlayChance) continue;
            CollectMine(mine, ref ore, ref gold);
            int todaySessions = Math.Max(1, Mathf.RoundToInt(population.sessionsPerDay * archetype.sessionsPerDayMultiplier));
            for (int localSession = 0; localSession < todaySessions; localSession++)
            {
                journeySession++;
                int sessionSeed = seed + journeySession * 3571;
                RunResult session = RunSession(scenario, journeySession - 1, sessionSeed, tier, levels, priority,
                    efficiency, archetype.temporaryPurchaseChance, archetype.oreReserveFraction);
                player.sessions++;
                player.totalKills += session.kills;
                player.totalPlaySeconds += session.seconds;
                records[tier] = Math.Max(records[tier], session.kills);
                int earnedOre = session.ore;
                if (random.NextDouble() <= archetype.rewardedOreChance) earnedOre *= 2;
                ore += earnedOre;
                gold += session.gold;

                if (population.progressThroughTiers)
                {
                    while (tier + 1 < records.Length && records[tier] >=
                           scenario.gameSettings.EnemySpawnSettings[tier + 1].RecordToOpen)
                    {
                        tier++;
                        if (tierDays[tier] < 0) tierDays[tier] = day;
                    }
                }

                if (population.simulateMine && (archetype.strategy == BalancePlayerStrategy.Economy ||
                                                archetype.strategy == BalancePlayerStrategy.Saver))
                    ManageMine(population, archetype, mine, random, ref ore, ref gold);
                if (population.buyPageUnlocks)
                    BuyPageUnlocks(scenario, archetype, random, pages, ref gold);
                if (population.buyPersistentUpgrades)
                    BuyPersistent(scenario, archetype, random, priority, pages, levels, ref ore);
                if (population.simulateMine && archetype.strategy != BalancePlayerStrategy.Economy &&
                                            archetype.strategy != BalancePlayerStrategy.Saver)
                    ManageMine(population, archetype, mine, random, ref ore, ref gold);

                player.journey.Add(new JourneyPoint
                {
                    day = day,
                    session = player.sessions,
                    tier = tier,
                    kills = player.totalKills,
                    ore = ore,
                    gold = gold,
                    persistentLevels = levels.Sum()
                });
            }
        }

        player.highestTier = tier;
        player.ore = ore;
        player.gold = gold;
        player.persistentLevels = levels.Sum();
        player.finalLevels = levels;
        player.mineCapacity = mine.owned ? mine.capacity : 0;
        player.mineLimit = mine.owned ? mine.limit : 0;
        player.tierReachedDay.AddRange(tierDays);
        return player;
    }

    private static RunResult RunSession(BalanceScenario scenario, int run, int seed, int tier,
        BalanceLevels persistentLevels, IList<BalanceUpgradeKind> purchasePriority, float efficiency,
        float temporaryPurchaseChance, float scrapReserveFraction)
    {
        var random = new System.Random(seed);
        EnemySpawnSettings spawn = scenario.gameSettings.EnemySpawnSettings[tier];
        Dictionary<BalanceUpgradeKind, UpgradeInfo> upgrades = BuildUpgradeMap(scenario, persistentLevels);
        var enemies = new List<EnemyState>();

        float time = 0f;
        float spawnTimer = 0f;
        float shotTimer = 0f;
        float healthMultiplier = 1f;
        float damageMultiplier = 1f;
        float towerHealth = TowerMaxHealth(scenario, upgrades);
        int stage = 0;
        int spawnCount = 1;
        int spawnEvents = 0;
        int spawned = 0;
        int kills = 0;
        int peak = 0;
        int scrap = 0;
        int ore = 0;
        int gold = 0;
        float expPerKill = 1f;

        while (towerHealth > 0f && time < scenario.maximumSeconds && spawnEvents < scenario.maximumSpawnEvents)
        {
            float dt = scenario.simulationStep;
            time += dt;
            spawnTimer -= dt;
            shotTimer -= dt;

            if (spawnTimer <= 0f)
            {
                if (stage + 1 < spawn.stages.Length && spawned >= spawn.stages[stage + 1].enemiesKilledToStartStage)
                    stage++;

                for (int n = 0; n < spawnCount; n++)
                {
                    int enemyIndex = PickEnemy(spawn.stages[stage]._enemyChances, random);
                    EnemyView view = spawn._enemyList.EnemySpawns[Math.Min(enemyIndex, spawn._enemyList.EnemySpawns.Count - 1)];
                    int statIndex = Math.Min((int)view.enemyNumber, spawn._stats.Length - 1);
                    EnemyStartStats stats = spawn._stats[statIndex];
                    expPerKill *= 1.01f;
                    bool oreEnemy = random.Next(0, 10) > 7;
                    enemies.Add(new EnemyState
                    {
                        health = stats.startingHealth * healthMultiplier * scenario.enemyHealthScale,
                        // TemporaryUpgradeManager.UpdateStartValue applies this formula even at zero range levels.
                        distance = TowerRange(scenario, upgrades) * 1.2f + 5f,
                        speed = stats.movementSpeed,
                        stopRange = view.enemyNumber == EnemyView.EnemyType.Ranged ? 2.12f : 0.8f,
                        damage = stats.damage * damageMultiplier * scenario.enemyDamageScale,
                        cooldown = Math.Max(0.01f, stats.damageCooldown),
                        attackTimer = scenario.enemyFirstAttackDelay,
                        scrap = Mathf.FloorToInt(ExpMultiplier(upgrades) * expPerKill * scenario.rewardScale),
                        ore = oreEnemy ? Mathf.FloorToInt(spawn.OreMultiplier * OreMultiplier(upgrades) * scenario.rewardScale) : 0,
                        destroyAfterAttack = view.destroyAfterAttack
                    });
                    spawned++;
                }

                spawnEvents++;
                spawnTimer += Math.Max(0.01f, spawn.stages[stage].enemySpawnRate * scenario.spawnIntervalScale);
                healthMultiplier *= spawn.EnemyHealthMultiplier;
                damageMultiplier *= spawn.EnemyDamageMultiplier;
                spawnCount = spawn.stages[stage].enemySpawnCount;
                peak = Math.Max(peak, enemies.Count);
            }

            float range = TowerRange(scenario, upgrades);
            for (int i = 0; i < enemies.Count; i++)
            {
                EnemyState enemy = enemies[i];
                if (enemy.distance > enemy.stopRange)
                    enemy.distance = Math.Max(enemy.stopRange, enemy.distance - enemy.speed * dt);
                else
                {
                    enemy.attackTimer -= dt;
                    if (enemy.attackTimer <= 0f)
                    {
                        towerHealth -= enemy.damage;
                        enemy.attackTimer += enemy.cooldown;
                        if (enemy.destroyAfterAttack)
                        {
                            enemies.RemoveAt(i--);
                            continue;
                        }
                    }
                }
            }

            towerHealth = Math.Min(TowerMaxHealth(scenario, upgrades),
                towerHealth + TowerRegeneration(upgrades) * dt);

            if (shotTimer <= 0f)
            {
                List<EnemyState> targets = enemies.Where(x => x.distance <= range).OrderBy(x => x.distance).ToList();
                if (targets.Count > 0)
                {
                    int targetCount = random.NextDouble() <= MultiShotChance(upgrades)
                        ? TowerMaxTargets(scenario, upgrades)
                        : 1;
                    float damage = TowerDamage(scenario, upgrades) * scenario.towerDamageEfficiency * efficiency;
                    for (int i = 0; i < Math.Min(targetCount, targets.Count); i++)
                        targets[i].health -= damage;
                    shotTimer += Math.Max(0.01f, TowerCooldown(scenario, upgrades));
                }
            }

            for (int i = enemies.Count - 1; i >= 0; i--)
            {
                EnemyState enemy = enemies[i];
                if (enemy.health > 0f) continue;
                enemies.RemoveAt(i);
                kills++;
                scrap += enemy.scrap;
                ore += enemy.ore;
                if (kills % 10 == 0)
                    gold += Mathf.FloorToInt(GoldMultiplier(upgrades) * scenario.rewardScale);
                if (scenario.buyTemporaryUpgrades)
                    SpendScrap(scenario, upgrades, purchasePriority, temporaryPurchaseChance,
                        scrapReserveFraction, random, ref scrap, ref towerHealth);
            }
        }

        return new RunResult
        {
            run = run + 1,
            seed = seed,
            survivedLimit = towerHealth > 0f,
            seconds = time,
            spawned = spawned,
            kills = kills,
            peakEnemies = peak,
            towerHealth = Math.Max(0f, towerHealth),
            scrap = scrap,
            ore = ore,
            gold = gold
        };
    }

    private static void SpendScrap(BalanceScenario scenario, Dictionary<BalanceUpgradeKind, UpgradeInfo> upgrades,
        IList<BalanceUpgradeKind> purchasePriority, float purchaseChance, float reserveFraction,
        System.Random random, ref int scrap, ref float towerHealth)
    {
        bool purchased;
        int guard = 0;
        do
        {
            purchased = false;
            foreach (BalanceUpgradeKind kind in purchasePriority)
            {
                if (!upgrades.TryGetValue(kind, out UpgradeInfo info) || info.temporary == null) continue;
                int page = kind <= BalanceUpgradeKind.Range ? scenario.attackPage :
                    kind <= BalanceUpgradeKind.Regeneration ? scenario.defencePage : scenario.utilityPage;
                if (info.temporary.openingStage > page) continue;
                if (info.persistent + info.temporaryCount >= info.temporary.maxUpgradeCount) continue;
                int cost = Mathf.FloorToInt((info.temporaryCount + 1) * info.temporary.costUpgradeMultiplier);
                if (cost <= 0 || scrap < cost || scrap - cost < scrap * reserveFraction) continue;
                if (random.NextDouble() > purchaseChance) continue;
                float oldMax = TowerMaxHealth(scenario, upgrades);
                scrap -= cost;
                info.temporaryCount++;
                if (kind == BalanceUpgradeKind.Health)
                    towerHealth += Math.Max(0f, TowerMaxHealth(scenario, upgrades) - oldMax);
                purchased = true;
                break;
            }
        } while (purchased && ++guard < 10000);
    }

    private static Dictionary<BalanceUpgradeKind, UpgradeInfo> BuildUpgradeMap(BalanceScenario scenario,
        BalanceLevels persistentLevels = null)
    {
        persistentLevels = persistentLevels ?? scenario.persistentLevels;
        var map = Enum.GetValues(typeof(BalanceUpgradeKind)).Cast<BalanceUpgradeKind>()
            .ToDictionary(x => x, x => new UpgradeInfo { kind = x, persistent = persistentLevels.Get(x) });
        foreach (TemporaryUpgradeBase upgrade in scenario.gameSettings.UpgradeSettings.TemporaryUpgrades)
        {
            if (TryKind(upgrade.Title, out BalanceUpgradeKind kind)) map[kind].temporary = upgrade;
        }
        return map;
    }

    private static BalancePlayerArchetype PickArchetype(IList<BalancePlayerArchetype> archetypes, System.Random random)
    {
        float total = archetypes.Sum(x => Math.Max(0f, x.populationWeight));
        double roll = random.NextDouble() * total;
        float cumulative = 0f;
        foreach (BalancePlayerArchetype archetype in archetypes)
        {
            cumulative += Math.Max(0f, archetype.populationWeight);
            if (roll <= cumulative) return archetype;
        }
        return archetypes[archetypes.Count - 1];
    }

    private static List<BalanceUpgradeKind> PriorityFor(BalancePlayerStrategy strategy)
    {
        switch (strategy)
        {
            case BalancePlayerStrategy.Attack:
                return new List<BalanceUpgradeKind> { BalanceUpgradeKind.AttackDamage, BalanceUpgradeKind.AttackSpeed,
                    BalanceUpgradeKind.Multishot, BalanceUpgradeKind.MaxTargets, BalanceUpgradeKind.Range,
                    BalanceUpgradeKind.ScrapPerKill, BalanceUpgradeKind.Health, BalanceUpgradeKind.Regeneration,
                    BalanceUpgradeKind.OrePerKill, BalanceUpgradeKind.GoldPerTenKills };
            case BalancePlayerStrategy.Defence:
                return new List<BalanceUpgradeKind> { BalanceUpgradeKind.Health, BalanceUpgradeKind.Regeneration,
                    BalanceUpgradeKind.AttackDamage, BalanceUpgradeKind.AttackSpeed, BalanceUpgradeKind.Range,
                    BalanceUpgradeKind.ScrapPerKill, BalanceUpgradeKind.Multishot, BalanceUpgradeKind.MaxTargets,
                    BalanceUpgradeKind.OrePerKill, BalanceUpgradeKind.GoldPerTenKills };
            case BalancePlayerStrategy.Economy:
                return new List<BalanceUpgradeKind> { BalanceUpgradeKind.ScrapPerKill, BalanceUpgradeKind.OrePerKill,
                    BalanceUpgradeKind.GoldPerTenKills, BalanceUpgradeKind.AttackDamage, BalanceUpgradeKind.AttackSpeed,
                    BalanceUpgradeKind.Health, BalanceUpgradeKind.Regeneration, BalanceUpgradeKind.Range,
                    BalanceUpgradeKind.Multishot, BalanceUpgradeKind.MaxTargets };
            case BalancePlayerStrategy.Saver:
                return new List<BalanceUpgradeKind> { BalanceUpgradeKind.AttackSpeed, BalanceUpgradeKind.Multishot,
                    BalanceUpgradeKind.MaxTargets, BalanceUpgradeKind.AttackDamage, BalanceUpgradeKind.ScrapPerKill,
                    BalanceUpgradeKind.Health, BalanceUpgradeKind.Regeneration, BalanceUpgradeKind.OrePerKill,
                    BalanceUpgradeKind.Range, BalanceUpgradeKind.GoldPerTenKills };
            case BalancePlayerStrategy.Cheapest:
                return Enum.GetValues(typeof(BalanceUpgradeKind)).Cast<BalanceUpgradeKind>().ToList();
            default:
                return Enum.GetValues(typeof(BalanceUpgradeKind)).Cast<BalanceUpgradeKind>().ToList();
        }
    }

    private static float TemporaryBaseCost(BalanceScenario scenario, BalanceUpgradeKind kind)
    {
        foreach (TemporaryUpgradeBase asset in scenario.gameSettings.UpgradeSettings.TemporaryUpgrades)
            if (TryKind(asset.Title, out BalanceUpgradeKind assetKind) && assetKind == kind)
                return asset.costUpgradeMultiplier;
        return float.MaxValue;
    }

    private static void Shuffle<T>(IList<T> values, System.Random random)
    {
        for (int i = values.Count - 1; i > 0; i--)
        {
            int j = random.Next(i + 1);
            T value = values[i];
            values[i] = values[j];
            values[j] = value;
        }
    }

    private static void BuyPersistent(BalanceScenario scenario, BalancePlayerArchetype archetype,
        System.Random random, IList<BalanceUpgradeKind> priority, int[] pages, BalanceLevels levels, ref int ore)
    {
        var assets = new Dictionary<BalanceUpgradeKind, PersistentUpgradeBase>();
        foreach (PersistentUpgradeBase asset in scenario.gameSettings.UpgradeSettings.PersistentUpgrades)
            if (TryKind(asset.Title, out BalanceUpgradeKind kind)) assets[kind] = asset;

        int guard = 0;
        while (++guard < 10000)
        {
            var candidates = new List<KeyValuePair<BalanceUpgradeKind, PersistentUpgradeBase>>();
            foreach (BalanceUpgradeKind kind in priority)
            {
                if (!assets.TryGetValue(kind, out PersistentUpgradeBase asset)) continue;
                if (asset.window < 0 || asset.window >= pages.Length || asset.openingStage > pages[asset.window]) continue;
                if (levels.Get(kind) >= asset.maxUpgradeCount) continue;
                int cost = PersistentCost(asset, levels.Get(kind));
                if (cost <= ore && ore - cost >= ore * archetype.oreReserveFraction)
                    candidates.Add(new KeyValuePair<BalanceUpgradeKind, PersistentUpgradeBase>(kind, asset));
            }
            if (candidates.Count == 0 || random.NextDouble() > archetype.persistentPurchaseChance) return;

            KeyValuePair<BalanceUpgradeKind, PersistentUpgradeBase> selected;
            if (archetype.strategy == BalancePlayerStrategy.Cheapest)
                selected = candidates.OrderBy(x => PersistentCost(x.Value, levels.Get(x.Key))).First();
            else if (archetype.strategy == BalancePlayerStrategy.Random)
                selected = candidates[random.Next(candidates.Count)];
            else
                selected = candidates[0];

            ore -= PersistentCost(selected.Value, levels.Get(selected.Key));
            levels.Increment(selected.Key);
        }
    }

    private static int PersistentCost(PersistentUpgradeBase asset, int level)
    {
        var serialized = new SerializedObject(asset);
        float baseCost = serialized.FindProperty("baseCost").floatValue;
        float exponent = serialized.FindProperty("upgradeCostExponent").floatValue;
        float additional = serialized.FindProperty("upgradeCostAdditional").floatValue;
        double raw = baseCost * Math.Pow(exponent, level) + additional * level;
        return raw >= int.MaxValue ? int.MaxValue : Math.Max(0, (int)raw);
    }

    private static void BuyPageUnlocks(BalanceScenario scenario, BalancePlayerArchetype archetype,
        System.Random random, int[] pages, ref int gold)
    {
        List<NextGrade> grades = scenario.gameSettings.UpgradeSettings.NextGrades;
        for (int window = 0; window < Math.Min(pages.Length, grades.Count); window++)
        {
            int guard = 0;
            while (grades[window].cost != null && pages[window] < grades[window].cost.Length && ++guard < 100)
            {
                int cost = grades[window].cost[pages[window]];
                if (gold < cost || random.NextDouble() > archetype.persistentPurchaseChance) break;
                gold -= cost;
                pages[window]++;
            }
        }
    }

    private static void AccrueMine(BalancePopulationScenario population, MineState mine)
    {
        if (!mine.owned) return;
        mine.storedGold = Math.Min(20f * mine.limit, mine.storedGold + 5f * mine.capacity * population.hoursPerDay);
        mine.storedOre = Math.Min(1000f * mine.limit, mine.storedOre + 100f * mine.capacity * population.hoursPerDay);
    }

    private static void CollectMine(MineState mine, ref int ore, ref int gold)
    {
        if (!mine.owned) return;
        ore += Mathf.FloorToInt(mine.storedOre);
        gold += Mathf.FloorToInt(mine.storedGold);
        mine.storedOre = 0f;
        mine.storedGold = 0f;
    }

    private static void ManageMine(BalancePopulationScenario population, BalancePlayerArchetype archetype,
        MineState mine, System.Random random, ref int ore, ref int gold)
    {
        float interest = archetype.strategy == BalancePlayerStrategy.Economy ? 1f :
            archetype.strategy == BalancePlayerStrategy.Saver ? 0.65f : 0.15f;
        if (random.NextDouble() > interest * archetype.persistentPurchaseChance) return;
        if (!mine.owned)
        {
            const int mineCost = 2000;
            if (ore < mineCost || ore - mineCost < ore * archetype.oreReserveFraction) return;
            ore -= mineCost;
            mine.owned = true;
        }

        int guard = 0;
        while (++guard < 100)
        {
            bool needsCapacity = mine.capacity <= mine.limit * 2;
            int currentLevel = needsCapacity ? mine.capacity : mine.limit;
            int baseCost = needsCapacity ? 300 : 100;
            int displayedCost = baseCost * currentLevel;
            if (gold < displayedCost) return;
            int chargedCost = population.reproduceMineOverchargeBug ? baseCost * (currentLevel + 1) : displayedCost;
            gold -= chargedCost;
            if (needsCapacity) mine.capacity++;
            else mine.limit++;
        }
    }

    private static float SampleNormal(System.Random random, float mean, float deviation)
    {
        double u1 = Math.Max(double.Epsilon, random.NextDouble());
        double u2 = random.NextDouble();
        double normal = Math.Sqrt(-2.0 * Math.Log(u1)) * Math.Cos(2.0 * Math.PI * u2);
        return mean + deviation * (float)normal;
    }

    private static bool TryKind(string title, out BalanceUpgradeKind kind)
    {
        string key = (title ?? string.Empty).Replace(" ", string.Empty).ToLowerInvariant();
        switch (key)
        {
            case "attackdamage": kind = BalanceUpgradeKind.AttackDamage; return true;
            case "attackspeed": kind = BalanceUpgradeKind.AttackSpeed; return true;
            case "maxtarget": kind = BalanceUpgradeKind.MaxTargets; return true;
            case "multishotchance": kind = BalanceUpgradeKind.Multishot; return true;
            case "range": kind = BalanceUpgradeKind.Range; return true;
            case "health": kind = BalanceUpgradeKind.Health; return true;
            case "regeneration": kind = BalanceUpgradeKind.Regeneration; return true;
            case "scrapperkill": kind = BalanceUpgradeKind.ScrapPerKill; return true;
            case "oreperkill": kind = BalanceUpgradeKind.OrePerKill; return true;
            case "goldper10kills": kind = BalanceUpgradeKind.GoldPerTenKills; return true;
            default: kind = default; return false;
        }
    }

    private static int Total(Dictionary<BalanceUpgradeKind, UpgradeInfo> upgrades, BalanceUpgradeKind kind) =>
        upgrades[kind].persistent + upgrades[kind].temporaryCount;

    private static T Find<T>(Dictionary<BalanceUpgradeKind, UpgradeInfo> upgrades, BalanceUpgradeKind kind) where T : TemporaryUpgradeBase =>
        upgrades[kind].temporary as T;

    private static float TowerDamage(BalanceScenario s, Dictionary<BalanceUpgradeKind, UpgradeInfo> u)
    {
        int levels = Total(u, BalanceUpgradeKind.AttackDamage);
        return s.gameSettings.TowerStartingAttackDamage * Mathf.Pow(1.15f, levels) + 0.6f * levels;
    }

    private static float TowerCooldown(BalanceScenario s, Dictionary<BalanceUpgradeKind, UpgradeInfo> u)
    {
        AttackSpeedTemporaryUpgrade asset = Find<AttackSpeedTemporaryUpgrade>(u, BalanceUpgradeKind.AttackSpeed);
        return s.gameSettings.TowerStartingAttackCooldown - Total(u, BalanceUpgradeKind.AttackSpeed) * (asset != null ? asset.AttackSpeedMultiplier : 0f);
    }

    private static int TowerMaxTargets(BalanceScenario s, Dictionary<BalanceUpgradeKind, UpgradeInfo> u) =>
        Math.Max(1, s.gameSettings.TowerStartingAttackTargets + Total(u, BalanceUpgradeKind.MaxTargets));

    private static float MultiShotChance(Dictionary<BalanceUpgradeKind, UpgradeInfo> u)
    {
        MultishotTemporaryUpgrade asset = Find<MultishotTemporaryUpgrade>(u, BalanceUpgradeKind.Multishot);
        return Mathf.Clamp01(Total(u, BalanceUpgradeKind.Multishot) * (asset != null ? asset.percentPerUpgrade : 0f));
    }

    private static float TowerRange(BalanceScenario s, Dictionary<BalanceUpgradeKind, UpgradeInfo> u)
    {
        TowerRangeTemporaryUpgrade asset = Find<TowerRangeTemporaryUpgrade>(u, BalanceUpgradeKind.Range);
        return s.gameSettings.TowerStartingTargetingRange + Total(u, BalanceUpgradeKind.Range) * (asset != null ? asset.rangePerGrade : 0f);
    }

    private static float TowerMaxHealth(BalanceScenario s, Dictionary<BalanceUpgradeKind, UpgradeInfo> u)
    {
        HealthTemporaryUpgrade asset = Find<HealthTemporaryUpgrade>(u, BalanceUpgradeKind.Health);
        return s.gameSettings.BaseMaxHealth + Total(u, BalanceUpgradeKind.Health) * (asset != null ? asset.HealthPerUpgrade : 0f);
    }

    private static float TowerRegeneration(Dictionary<BalanceUpgradeKind, UpgradeInfo> u)
    {
        HealthRegenerationTemporaryUpgrade asset = Find<HealthRegenerationTemporaryUpgrade>(u, BalanceUpgradeKind.Regeneration);
        return Total(u, BalanceUpgradeKind.Regeneration) * (asset != null ? asset.HealthRegenerationPerUpgrade : 0f);
    }

    private static float ExpMultiplier(Dictionary<BalanceUpgradeKind, UpgradeInfo> u)
    {
        ExpPerKill asset = Find<ExpPerKill>(u, BalanceUpgradeKind.ScrapPerKill);
        return 1f + Total(u, BalanceUpgradeKind.ScrapPerKill) * (asset != null ? asset.expPerUpgrade : 0f);
    }

    private static float OreMultiplier(Dictionary<BalanceUpgradeKind, UpgradeInfo> u)
    {
        OrePerKill asset = Find<OrePerKill>(u, BalanceUpgradeKind.OrePerKill);
        return 1f + Total(u, BalanceUpgradeKind.OrePerKill) * (asset != null ? asset.orePerUpgrade : 0f);
    }

    private static int GoldMultiplier(Dictionary<BalanceUpgradeKind, UpgradeInfo> u) =>
        1 + Total(u, BalanceUpgradeKind.GoldPerTenKills);

    private static int PickEnemy(float[] chances, System.Random random)
    {
        double roll = random.NextDouble();
        float cumulative = 0f;
        for (int i = 0; i < chances.Length; i++)
        {
            cumulative += chances[i];
            if (roll <= cumulative) return i;
        }
        return Math.Max(0, chances.Length - 1);
    }

    private static float Median(IEnumerable<float> values)
    {
        float[] sorted = values.OrderBy(x => x).ToArray();
        int middle = sorted.Length / 2;
        return sorted.Length % 2 == 0 ? (sorted[middle - 1] + sorted[middle]) * 0.5f : sorted[middle];
    }

    private static float Percentile(IEnumerable<float> values, float percentile)
    {
        float[] sorted = values.OrderBy(x => x).ToArray();
        if (sorted.Length == 0) return 0f;
        float position = Mathf.Clamp01(percentile) * (sorted.Length - 1);
        int lower = Mathf.FloorToInt(position);
        int upper = Mathf.CeilToInt(position);
        return Mathf.Lerp(sorted[lower], sorted[upper], position - lower);
    }

    private static void Validate(BalanceScenario scenario)
    {
        if (scenario == null) throw new ArgumentNullException(nameof(scenario));
        if (scenario.gameSettings == null) throw new InvalidOperationException("Scenario has no Game Settings reference.");
        if (scenario.gameSettings.EnemySpawnSettings == null || scenario.gameSettings.EnemySpawnSettings.Length == 0)
            throw new InvalidOperationException("Game Settings has no enemy tiers.");
        if (scenario.tier < 0 || scenario.tier >= scenario.gameSettings.EnemySpawnSettings.Length)
            throw new InvalidOperationException("Tier index is outside Game Settings.EnemySpawnSettings.");
    }

    private static void ValidatePopulation(BalancePopulationScenario population)
    {
        if (population == null) throw new ArgumentNullException(nameof(population));
        Validate(population.sessionScenario);
        if (population.archetypes == null || population.archetypes.Count == 0)
            throw new InvalidOperationException("Population scenario has no player archetypes.");
        if (population.archetypes.Sum(x => Math.Max(0f, x.populationWeight)) <= 0f)
            throw new InvalidOperationException("Player archetype weights must have a positive sum.");
    }

    private static void AddWarnings(BalanceScenario scenario, List<string> warnings)
    {
        Dictionary<BalanceUpgradeKind, UpgradeInfo> upgrades = BuildUpgradeMap(scenario);
        if (TowerCooldown(scenario, upgrades) <= 0f)
            warnings.Add("Attack cooldown is zero or negative at the selected permanent level. The production formula is not clamped.");
        foreach (StagesTier stage in scenario.gameSettings.EnemySpawnSettings[scenario.tier].stages)
        {
            float sum = stage._enemyChances.Sum();
            if (Math.Abs(sum - 1f) > 0.001f)
                warnings.Add($"Enemy chances sum to {sum:0.###}, not 1, at threshold {stage.enemiesKilledToStartStage}.");
        }
        warnings.Add("Combat is an approximation: projectile travel, animation clip lengths, frame ordering and ECS pooling are not reproduced exactly.");
    }
}
