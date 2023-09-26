using System.Collections;
using System.Collections.Generic;
using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Max Target Upgrade", menuName = "Idle Tower Defense/Temporary Upgrades/MaxTarget")]
public class MaxTargetTemporaryUpgrade : TemporaryUpgradeBase
{
    [Header("Upgrade Specific Values")]
    
    private EcsFilter towerTargetSelectorFilter;

    public override void Init()
    {
        towerTargetSelectorFilter = DataController.Instance.World.Filter<Tower>()
            .Inc<TowerTargetSelector>()
            .End();
    }
    


    public override void Upgrade()
    {
        // Handle cost
        DataController.Currency.SubtractValues(GetCost());
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        // Handle upgrade
        EcsPool<TowerTargetSelector> targetSelectorPool = DataController.Instance.World.GetPool<TowerTargetSelector>();
        foreach (int entity in towerTargetSelectorFilter)
        {
            ref TowerTargetSelector towerWeapon = ref targetSelectorPool.Get(entity);
            towerWeapon.MaxTargets += 1;
            value = towerWeapon.MaxTargets;
        }
    }
    public override void UpdateStartValue()
    {
        // Handle upgrade
        EcsPool<TowerTargetSelector> targetSelectorPool = DataController.Instance.World.GetPool<TowerTargetSelector>();
        foreach (int entity in towerTargetSelectorFilter)
        {
            ref TowerTargetSelector towerWeapon = ref targetSelectorPool.Get(entity);
            towerWeapon.MaxTargets = 1+PersistentUpgradeManager.PersistentUpgradeCounts[Title];
            value = towerWeapon.MaxTargets;
        }
    }
}
