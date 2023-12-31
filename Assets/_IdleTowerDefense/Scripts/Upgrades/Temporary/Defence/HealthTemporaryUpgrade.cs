using System.Collections;
using System.Collections.Generic;
using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Health Upgrade", menuName = "Idle Tower Defense/Temporary Upgrades/Health")]
public class HealthTemporaryUpgrade : TemporaryUpgradeBase
{
    [Header("Upgrade Specific Values")]
    public float HealthPerUpgrade = 10;

    private EcsFilter healthFilter;
    private EcsWorld _world;
    public override void Init(IEcsSystems system)
    { _world = system.GetWorld();
        healthFilter = _world.Filter<Tower>().Inc<Health>().End();
    }

 

    public override void Upgrade()
    {
        // Handle cost
        DataController.Currency.SubtractValues(GetCost());
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        // Handle Upgrade
        EcsPool<Health> healthPool = _world.GetPool<Health>();
        foreach (int entity in healthFilter)
        {
            ref Health towerHealth = ref healthPool.Get(entity);
            towerHealth.MaxHealthAdditions += HealthPerUpgrade;
            value =towerHealth.RecalculateMaxHealth();
        }
    }
    
    public override void UpdateStartValue()
    {
        EcsPool<Health> healthPool = _world.GetPool<Health>();
        foreach (int entity in healthFilter)
        {
            ref Health towerHealth = ref healthPool.Get(entity);
            towerHealth.MaxHealthAdditions += HealthPerUpgrade*PersistentUpgradeManager.PersistentUpgradeCounts[Title];
            value =towerHealth.RecalculateMaxHealth();
        }
    }
}