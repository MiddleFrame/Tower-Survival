using System;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Balance Scenario", menuName = "Idle Tower Defense/Balance Lab/Scenario")]
public sealed class BalanceScenario : ScriptableObject
{
    public GameSettings gameSettings;

    [Header("Run")]
    [Min(0)] public int tier;
    [Min(1)] public int runs = 100;
    [Min(1)] public int maximumSpawnEvents = 1000;
    [Min(1f)] public float maximumSeconds = 1800f;
    [Range(0.01f, 0.25f)] public float simulationStep = 0.05f;
    public int randomSeed = 12345;

    [Header("Permanent levels at run start")]
    public BalanceLevels persistentLevels = new BalanceLevels();

    [Header("Unlocked upgrade pages (Attack / Defence / Utility)")]
    [Min(0)] public int attackPage;
    [Min(0)] public int defencePage;
    [Min(0)] public int utilityPage;

    [Header("Automatic in-run spending")]
    public bool buyTemporaryUpgrades = true;
    public List<BalanceUpgradeKind> purchasePriority = new List<BalanceUpgradeKind>
    {
        BalanceUpgradeKind.AttackDamage,
        BalanceUpgradeKind.AttackSpeed,
        BalanceUpgradeKind.ScrapPerKill,
        BalanceUpgradeKind.Health,
        BalanceUpgradeKind.Regeneration,
        BalanceUpgradeKind.Multishot,
        BalanceUpgradeKind.MaxTargets,
        BalanceUpgradeKind.Range,
        BalanceUpgradeKind.OrePerKill,
        BalanceUpgradeKind.GoldPerTenKills
    };

    [Header("Model assumptions")]
    [Tooltip("Seconds before an enemy that reached the tower deals its first animated hit.")]
    [Min(0f)] public float enemyFirstAttackDelay = 0.8f;
    [Tooltip("Multiplies simulated tower damage. Use this to represent misses, projectile travel and target switching.")]
    [Range(0.1f, 1.5f)] public float towerDamageEfficiency = 1f;
    [Tooltip("Independent scale for testing enemy health without editing production assets.")]
    [Min(0.01f)] public float enemyHealthScale = 1f;
    [Tooltip("Independent scale for testing enemy damage without editing production assets.")]
    [Min(0.01f)] public float enemyDamageScale = 1f;
    [Tooltip("Independent scale for testing spawn intervals without editing production assets.")]
    [Min(0.01f)] public float spawnIntervalScale = 1f;
    [Tooltip("Independent scale for all earned currencies.")]
    [Min(0f)] public float rewardScale = 1f;
}

[Serializable]
public sealed class BalanceLevels
{
    [Min(0)] public int attackDamage;
    [Min(0)] public int attackSpeed;
    [Min(0)] public int maxTargets;
    [Min(0)] public int multishot;
    [Min(0)] public int range;
    [Min(0)] public int health;
    [Min(0)] public int regeneration;
    [Min(0)] public int scrapPerKill;
    [Min(0)] public int orePerKill;
    [Min(0)] public int goldPerTenKills;

    public int Get(BalanceUpgradeKind kind)
    {
        switch (kind)
        {
            case BalanceUpgradeKind.AttackDamage: return attackDamage;
            case BalanceUpgradeKind.AttackSpeed: return attackSpeed;
            case BalanceUpgradeKind.MaxTargets: return maxTargets;
            case BalanceUpgradeKind.Multishot: return multishot;
            case BalanceUpgradeKind.Range: return range;
            case BalanceUpgradeKind.Health: return health;
            case BalanceUpgradeKind.Regeneration: return regeneration;
            case BalanceUpgradeKind.ScrapPerKill: return scrapPerKill;
            case BalanceUpgradeKind.OrePerKill: return orePerKill;
            case BalanceUpgradeKind.GoldPerTenKills: return goldPerTenKills;
            default: return 0;
        }
    }

    public void Set(BalanceUpgradeKind kind, int amount)
    {
        amount = Mathf.Max(0, amount);
        switch (kind)
        {
            case BalanceUpgradeKind.AttackDamage: attackDamage = amount; break;
            case BalanceUpgradeKind.AttackSpeed: attackSpeed = amount; break;
            case BalanceUpgradeKind.MaxTargets: maxTargets = amount; break;
            case BalanceUpgradeKind.Multishot: multishot = amount; break;
            case BalanceUpgradeKind.Range: range = amount; break;
            case BalanceUpgradeKind.Health: health = amount; break;
            case BalanceUpgradeKind.Regeneration: regeneration = amount; break;
            case BalanceUpgradeKind.ScrapPerKill: scrapPerKill = amount; break;
            case BalanceUpgradeKind.OrePerKill: orePerKill = amount; break;
            case BalanceUpgradeKind.GoldPerTenKills: goldPerTenKills = amount; break;
        }
    }

    public void Increment(BalanceUpgradeKind kind) => Set(kind, Get(kind) + 1);

    public int Sum()
    {
        return attackDamage + attackSpeed + maxTargets + multishot + range + health + regeneration +
               scrapPerKill + orePerKill + goldPerTenKills;
    }

    public BalanceLevels Clone()
    {
        var clone = new BalanceLevels();
        foreach (BalanceUpgradeKind kind in Enum.GetValues(typeof(BalanceUpgradeKind)))
            clone.Set(kind, Get(kind));
        return clone;
    }
}

public enum BalanceUpgradeKind
{
    AttackDamage,
    AttackSpeed,
    MaxTargets,
    Multishot,
    Range,
    Health,
    Regeneration,
    ScrapPerKill,
    OrePerKill,
    GoldPerTenKills
}
