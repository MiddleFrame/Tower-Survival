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

    public override void Init()
    {
        healthFilter = GameManager.Instance.World.Filter<Tower>().Inc<Health>().End();
    }

 

    public override void Upgrade()
    {
        // Handle cost
        GameManager.Currency.SubtractValues(GetCost());
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        // Handle Upgrade
        EcsPool<Health> healthPool = GameManager.Instance.World.GetPool<Health>();
        foreach (int entity in healthFilter)
        {
            ref Health towerHealth = ref healthPool.Get(entity);
            towerHealth.MaxHealthAdditions += HealthPerUpgrade;
            value =towerHealth.RecalculateMaxHealth();
        }
    }
    
    public override void UpdateStartValue()
    {
        EcsPool<Health> healthPool = GameManager.Instance.World.GetPool<Health>();
        foreach (int entity in healthFilter)
        {
            ref Health towerHealth = ref healthPool.Get(entity);
            value =towerHealth.RecalculateMaxHealth();
        }
    }
}