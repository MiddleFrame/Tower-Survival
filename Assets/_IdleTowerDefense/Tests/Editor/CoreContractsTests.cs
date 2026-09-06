using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text.RegularExpressions;
using Leopotam.EcsLite;
using NUnit.Framework;
using UnityEditor;
using UnityEngine;
using UnityEngine.TestTools;

[Category("Fast")]
[Category("BuildRequired")]
public sealed class TowerWeaponContractTests
{
    [TestCase(0, 1f)]
    [TestCase(1, 1.75f)]
    [TestCase(2, 2.5225f)]
    public void AttackDamage_UsesCurrentProductionFormula(int level, float expected)
    {
        var weapon = new TowerWeapon();
        weapon.InitStartValues(2f, 1f);

        float actual = weapon.RecalculateAttackDamage(level);

        Assert.That(actual, Is.EqualTo(expected).Within(0.0001f));
    }

    [Test]
    public void AttackDamage_IsInitializedWithoutOpeningTheUpgradeUi()
    {
        var weapon = new TowerWeapon();

        weapon.InitStartValues(2f, 1f);

        Assert.That(weapon.AttackDamage, Is.EqualTo(1f).Within(0.0001f));
    }

    [Test]
    public void AttackCooldown_RemainsPositiveAtConfiguredMaximumLevel()
    {
        GameSettings settings = TestAssets.GameSettings;
        AttackSpeedTemporaryUpgrade upgrade = settings.UpgradeSettings.TemporaryUpgrades
            .OfType<AttackSpeedTemporaryUpgrade>().Single();
        var weapon = new TowerWeapon();
        weapon.InitStartValues(settings.TowerStartingAttackCooldown, settings.TowerStartingAttackDamage);

        float cooldown = weapon.RecalculateAttackCooldown(upgrade.maxUpgradeCount, upgrade.AttackSpeedMultiplier);

        Assert.That(cooldown, Is.GreaterThan(0f),
            "Configured attack-speed maximum makes the tower cooldown zero or negative.");
    }

    [Test]
    public void RangedEnemyRange_RemainsIndependentFromTowerRange()
    {
        FieldInfo field = typeof(EnemySpawnSystem).GetField("RANGED_ENEMY_ATTACK_RANGE",
            BindingFlags.NonPublic | BindingFlags.Static);

        Assert.That(field, Is.Not.Null, "The fixed ranged-enemy contract was removed or renamed.");
        Assert.That((float)field.GetRawConstantValue(), Is.EqualTo(2.12f).Within(0.0001f));
    }
}

[Category("Fast")]
[Category("BuildRequired")]
public sealed class EnemyCombatContractTests
{
    [Test]
    public void EnemyDamage_UsesBaseDamageMultiplierAndCooldown()
    {
        var damage = new EnemyDamage();

        damage.InitStartValues(true, 4f, 1.5f, 2f, null);

        Assert.That(damage.isRangeDamage, Is.True);
        Assert.That(damage.Damage, Is.EqualTo(6f));
        Assert.That(damage.DamageCooldown, Is.EqualTo(2f));
    }

    [Test]
    public void BarrelPrefab_IsOneShotEnemyWithAnimationHandler()
    {
        const string path = "Assets/_IdleTowerDefense/Prefabs/Enemies/Barrel.prefab";
        GameObject prefab = AssetDatabase.LoadAssetAtPath<GameObject>(path);
        EnemyView enemy = prefab != null ? prefab.GetComponent<EnemyView>() : null;

        Assert.That(prefab, Is.Not.Null, $"Missing prefab: {path}");
        Assert.That(enemy, Is.Not.Null, "Barrel prefab lost EnemyView.");
        Assert.That(enemy.destroyAfterAttack, Is.True,
            "Barrel must be destroyed only after its animation-event attack is dealt.");
        Assert.That(enemy.handler, Is.Not.Null, "Barrel lost its AnimationEventHandler reference.");
    }

    [Test]
    public void BarrelExplosion_QueuesDamageAtEndOfAnimation()
    {
        const string path = "Assets/_IdleTowerDefense/Prefabs/Enemies/Animation/Barrel/Boom.anim";
        AnimationClip clip = AssetDatabase.LoadAssetAtPath<AnimationClip>(path);

        Assert.That(clip, Is.Not.Null, $"Missing clip: {path}");
        AnimationEvent attackEvent = AnimationUtility.GetAnimationEvents(clip)
            .SingleOrDefault(x => x.functionName == nameof(AnimationEventHandler.OnAnimationEnded));
        Assert.That(attackEvent, Is.Not.Null,
            "Boom animation must invoke OnAnimationEnded so damage is queued by the animation, not proximity.");
        Assert.That(attackEvent.time, Is.GreaterThanOrEqualTo(clip.length - 1f / clip.frameRate - 0.001f),
            "Barrel damage event moved away from the final animation frame.");
    }

    [Test]
    public void SkeletonEnemyPrefab_HasCompleteMeleeAnimationContract()
    {
        const string prefabPath = "Assets/_IdleTowerDefense/Prefabs/Enemies/Skeleton Enemy.prefab";
        GameObject prefab = AssetDatabase.LoadAssetAtPath<GameObject>(prefabPath);
        EnemyView enemy = prefab != null ? prefab.GetComponent<EnemyView>() : null;

        Assert.That(prefab, Is.Not.Null, $"Missing prefab: {prefabPath}");
        Assert.That(enemy, Is.Not.Null, "Skeleton prefab lost EnemyView.");
        Assert.That(enemy.enemyNumber, Is.EqualTo(EnemyView.EnemyType.Basic));
        Assert.That(enemy.animator, Is.Not.Null, "Skeleton prefab lost Animator.");

        var overrideController = enemy.animator.runtimeAnimatorController as AnimatorOverrideController;
        Assert.That(overrideController, Is.Not.Null, "Skeleton must use its animation override controller.");
        var overrides = new List<KeyValuePair<AnimationClip, AnimationClip>>();
        overrideController.GetOverrides(overrides);

        foreach (string clipName in new[] { "Idle", "Run", "Hit", "Hit_down", "Hit_up" })
        {
            AnimationClip clip = overrides
                .Where(pair => pair.Key != null && pair.Key.name == clipName)
                .Select(pair => pair.Value)
                .SingleOrDefault();
            Assert.That(clip, Is.Not.Null, $"Skeleton override is missing {clipName}.");

            if (!clipName.StartsWith("Hit", StringComparison.Ordinal))
                continue;

            AnimationEvent attackEvent = AnimationUtility.GetAnimationEvents(clip)
                .SingleOrDefault(x => x.functionName == nameof(AnimationEventHandler.OnAnimationEnded));
            Assert.That(attackEvent, Is.Not.Null, $"{clipName} must queue damage on its final frame.");
            Assert.That(attackEvent.time, Is.GreaterThanOrEqualTo(clip.length - 1f / clip.frameRate - 0.001f));
        }
    }
}

[Category("DataValidation")]
[Category("BuildRequired")]
public sealed class ProductionBalanceAssetTests
{
    [Test]
    public void EnemyTiers_HaveValidStageData()
    {
        foreach (EnemySpawnSettings tier in TestAssets.GameSettings.EnemySpawnSettings)
        {
            Assert.That(tier, Is.Not.Null);
            Assert.That(tier._enemyList, Is.Not.Null, $"{tier.name}: missing enemy list.");
            Assert.That(tier._enemyList.EnemySpawns, Is.Not.Empty, $"{tier.name}: no enemies.");
            Assert.That(tier._stats.Length, Is.EqualTo(tier._enemyList.EnemySpawns.Count),
                $"{tier.name}: stat count differs from enemy count.");
            Assert.That(tier.EnemyHealthMultiplier, Is.GreaterThanOrEqualTo(1f));
            Assert.That(tier.EnemyDamageMultiplier, Is.GreaterThanOrEqualTo(1f));

            int previousThreshold = -1;
            foreach (StagesTier stage in tier.stages)
            {
                Assert.That(stage.enemiesKilledToStartStage, Is.GreaterThan(previousThreshold),
                    $"{tier.name}: stage thresholds must be strictly increasing.");
                Assert.That(stage.enemySpawnRate, Is.GreaterThan(0f), $"{tier.name}: spawn interval must be positive.");
                Assert.That(stage.enemySpawnCount, Is.GreaterThan(0), $"{tier.name}: group size must be positive.");
                Assert.That(stage._enemyChances.Length, Is.EqualTo(tier._enemyList.EnemySpawns.Count));
                Assert.That(stage._enemyChances.Sum(), Is.EqualTo(1f).Within(0.001f),
                    $"{tier.name}: enemy chances must sum to one.");
                Assert.That(stage._enemyChances, Has.All.GreaterThanOrEqualTo(0f));
                previousThreshold = stage.enemiesKilledToStartStage;
            }
        }
    }

    [Test]
    public void TierUnlockRecords_AreNonDecreasing()
    {
        int previous = -1;
        foreach (EnemySpawnSettings tier in TestAssets.GameSettings.EnemySpawnSettings)
        {
            Assert.That(tier.RecordToOpen, Is.GreaterThanOrEqualTo(previous),
                "A later tier cannot require a lower record than the preceding tier.");
            previous = tier.RecordToOpen;
        }
    }

    [Test]
    public void TemporaryAndPersistentUpgrades_HaveMatchingContracts()
    {
        UpgradeSettings settings = TestAssets.GameSettings.UpgradeSettings;
        Dictionary<string, TemporaryUpgradeBase> temporary = settings.TemporaryUpgrades.ToDictionary(x => x.Title);
        Dictionary<string, PersistentUpgradeBase> persistent = settings.PersistentUpgrades.ToDictionary(x => x.Title);

        Assert.That(temporary.Keys, Is.EquivalentTo(persistent.Keys),
            "Every in-run upgrade must have one persistent upgrade with the same stable title.");
        foreach (string title in temporary.Keys)
        {
            Assert.That(temporary[title].maxUpgradeCount, Is.EqualTo(persistent[title].maxUpgradeCount),
                $"{title}: temporary and persistent maximum levels differ.");
            Assert.That(temporary[title].window, Is.InRange(0, 2));
            Assert.That(persistent[title].window, Is.InRange(0, 2));
        }
    }

    [Test]
    public void UpgradeCosts_ArePositiveAndNonDecreasing()
    {
        UpgradeSettings settings = TestAssets.GameSettings.UpgradeSettings;
        foreach (TemporaryUpgradeBase upgrade in settings.TemporaryUpgrades)
        {
            int previous = 0;
            for (int level = 0; level < Math.Min(upgrade.maxUpgradeCount, 100); level++)
            {
                int cost = Mathf.FloorToInt((level + 1) * upgrade.costUpgradeMultiplier);
                Assert.That(cost, Is.GreaterThan(0), $"{upgrade.Title}: temporary cost is not positive.");
                Assert.That(cost, Is.GreaterThanOrEqualTo(previous), $"{upgrade.Title}: temporary cost decreased.");
                previous = cost;
            }
        }

        foreach (PersistentUpgradeBase upgrade in settings.PersistentUpgrades)
        {
            SerializedObject serialized = new SerializedObject(upgrade);
            float baseCost = serialized.FindProperty("baseCost").floatValue;
            float exponent = serialized.FindProperty("upgradeCostExponent").floatValue;
            float additional = serialized.FindProperty("upgradeCostAdditional").floatValue;
            double previous = 0;
            for (int level = 0; level < Math.Min(upgrade.maxUpgradeCount, 100); level++)
            {
                double cost = baseCost * Math.Pow(exponent, level) + additional * level;
                Assert.That(cost, Is.GreaterThan(0), $"{upgrade.Title}: persistent cost is not positive.");
                Assert.That(cost, Is.GreaterThanOrEqualTo(previous), $"{upgrade.Title}: persistent cost decreased.");
                previous = cost;
            }
        }
    }

    [Test]
    public void PageUnlockCosts_ArePositive()
    {
        List<NextGrade> pages = TestAssets.GameSettings.UpgradeSettings.NextGrades;
        Assert.That(pages.Count, Is.EqualTo(3), "Expected Attack, Defence and Utility page progressions.");
        foreach (NextGrade page in pages)
        {
            Assert.That(page.cost, Is.Not.Null);
            Assert.That(page.cost, Has.All.GreaterThan(0));
        }
    }

    [Test]
    public void PopulationScenario_HasUsableCohortDistribution()
    {
        BalancePopulationScenario population = TestAssets.Population;

        Assert.That(population.sessionScenario, Is.Not.Null);
        Assert.That(population.archetypes, Is.Not.Empty);
        Assert.That(population.archetypes.Sum(x => x.populationWeight), Is.GreaterThan(0f));
        Assert.That(population.archetypes, Has.All.Matches<BalancePlayerArchetype>(x =>
            x.populationWeight > 0f && x.dailyPlayChance > 0f));
    }
}

[Category("Balance")]
[Category("BuildRequired")]
public sealed class BalanceSimulationContractTests
{
    [Test]
    public void PopulationSimulation_IsDeterministicAndDoesNotMutateProductionSettings()
    {
        BalancePopulationScenario population = UnityEngine.Object.Instantiate(TestAssets.Population);
        BalanceScenario session = UnityEngine.Object.Instantiate(population.sessionScenario);
        population.sessionScenario = session;
        population.players = 3;
        population.days = 1;
        population.sessionsPerDay = 1;
        session.maximumSpawnEvents = 25;
        session.maximumSeconds = 45f;
        float originalSpawnRadius = session.gameSettings.EnemySpawnRadius;

        BalanceSimulator.PopulationResult first = BalanceSimulator.RunPopulation(population);
        BalanceSimulator.PopulationResult second = BalanceSimulator.RunPopulation(population);

        Assert.That(JsonUtility.ToJson(second), Is.EqualTo(JsonUtility.ToJson(first)));
        Assert.That(first.playerResults.Count, Is.EqualTo(population.players));
        Assert.That(session.gameSettings.EnemySpawnRadius, Is.EqualTo(originalSpawnRadius));
        UnityEngine.Object.DestroyImmediate(session);
        UnityEngine.Object.DestroyImmediate(population);
    }
}

[Category("Fast")]
[Category("BuildRequired")]
public sealed class NegativeEconomyContractTests
{
    [Test]
    public void SubtractValues_RejectsMissingInsufficientAndNegativeCostsWithoutMutation()
    {
        var currencies = new Dictionary<CurrencyTypes, Currency>
        {
            [CurrencyTypes.Ore] = new Currency { type = CurrencyTypes.Ore, value = 10 }
        };

        Assert.That(currencies.SubtractValues(
            new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, 1)), Is.False);
        Assert.That(currencies.SubtractValues(
            new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Ore, 11)), Is.False);
        Assert.That(currencies.SubtractValues(
            new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Ore, -1)), Is.False);
        Assert.That(currencies[CurrencyTypes.Ore].value, Is.EqualTo(10),
            "A rejected purchase must not mutate the balance.");
    }

    [Test]
    public void SubtractValues_AllowsExactBalanceWithoutGoingNegative()
    {
        var currencies = new Dictionary<CurrencyTypes, Currency>
        {
            [CurrencyTypes.Gold] = new Currency { type = CurrencyTypes.Gold, value = 300 }
        };

        bool purchased = currencies.SubtractValues(
            new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, 300));

        Assert.That(purchased, Is.True);
        Assert.That(currencies[CurrencyTypes.Gold].value, Is.Zero);
    }

    [Test]
    public void LinearUpgrade_InsufficientBalanceChangesNeitherLevelNorBalance()
    {
        var currencies = new Dictionary<CurrencyTypes, Currency>
        {
            [CurrencyTypes.Gold] = new Currency { type = CurrencyTypes.Gold, value = 299 }
        };
        int level = 1;

        bool purchased = EconomyRules.TryBuyLinearLevel(
            currencies, CurrencyTypes.Gold, 300, ref level);

        Assert.That(purchased, Is.False);
        Assert.That(level, Is.EqualTo(1));
        Assert.That(currencies[CurrencyTypes.Gold].value, Is.EqualTo(299));
    }

    [Test]
    public void LinearUpgrade_ChargesCurrentLevelBeforeIncrementing()
    {
        var currencies = new Dictionary<CurrencyTypes, Currency>
        {
            [CurrencyTypes.Gold] = new Currency { type = CurrencyTypes.Gold, value = 300 }
        };
        int level = 1;

        bool purchased = EconomyRules.TryBuyLinearLevel(
            currencies, CurrencyTypes.Gold, 300, ref level);

        Assert.That(purchased, Is.True);
        Assert.That(level, Is.EqualTo(2));
        Assert.That(currencies[CurrencyTypes.Gold].value, Is.Zero,
            "The mine must charge the displayed current-level price, not the next-level price.");
    }

    [TestCase(0, 1)]
    [TestCase(100, 0)]
    public void LinearUpgrade_InvalidConfigurationDoesNotMutateState(int baseCost, int startingLevel)
    {
        var currencies = new Dictionary<CurrencyTypes, Currency>
        {
            [CurrencyTypes.Gold] = new Currency { type = CurrencyTypes.Gold, value = 1000 }
        };
        int level = startingLevel;

        bool purchased = EconomyRules.TryBuyLinearLevel(
            currencies, CurrencyTypes.Gold, baseCost, ref level);

        Assert.That(purchased, Is.False);
        Assert.That(level, Is.EqualTo(startingLevel));
        Assert.That(currencies[CurrencyTypes.Gold].value, Is.EqualTo(1000));
    }
}

[Category("Fast")]
[Category("BuildRequired")]
public sealed class NegativeUpgradeStateContractTests
{
    [Test]
    public void PersistentUpgrade_LevelPastMaximumRemainsCompleted()
    {
        PersistentUpgradeBase upgrade = UnityEngine.Object.Instantiate(
            TestAssets.GameSettings.UpgradeSettings.PersistentUpgrades[0]);
        Dictionary<string, int> previousCounts = PersistentUpgradeManager.PersistentUpgradeCounts;
        try
        {
            upgrade.Title = "__persistent_over_max_test__";
            upgrade.maxUpgradeCount = 5;
            PersistentUpgradeManager.PersistentUpgradeCounts = new Dictionary<string, int>
            {
                [upgrade.Title] = 6
            };

            Assert.That(upgrade.CanUpgrade(), Is.EqualTo(StatusItem.Completed));
        }
        finally
        {
            PersistentUpgradeManager.PersistentUpgradeCounts = previousCounts;
            UnityEngine.Object.DestroyImmediate(upgrade);
        }
    }

    [Test]
    public void TemporaryUpgrade_TotalLevelPastMaximumRemainsCompleted()
    {
        TemporaryUpgradeBase upgrade = UnityEngine.Object.Instantiate(
            TestAssets.GameSettings.UpgradeSettings.TemporaryUpgrades[0]);
        Dictionary<string, int> previousPersistent = PersistentUpgradeManager.PersistentUpgradeCounts;
        var managerObject = new GameObject("TemporaryUpgradeManager_NegativeTest");
        TemporaryUpgradeManager manager = managerObject.AddComponent<TemporaryUpgradeManager>();
        typeof(TemporaryUpgradeManager).GetField("gameSettings", BindingFlags.Instance | BindingFlags.NonPublic)
            ?.SetValue(manager, TestAssets.GameSettings);
        try
        {
            upgrade.Title = "__temporary_over_max_test__";
            upgrade.maxUpgradeCount = 5;
            manager.TemporaryUpgradeCounts[upgrade.Title] = 4;
            PersistentUpgradeManager.PersistentUpgradeCounts = new Dictionary<string, int>
            {
                [upgrade.Title] = 2
            };

            Assert.That(upgrade.CanUpgrade(), Is.EqualTo(StatusItem.Completed));
        }
        finally
        {
            PersistentUpgradeManager.PersistentUpgradeCounts = previousPersistent;
            UnityEngine.Object.DestroyImmediate(upgrade);
            UnityEngine.Object.DestroyImmediate(managerObject);
        }
    }

    [Test]
    public void TemporaryUpgrade_WithInsufficientCurrencyChangesNoGameplayState()
    {
        ExpPerKill upgrade = UnityEngine.Object.Instantiate(TestAssets.GameSettings.UpgradeSettings
            .TemporaryUpgrades.OfType<ExpPerKill>().Single());
        Dictionary<string, int> previousPersistent = PersistentUpgradeManager.PersistentUpgradeCounts;
        Dictionary<CurrencyTypes, Currency> previousCurrencies = DataController.Currency;
        float previousMultiplier = EnemySpawnSystem.expMultiplier;
        var managerObject = new GameObject("TemporaryUpgradeManager_InsufficientFundsTest");
        TemporaryUpgradeManager manager = managerObject.AddComponent<TemporaryUpgradeManager>();
        typeof(TemporaryUpgradeManager).GetField("gameSettings", BindingFlags.Instance | BindingFlags.NonPublic)
            ?.SetValue(manager, TestAssets.GameSettings);
        try
        {
            manager.TemporaryUpgradeCounts[upgrade.Title] = 0;
            PersistentUpgradeManager.PersistentUpgradeCounts = new Dictionary<string, int>
            {
                [upgrade.Title] = 0
            };
            int cost = upgrade.GetCost().Value;
            DataController.Currency = new Dictionary<CurrencyTypes, Currency>
            {
                [CurrencyTypes.Exp] = new Currency
                {
                    type = CurrencyTypes.Exp,
                    value = Mathf.Max(0, cost - 1)
                }
            };
            int startingBalance = DataController.Currency[CurrencyTypes.Exp].value;

            upgrade.Upgrade();

            Assert.That(manager.TemporaryUpgradeCounts[upgrade.Title], Is.Zero);
            Assert.That(DataController.Currency[CurrencyTypes.Exp].value, Is.EqualTo(startingBalance));
            Assert.That(EnemySpawnSystem.expMultiplier, Is.EqualTo(previousMultiplier));
        }
        finally
        {
            PersistentUpgradeManager.PersistentUpgradeCounts = previousPersistent;
            DataController.Currency = previousCurrencies;
            EnemySpawnSystem.expMultiplier = previousMultiplier;
            UnityEngine.Object.DestroyImmediate(upgrade);
            UnityEngine.Object.DestroyImmediate(managerObject);
        }
    }

    [Test]
    public void PersistentCompletedStateDisablesPreviouslyInteractableButton()
    {
        const string path = "Assets/_IdleTowerDefense/Prefabs/UI/PersistentUpgradeButton.prefab";
        GameObject instance = UnityEngine.Object.Instantiate(AssetDatabase.LoadAssetAtPath<GameObject>(path));
        try
        {
            PersistentUpgradeButton button = instance.GetComponent<PersistentUpgradeButton>();
            Assert.That(button, Is.Not.Null);
            button.Button.interactable = true;

            button.UpdateButtonInteractable(StatusItem.Completed);

            Assert.That(button.Button.interactable, Is.False,
                "A completed upgrade must not remain clickable after its last purchase.");
        }
        finally
        {
            UnityEngine.Object.DestroyImmediate(instance);
        }
    }

    [Test]
    public void TemporaryCompletedStateDisablesPreviouslyInteractableButton()
    {
        const string path = "Assets/_IdleTowerDefense/Prefabs/UI/TemporaryUpgradeButton.prefab";
        GameObject instance = UnityEngine.Object.Instantiate(AssetDatabase.LoadAssetAtPath<GameObject>(path));
        try
        {
            TemporaryUpgradeButton button = instance.GetComponent<TemporaryUpgradeButton>();
            Assert.That(button, Is.Not.Null);
            button.Button.interactable = true;
            button.statusItem = StatusItem.Completed;
            MethodInfo updateStatus = typeof(TemporaryUpgradeButton).GetMethod("UpdateStatus",
                BindingFlags.Instance | BindingFlags.NonPublic);

            Assert.That(updateStatus, Is.Not.Null);
            updateStatus.Invoke(button, null);

            Assert.That(button.Button.interactable, Is.False,
                "A completed in-run upgrade must not remain clickable after its last purchase.");
        }
        finally
        {
            UnityEngine.Object.DestroyImmediate(instance);
        }
    }
}

[Category("Fast")]
[Category("BuildRequired")]
public sealed class NegativeEnemyDamageQueueContractTests
{
    [Test]
    public void AnimationEvent_QueuesAtMostOnePendingDamage()
    {
        var world = new EcsWorld();
        try
        {
            int enemy = world.NewEntity();
            EcsPackedEntity packed = world.PackEntity(enemy);
            EcsPool<Damage> damagePool = world.GetPool<Damage>();

            Assert.That(EnemyDamageQueue.TryQueue(packed, world, damagePool), Is.True);
            Assert.That(EnemyDamageQueue.TryQueue(packed, world, damagePool), Is.False,
                "Repeated animation events must not queue duplicate tower damage.");
            Assert.That(damagePool.Has(enemy), Is.True);
        }
        finally
        {
            world.Destroy();
        }
    }

    [Test]
    public void AnimationEvent_DoesNotQueueDamageForDestroyedEnemy()
    {
        var world = new EcsWorld();
        try
        {
            int enemy = world.NewEntity();
            EcsPackedEntity packed = world.PackEntity(enemy);
            EcsPool<Damage> damagePool = world.GetPool<Damage>();
            world.DelEntity(enemy);

            Assert.That(EnemyDamageQueue.TryQueue(packed, world, damagePool), Is.False);
        }
        finally
        {
            world.Destroy();
        }
    }

    [Test]
    public void EnemyDamageInitialization_DoesNotDealDamage()
    {
        int callbacks = 0;
        var damage = new EnemyDamage();

        damage.InitStartValues(false, 10f, 2f, 1f, (_, __) => callbacks++);

        Assert.That(callbacks, Is.Zero,
            "Creating an enemy damage component must not damage the tower before an animation event.");
    }
}

[Category("Fast")]
[Category("BuildRequired")]
public sealed class TowerTargetingContractTests
{
    [Test]
    public void Targeting_SkipsPendingDestroyAndStoresGenerationSafeTarget()
    {
        var world = new EcsWorld();
        var systems = new EcsSystems(world).Add(new TowerTargetingSystem());
        try
        {
            int tower = world.NewEntity();
            world.GetPool<Tower>().Add(tower);
            ref TowerTargetSelector selector = ref world.GetPool<TowerTargetSelector>().Add(tower);
            selector.TargetingRange = 10f;
            selector.RenderedTargetingRange = 10f;
            selector.MaxTargets = 1;
            selector.MultiShotChange = -1f;
            selector.CurrentTargets = new List<EcsPackedEntity>(1);
            ref TowerWeapon weapon = ref world.GetPool<TowerWeapon>().Add(tower);
            weapon.AttackCooldownRemaining = -1f;

            int pendingDestroy = AddEnemy(world, 1f);
            world.GetPool<Destroy>().Add(pendingDestroy);
            int liveEnemy = AddEnemy(world, 2f);

            systems.Init();
            systems.Run();

            Assert.That(selector.CurrentTargets, Has.Count.EqualTo(1));
            Assert.That(selector.CurrentTargets[0].Unpack(world, out int selectedEnemy), Is.True);
            Assert.That(selectedEnemy, Is.EqualTo(liveEnemy));

            EcsPackedEntity selectedTarget = selector.CurrentTargets[0];
            world.DelEntity(liveEnemy);
            Assert.That(selectedTarget.Unpack(world, out _), Is.False,
                "A target handle must not resolve to a recycled ECS entity.");
        }
        finally
        {
            systems.Destroy();
            world.Destroy();
        }
    }

    [Test]
    public void Targeting_ReusesCurrentTargetListAcrossShots()
    {
        var world = new EcsWorld();
        var systems = new EcsSystems(world).Add(new TowerTargetingSystem());
        try
        {
            int tower = world.NewEntity();
            world.GetPool<Tower>().Add(tower);
            ref TowerTargetSelector selector = ref world.GetPool<TowerTargetSelector>().Add(tower);
            selector.TargetingRange = 10f;
            selector.RenderedTargetingRange = 10f;
            selector.MaxTargets = 1;
            selector.MultiShotChange = -1f;
            selector.CurrentTargets = new List<EcsPackedEntity>(1);
            List<EcsPackedEntity> originalList = selector.CurrentTargets;
            ref TowerWeapon weapon = ref world.GetPool<TowerWeapon>().Add(tower);
            weapon.AttackCooldownRemaining = -1f;
            AddEnemy(world, 2f);

            systems.Init();
            systems.Run();
            weapon.AttackCooldownRemaining = -1f;
            systems.Run();

            Assert.That(selector.CurrentTargets, Is.SameAs(originalList),
                "Target selection must reuse its list instead of allocating one per shot.");
        }
        finally
        {
            systems.Destroy();
            world.Destroy();
        }
    }

    private static int AddEnemy(EcsWorld world, float distance)
    {
        int enemy = world.NewEntity();
        world.GetPool<Enemy>().Add(enemy);
        ref Position position = ref world.GetPool<Position>().Add(enemy);
        position.x = distance;
        return enemy;
    }
}

[Category("Fast")]
[Category("BuildRequired")]
public sealed class RuntimeSettingsContractTests
{
    [Test]
    public void RuntimeSpawnRadius_DoesNotMutateAuthoredGameSettings()
    {
        GameSettings settings = ScriptableObject.CreateInstance<GameSettings>();
        try
        {
            settings.EnemySpawnRadius = 6f;
            var sharedData = new SharedData();
            sharedData.InitDefaultValues(settings);

            sharedData.SetEnemySpawnRadius(12f);

            Assert.That(sharedData.EnemySpawnRadius, Is.EqualTo(12f));
            Assert.That(settings.EnemySpawnRadius, Is.EqualTo(6f),
                "Runtime upgrades must not write transient state into a ScriptableObject asset.");
        }
        finally
        {
            UnityEngine.Object.DestroyImmediate(settings);
        }
    }

    [Test]
    public void RuntimeCurrency_DoesNotReuseAuthoredGameSettingsObjects()
    {
        Dictionary<CurrencyTypes, Currency> originalRuntimeCurrencies = DataController.Currency;
        var authoredCurrencies = new List<Currency>
        {
            new Currency { type = CurrencyTypes.Exp, value = 3 },
            new Currency { type = CurrencyTypes.Ore, value = 5 },
            new Currency { type = CurrencyTypes.Gold, value = 7 },
            new Currency { type = CurrencyTypes.Crystals, value = 11 }
        };

        try
        {
            DataController.Currency = new Dictionary<CurrencyTypes, Currency>();

            DataController.LoadData(authoredCurrencies);
            DataController.Currency[CurrencyTypes.Exp].value = 99;

            Assert.That(DataController.Currency[CurrencyTypes.Exp], Is.Not.SameAs(authoredCurrencies[0]));
            Assert.That(DataController.Currency.ContainsKey(CurrencyTypes.Crystals), Is.True,
                "Premium currency must be present in the persistent runtime economy.");
            Assert.That(authoredCurrencies[0].value, Is.EqualTo(3),
                "Runtime currency changes must not write into GameSettings.currencies.");
        }
        finally
        {
            DataController.Currency = originalRuntimeCurrencies;
        }
    }

    [Test]
    public void CurrencyAddValues_UpdatesBalanceWithoutVisibleCounter()
    {
        var currencies = new Dictionary<CurrencyTypes, Currency>
        {
            [CurrencyTypes.Crystals] = new Currency { type = CurrencyTypes.Crystals, value = 2 }
        };
        DataController.currencyText.Remove(CurrencyTypes.Crystals);

        currencies.AddValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Crystals, 1));

        Assert.That(currencies[CurrencyTypes.Crystals].value, Is.EqualTo(3));
    }
}

[Category("Fast")]
[Category("BuildRequired")]
public sealed class NegativeLocalizationContractTests
{
    private const string CatalogPath = "Assets/Resources/Localization/strings.txt";

    [Test]
    public void MissingKey_ReturnsVisibleKeyInsteadOfBlankText()
    {
        const string key = "__missing_localization_contract_key__";
        LogAssert.Expect(LogType.Warning, "Missing localization key: " + key);

        string value = LightweightLocalization.Get(key);

        Assert.That(value, Is.EqualTo(key));
        Assert.That(value, Is.Not.Empty);
    }

    [Test]
    public void UnknownEnglishSource_RemainsUnchanged()
    {
        const string source = "__unknown source text__";

        Assert.That(LightweightLocalization.FromSource(source), Is.EqualTo(source));
    }

    [Test]
    public void SerializedTrailingWhitespace_DoesNotBreakLocalizationLookup()
    {
        const string source = "'Upgrades\n\n";

        Assert.That(LightweightLocalization.FromSource(source),
            Is.EqualTo(LightweightLocalization.Get("static.upgrades_quoted")));
    }

    [Test]
    public void SelectingCurrentLanguage_DoesNotEmitDuplicateChangeEvent()
    {
        LightweightLocalization.Initialize();
        int eventCount = 0;
        void OnLanguageChanged() => eventCount++;
        LightweightLocalization.LanguageChanged += OnLanguageChanged;
        try
        {
            LightweightLocalization.SetLanguage(LightweightLocalization.CurrentLanguage);
            Assert.That(eventCount, Is.Zero);
        }
        finally
        {
            LightweightLocalization.LanguageChanged -= OnLanguageChanged;
        }
    }

    [Test]
    public void Catalog_HasOneCompleteColumnForEverySupportedLanguage()
    {
        string[] lines = File.ReadAllLines(CatalogPath);
        string[] expectedHeader =
        {
            "key", "en", "ru", "pt-BR", "es-419", "de", "fr", "tr", "id", "pl", "it"
        };

        Assert.That(lines, Is.Not.Empty);
        Assert.That(lines[0].Split('\t'), Is.EqualTo(expectedHeader));
        Assert.That(expectedHeader.Length - 1, Is.EqualTo(Enum.GetValues(typeof(GameLanguage)).Length));

        for (int lineIndex = 1; lineIndex < lines.Length; lineIndex++)
        {
            if (string.IsNullOrWhiteSpace(lines[lineIndex]) || lines[lineIndex].StartsWith("#", StringComparison.Ordinal))
                continue;

            string[] columns = lines[lineIndex].Split('\t');
            Assert.That(columns.Length, Is.EqualTo(expectedHeader.Length),
                $"Localization row {lineIndex + 1} must contain {expectedHeader.Length} columns.");
            for (int columnIndex = 1; columnIndex < columns.Length; columnIndex++)
                Assert.That(columns[columnIndex], Is.Not.Empty,
                    $"Localization key '{columns[0]}' is empty for {expectedHeader[columnIndex]}.");
        }
    }

    [Test]
    public void Catalog_TranslationsPreserveFormatArguments()
    {
        string[] lines = File.ReadAllLines(CatalogPath);
        for (int lineIndex = 1; lineIndex < lines.Length; lineIndex++)
        {
            if (string.IsNullOrWhiteSpace(lines[lineIndex]) || lines[lineIndex].StartsWith("#", StringComparison.Ordinal))
                continue;

            string[] columns = lines[lineIndex].Split('\t');
            string[] englishArguments = ExtractFormatArguments(columns[1]);
            for (int columnIndex = 2; columnIndex < columns.Length; columnIndex++)
                Assert.That(ExtractFormatArguments(columns[columnIndex]), Is.EqualTo(englishArguments),
                    $"Localization key '{columns[0]}' changed its format arguments in column {columnIndex}.");
        }
    }

    [Test]
    public void TurkishUppercase_PreservesDottedAndDotlessI()
    {
        GameLanguage originalLanguage = LightweightLocalization.CurrentLanguage;
        try
        {
            LightweightLocalization.PreviewLanguage(GameLanguage.Turkish);
            Assert.That(LightweightLocalization.ToUpper("geliştirme saldırı"),
                Is.EqualTo("GELİŞTİRME SALDIRI"));
        }
        finally
        {
            LightweightLocalization.PreviewLanguage(originalLanguage);
        }
    }

    private static string[] ExtractFormatArguments(string value)
    {
        return Regex.Matches(value, @"\{\d+(?::[^}]*)?\}")
            .Cast<Match>()
            .Select(match => match.Value)
            .OrderBy(argument => argument, StringComparer.Ordinal)
            .ToArray();
    }
}

[Category("Fast")]
[Category("BuildRequired")]
public sealed class ProjectHealthFingerprintContractTests
{
    [Test]
    public void ContentFingerprint_IgnoresTimestampOnlyChanges()
    {
        string directory = Path.Combine("Library", "ProjectHealth", "FingerprintTests");
        string path = Path.Combine(directory, Guid.NewGuid().ToString("N") + ".tmp");
        Directory.CreateDirectory(directory);
        try
        {
            File.WriteAllText(path, "same project input");
            string before = ProjectHealthFingerprint.FileContentHash(path);

            File.SetLastWriteTimeUtc(path, DateTime.UtcNow.AddDays(-1));
            string after = ProjectHealthFingerprint.FileContentHash(path);

            Assert.That(after, Is.EqualTo(before));
        }
        finally
        {
            if (File.Exists(path))
                File.Delete(path);
        }
    }
}

internal static class TestAssets
{
    private const string GameSettingsPath = "Assets/_IdleTowerDefense/ScriptableObjects/Game Settings.asset";
    private const string PopulationPath = "Assets/_IdleTowerDefense/ScriptableObjects/Balance/Current Population.asset";

    internal static GameSettings GameSettings
    {
        get
        {
            GameSettings asset = AssetDatabase.LoadAssetAtPath<GameSettings>(GameSettingsPath);
            Assert.That(asset, Is.Not.Null, $"Missing Game Settings at {GameSettingsPath}");
            return asset;
        }
    }

    internal static BalancePopulationScenario Population
    {
        get
        {
            BalancePopulationScenario asset = AssetDatabase.LoadAssetAtPath<BalancePopulationScenario>(PopulationPath);
            Assert.That(asset, Is.Not.Null, $"Missing population scenario at {PopulationPath}");
            return asset;
        }
    }
}
