using System;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Population Scenario", menuName = "Idle Tower Defense/Balance Lab/Population Scenario")]
public sealed class BalancePopulationScenario : ScriptableObject
{
    public BalanceScenario sessionScenario;

    [Header("Population journey")]
    [Min(1)] public int players = 500;
    [Min(1)] public int days = 14;
    [Min(1)] public int sessionsPerDay = 3;
    public int randomSeed = 481516;
    [Min(0)] public int startingOre;
    [Min(0)] public int startingGold;
    public bool progressThroughTiers = true;

    [Header("Meta spending")]
    public bool buyPersistentUpgrades = true;
    public bool buyPageUnlocks = true;

    [Header("Mine")]
    public bool simulateMine = true;
    [Min(0.1f)] public float hoursPerDay = 24f;
    [Tooltip("Enabled reproduces the current Mine.cs order: level increases before currency is subtracted.")]
    public bool reproduceMineOverchargeBug = true;

    [Header("Player cohorts")]
    public List<BalancePlayerArchetype> archetypes = DefaultArchetypes();

    public static List<BalancePlayerArchetype> DefaultArchetypes()
    {
        return new List<BalancePlayerArchetype>
        {
            new BalancePlayerArchetype("Economist", 18f, BalancePlayerStrategy.Economy, 0.45f, 0.9f, 0.95f, 0.95f, 0.08f, 0.45f, 1f, 0.95f),
            new BalancePlayerArchetype("Saver", 18f, BalancePlayerStrategy.Saver, 0.65f, 0.75f, 0.85f, 0.95f, 0.08f, 0.25f, 0.9f, 0.9f),
            new BalancePlayerArchetype("Cheapest first", 20f, BalancePlayerStrategy.Cheapest, 0.05f, 0.98f, 0.98f, 0.9f, 0.12f, 0.55f, 1.1f, 0.95f),
            new BalancePlayerArchetype("Attack focused", 18f, BalancePlayerStrategy.Attack, 0.15f, 0.95f, 0.95f, 1f, 0.1f, 0.4f, 1f, 0.95f),
            new BalancePlayerArchetype("Defence focused", 12f, BalancePlayerStrategy.Defence, 0.2f, 0.9f, 0.95f, 0.95f, 0.1f, 0.35f, 0.9f, 0.9f),
            new BalancePlayerArchetype("Improviser", 14f, BalancePlayerStrategy.Random, 0.1f, 0.65f, 0.75f, 0.85f, 0.18f, 0.3f, 0.8f, 0.8f)
        };
    }
}

[Serializable]
public sealed class BalancePlayerArchetype
{
    public string name = "Player";
    [Min(0f)] public float populationWeight = 1f;
    public BalancePlayerStrategy strategy;
    [Range(0f, 0.95f)] public float oreReserveFraction = 0.2f;
    [Range(0f, 1f)] public float temporaryPurchaseChance = 0.9f;
    [Range(0f, 1f)] public float persistentPurchaseChance = 0.9f;
    [Range(0.1f, 1.5f)] public float meanCombatEfficiency = 0.95f;
    [Range(0f, 0.5f)] public float combatEfficiencyDeviation = 0.1f;
    [Range(0f, 1f)] public float rewardedOreChance = 0.35f;
    [Range(0.1f, 2f)] public float sessionsPerDayMultiplier = 1f;
    [Range(0f, 1f)] public float dailyPlayChance = 0.9f;

    public BalancePlayerArchetype() { }

    public BalancePlayerArchetype(string name, float weight, BalancePlayerStrategy strategy, float reserve,
        float temporaryChance, float persistentChance, float efficiency, float efficiencyDeviation,
        float rewardedOreChance, float sessionsMultiplier, float dailyPlayChance)
    {
        this.name = name;
        populationWeight = weight;
        this.strategy = strategy;
        oreReserveFraction = reserve;
        temporaryPurchaseChance = temporaryChance;
        persistentPurchaseChance = persistentChance;
        meanCombatEfficiency = efficiency;
        combatEfficiencyDeviation = efficiencyDeviation;
        this.rewardedOreChance = rewardedOreChance;
        sessionsPerDayMultiplier = sessionsMultiplier;
        this.dailyPlayChance = dailyPlayChance;
    }
}

public enum BalancePlayerStrategy
{
    Cheapest,
    Saver,
    Attack,
    Defence,
    Economy,
    Random
}
