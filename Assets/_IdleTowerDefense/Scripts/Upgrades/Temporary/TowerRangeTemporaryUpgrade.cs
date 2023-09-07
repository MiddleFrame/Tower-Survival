using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Tower Range Upgrade", menuName = "Idle Tower Defense/Temporary Upgrades/Tower Range")]
public class TowerRangeTemporaryUpgrade : TemporaryUpgradeBase
{
    [Header("Upgrade Specific Values")]
    public float RangePerUpgrade;


    private EcsFilter _towerTargetSelectorFilter;

    public override void Init()
    {
        _towerTargetSelectorFilter = GameManager.Instance.World.Filter<Tower>().Inc<TowerTargetSelector>().End();
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
            towerWeapon.TargetingRange += RangePerUpgrade;
            value = towerWeapon.TargetingRange;
            TemporaryUpgradeManager.Instance.UpdateEnemySpawnRange(towerWeapon.TargetingRange);
        }
    }
    
    public override void UpdateStartValue()
    {
        // Handle upgrade
        EcsPool<TowerTargetSelector> targetSelectorPool = GameManager.Instance.World.GetPool<TowerTargetSelector>();
        foreach (int entity in _towerTargetSelectorFilter)
        {
            ref TowerTargetSelector towerWeapon = ref targetSelectorPool.Get(entity);
            value = towerWeapon.TargetingRange;
        }
    }
}