using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Tower Range Upgrade", menuName = "Idle Tower Defense/Temporary Upgrades/ExpPerKill")]
public class ExpPerKill : TemporaryUpgradeBase
{
    [Header("Upgrade Specific Values")]
    public float expPerUpgrade;


    private EcsFilter _towerTargetSelectorFilter;


    public override void Upgrade()
    {
        // Handle cost
        GameManager.Currency.SubtractValues(GetCost());
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        // Handle upgrade


        EnemySpawnSystem.expMultiplier += expPerUpgrade;
        value = expPerUpgrade;
    }

    public override void UpdateStartValue()
    {
        // Handle upgrade
        EnemySpawnSystem.expMultiplier += PersistentUpgradeManager.PersistentUpgradeCounts[Title] * expPerUpgrade;
        value = expPerUpgrade;
    }
}