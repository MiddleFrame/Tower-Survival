using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Tower Range Upgrade", menuName = "Idle Tower Defense/Temporary Upgrades/OrePerKill")]
public class OrePerKill : TemporaryUpgradeBase
{
    [Header("Upgrade Specific Values")]
    public float orePerUpgrade;


    private EcsFilter _towerTargetSelectorFilter;


    public override void Upgrade()
    {
        // Handle cost
        DataController.Currency.SubtractValues(GetCost());
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        // Handle upgrade


        EnemySpawnSystem.oreMultiplier += orePerUpgrade;
        value = orePerUpgrade;
    }

    public override void UpdateStartValue()
    {
        // Handle upgrade
        EnemySpawnSystem.oreMultiplier += PersistentUpgradeManager.PersistentUpgradeCounts[Title] * orePerUpgrade;
        value = orePerUpgrade;
    }
}