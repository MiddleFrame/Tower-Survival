using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Tower Range Upgrade",
    menuName = "Idle Tower Defense/Temporary Upgrades/GoldPerTenKills")]
public class GoldPerTenKills : TemporaryUpgradeBase
{
    public override void Upgrade()
    {
        // Handle cost
        if (!DataController.Currency.SubtractValues(GetCost())) return;
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        DestroySystem.goldMultiplier++;
        value = DestroySystem.goldMultiplier;
    }

    public override void UpdateStartValue()
    {
        // Handle upgrade
        DestroySystem.goldMultiplier = PersistentUpgradeManager.PersistentUpgradeCounts[Title] + 1;
        value = DestroySystem.goldMultiplier;
    }
}
