using System.Collections;
using System.Collections.Generic;
using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Attack Speed Upgrade",
    menuName = "Idle Tower Defense/Temporary Upgrades/Attack Speed")]
public class AttackSpeedTemporaryUpgrade : TemporaryUpgradeBase
{
    public float AttackSpeedMultiplier = 0.03f;
    private EcsFilter weaponFilter;
    private EcsWorld _world;

    public override void Init(IEcsSystems system)
    {
        _world = system.GetWorld();
        weaponFilter = _world.Filter<TowerWeapon>().End();
    }


    public override void Upgrade()
    {
        // Handle cost
        DataController.Currency.SubtractValues(GetCost());
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        // Handle upgrade
        EcsPool<TowerWeapon> weaponPool = _world.GetPool<TowerWeapon>();
        foreach (int entity in weaponFilter)
        {
            ref TowerWeapon towerWeapon = ref weaponPool.Get(entity);
            towerWeapon.AttackCooldown = towerWeapon.RecalculateAttackCooldown(
                TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] +
                PersistentUpgradeManager.PersistentUpgradeCounts[Title], AttackSpeedMultiplier);
            value = towerWeapon.AttackCooldown;
        }
    }

    public override void UpdateStartValue()
    {
        EcsPool<TowerWeapon> weaponPool = _world.GetPool<TowerWeapon>();
        foreach (int entity in weaponFilter)
        {
            ref TowerWeapon towerWeapon = ref weaponPool.Get(entity);
            towerWeapon.AttackCooldown = towerWeapon.RecalculateAttackCooldown(
                TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] +
                PersistentUpgradeManager.PersistentUpgradeCounts[Title], AttackSpeedMultiplier);
            value = towerWeapon.AttackCooldown;
        }
    }
}