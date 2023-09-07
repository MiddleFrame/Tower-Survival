using System.Collections;
using System.Collections.Generic;
using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Attack Speed Upgrade", menuName = "Idle Tower Defense/Temporary Upgrades/Attack Speed")]
public class AttackSpeedTemporaryUpgrade : TemporaryUpgradeBase
{
    public float AttackSpeedMultiplier = 0.1f;
    private EcsFilter weaponFilter;

    public override void Init()
    {
        weaponFilter = GameManager.Instance.World.Filter<TowerWeapon>().End();
    }

  
    

    public override void Upgrade()
    {
        // Handle cost
        GameManager.Currency.SubtractValues(GetCost());
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        // Handle upgrade
        EcsPool<TowerWeapon> weaponPool = GameManager.Instance.World.GetPool<TowerWeapon>();
        foreach (int entity in weaponFilter)
        {
            ref TowerWeapon towerWeapon = ref weaponPool.Get(entity);
            towerWeapon.AttackCooldownMultiplier -= AttackSpeedMultiplier;
            value = towerWeapon.RecalculateAttackCooldown(TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title]);
        }
    }

    public override void UpdateStartValue()
    {
        EcsPool<TowerWeapon> weaponPool = GameManager.Instance.World.GetPool<TowerWeapon>();
        foreach (int entity in weaponFilter)
        {
            ref TowerWeapon towerWeapon = ref weaponPool.Get(entity);
            value = towerWeapon.RecalculateAttackCooldown(TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title]);
        }
    }
    
}