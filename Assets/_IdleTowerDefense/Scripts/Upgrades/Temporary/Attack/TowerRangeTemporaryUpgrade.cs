using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Tower Range Upgrade", menuName = "Idle Tower Defense/Temporary Upgrades/Range")]
public class TowerRangeTemporaryUpgrade : TemporaryUpgradeBase
{
    [Header("Upgrade Specific Values")]
    public float rangePerGrade;


    private EcsFilter _towerTargetSelectorFilter;

    private EcsWorld _world;
    public override void Init(IEcsSystems system)
    {
        _world = system.GetWorld();
        Debug.Log("Init");
        _towerTargetSelectorFilter = _world.Filter<Tower>().Inc<TowerTargetSelector>().End();
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
            towerWeapon.TargetingRange += rangePerGrade;
            value = towerWeapon.TargetingRange;
            TemporaryUpgradeManager.Instance.UpdateEnemySpawnRange(towerWeapon.TargetingRange);
        }
    }

    public override void UpdateStartValue()
    {
        // Handle upgrade
        EcsPool<TowerTargetSelector> targetSelectorPool = _world.GetPool<TowerTargetSelector>();
        foreach (int entity in _towerTargetSelectorFilter)
        {
            ref TowerTargetSelector towerWeapon = ref targetSelectorPool.Get(entity);
            towerWeapon.TargetingRange += PersistentUpgradeManager.PersistentUpgradeCounts[Title] * rangePerGrade;
            TemporaryUpgradeManager.Instance.UpdateEnemySpawnRange(towerWeapon.TargetingRange);
            value = towerWeapon.TargetingRange;
        }
    }
}