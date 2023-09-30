using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Attack Damage Upgrade",
    menuName = "Idle Tower Defense/Temporary Upgrades/Attack Damage")]
public class AttackDamageTemporaryUpgrade : TemporaryUpgradeBase
{
    [Header("Upgrade Specific Values")]
    private EcsFilter _weaponFilter;
    private EcsWorld _world;
    public override void Init(IEcsSystems system)
    {
        _world = system.GetWorld();
        _weaponFilter = _world.Filter<TowerWeapon>().End();
    }
    

    public override void Upgrade()
    {
        // Handle cost
        DataController.Currency.SubtractValues(GetCost());
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        // Handle upgrade
        EcsPool<TowerWeapon> weaponPool = _world.GetPool<TowerWeapon>();
        foreach (int entity in _weaponFilter)
        {
            ref TowerWeapon towerWeapon = ref weaponPool.Get(entity);
            value = towerWeapon.RecalculateAttackDamage(TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title]+PersistentUpgradeManager.PersistentUpgradeCounts[Title]);
        }
    }

    public override void UpdateStartValue()
    {
        EcsPool<TowerWeapon> weaponPool =_world.GetPool<TowerWeapon>();
        foreach (int entity in _weaponFilter)
        {
            ref TowerWeapon towerWeapon = ref weaponPool.Get(entity);
            value = towerWeapon.RecalculateAttackDamage(TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title]+PersistentUpgradeManager.PersistentUpgradeCounts[Title]);
        }
    }
}