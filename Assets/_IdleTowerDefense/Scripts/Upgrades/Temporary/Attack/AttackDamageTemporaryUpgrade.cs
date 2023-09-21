using Leopotam.EcsLite;
using UnityEngine;

[CreateAssetMenu(fileName = "New Attack Damage Upgrade",
    menuName = "Idle Tower Defense/Temporary Upgrades/Attack Damage")]
public class AttackDamageTemporaryUpgrade : TemporaryUpgradeBase
{
    [Header("Upgrade Specific Values")]
    private EcsFilter _weaponFilter;

    public override void Init()
    {
        _weaponFilter = GameManager.Instance.World.Filter<TowerWeapon>().End();
    }
    

    public override void Upgrade()
    {
        // Handle cost
        GameManager.Currency.SubtractValues(GetCost());
        TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title] += 1;

        // Handle upgrade
        EcsPool<TowerWeapon> weaponPool = GameManager.Instance.World.GetPool<TowerWeapon>();
        foreach (int entity in _weaponFilter)
        {
            ref TowerWeapon towerWeapon = ref weaponPool.Get(entity);
            value = towerWeapon.RecalculateAttackDamage(TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title]+PersistentUpgradeManager.PersistentUpgradeCounts[Title]);
        }
    }

    public override void UpdateStartValue()
    {
        EcsPool<TowerWeapon> weaponPool = GameManager.Instance.World.GetPool<TowerWeapon>();
        foreach (int entity in _weaponFilter)
        {
            ref TowerWeapon towerWeapon = ref weaponPool.Get(entity);
            value = towerWeapon.RecalculateAttackDamage(TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[Title]+PersistentUpgradeManager.PersistentUpgradeCounts[Title]);
        }
    }
}