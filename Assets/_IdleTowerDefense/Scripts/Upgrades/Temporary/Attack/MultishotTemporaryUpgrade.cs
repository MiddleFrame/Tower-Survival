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
    private EcsWorld _world;
    public override void Init(IEcsSystems system)
    { _world = system.GetWorld();
        _towerTargetSelectorFilter = _world.Filter<Tower>()
            .Inc<TowerTargetSelector>()
            .End();
    }
    
  

    public override void Upgrade()
    {
        // Handle cost
        DataController.Currency.SubtractValues(GetCost());
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        // Handle upgrade
        EcsPool<TowerTargetSelector> targetSelectorPool = _world.GetPool<TowerTargetSelector>();
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
        EcsPool<TowerTargetSelector> targetSelectorPool = _world.GetPool<TowerTargetSelector>();
        foreach (int entity in _towerTargetSelectorFilter)
        {
            ref TowerTargetSelector towerWeapon = ref targetSelectorPool.Get(entity);
            towerWeapon.MultiShotChange += PersistentUpgradeManager.PersistentUpgradeCounts[Title] * percentPerUpgrade;
            value = towerWeapon.MultiShotChange;
        }
    }
}
