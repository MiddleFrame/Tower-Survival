using System.Collections;
using System.Collections.Generic;
using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Multishot Upgrade", menuName = "Idle Tower Defense/Temporary Upgrades/Multishot")]
public class MultishotTemporaryUpgrade : TemporaryUpgradeBase
{
    [Header("Upgrade Specific Values")]
    
    private EcsFilter _towerTargetSelectorFilter;

    public float percentPerUpgrade;

    public override void Init()
    {
        _towerTargetSelectorFilter = GameManager.Instance.World.Filter<Tower>()
            .Inc<TowerTargetSelector>()
            .End();
    }
    
  

    public override void Upgrade()
    {
        // Handle cost
        GameManager.Currency.SubtractValues(GetCost());
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        // Handle upgrade
        EcsPool<TowerTargetSelector> targetSelectorPool = GameManager.Instance.World.GetPool<TowerTargetSelector>();
        foreach (int entity in _towerTargetSelectorFilter)
        {
            ref TowerTargetSelector towerWeapon = ref targetSelectorPool.Get(entity);
            towerWeapon.MultiShotChange += percentPerUpgrade;
            value = towerWeapon.MultiShotChange;
        }
    }
    public override void UpdateStartValue()
    {
        // Handle upgrade
        EcsPool<TowerTargetSelector> targetSelectorPool = GameManager.Instance.World.GetPool<TowerTargetSelector>();
        foreach (int entity in _towerTargetSelectorFilter)
        {
            ref TowerTargetSelector towerWeapon = ref targetSelectorPool.Get(entity);
            towerWeapon.MultiShotChange += PersistentUpgradeManager.PersistentUpgradeCounts[Title] * percentPerUpgrade;
            value = towerWeapon.MultiShotChange;
        }
    }
}
