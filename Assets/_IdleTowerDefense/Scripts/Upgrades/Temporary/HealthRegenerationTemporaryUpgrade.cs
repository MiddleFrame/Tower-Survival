using System.Collections;
using System.Collections.Generic;
using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Health Regeneration Upgrade", menuName = "Idle Tower Defense/Temporary Upgrades/Health Regeneration")]
public class HealthRegenerationTemporaryUpgrade : TemporaryUpgradeBase
{
    [Header("Upgrade Specific Values")]
    public float HealthRegenerationPerUpgrade = 0.5f;
    
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
            towerHealth.HealthRegenerationAdditions += HealthRegenerationPerUpgrade;
            value = towerHealth.RecalculateHealthRegeneration();
        }
    }
    
    public override void UpdateStartValue()
    {
        EcsPool<Health> healthPool = GameManager.Instance.World.GetPool<Health>();
        foreach (int entity in healthFilter)
        {
            ref Health towerHealth = ref healthPool.Get(entity);
            value = towerHealth.RecalculateHealthRegeneration();
        }
    }
}
