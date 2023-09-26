using DG.Tweening;
using Leopotam.EcsLite;
using UnityEngine;
using UnityEngine.UI;

public class TowerSpawnSystem : IEcsPreInitSystem, IEcsInitSystem
{
    private EcsWorld _world;
    private SharedData _sharedData;

    private readonly Vector3 _spawnTowerPoint;

    private readonly Image _healthBar;
    private readonly Slider _healthBarValue;

    
    public TowerSpawnSystem(Transform spawnTowerPoint, Image healthBar,Slider healthBarValue)
    {
        _spawnTowerPoint = spawnTowerPoint.position;
        _healthBar = healthBar;
        _healthBarValue = healthBarValue;
    }

    public void PreInit(IEcsSystems systems)
    {
        _sharedData = systems.GetShared<SharedData>();
        _world = systems.GetWorld();
    }

    public void Init(IEcsSystems systems)
    {
        // Create Entity, add components
        int entity = _world.NewEntity();
        EcsPool<Tower> towerPool = _world.GetPool<Tower>();
        EcsPool<TowerWeapon> towerWeaponPool = _world.GetPool<TowerWeapon>();
        EcsPool<TowerTargetSelector> towerTargetingPool = _world.GetPool<TowerTargetSelector>();
        EcsPool<Health> healthPool = _world.GetPool<Health>();
        towerPool.Add(entity);
        ref TowerWeapon towerWeapon = ref towerWeaponPool.Add(entity);
        ref TowerTargetSelector towerTargetSelector = ref towerTargetingPool.Add(entity);
        ref Health towerHealth = ref healthPool.Add(entity);

        towerHealth.healthBar = _healthBarValue;
        // Setup View
        GameObject tower =
            GameObject.Instantiate(_sharedData.Settings.tower, _spawnTowerPoint, Quaternion.identity);

        // Init components
        towerHealth.InitStartValues(
            _sharedData.Settings.BaseMaxHealth,
            1,
            _sharedData.Settings.BaseHealthRegeneration,
            _healthBar,
            () =>
                tower.transform.DOPunchPosition(Random.insideUnitCircle / 100f, 0.1f, 3)
                    .OnComplete(() => tower.transform.position = Vector3.zero),
            () => DataController.Instance.OnTowerKilled()
        );
        // Health Regeneration

        towerWeapon.InitStartValues(_sharedData.Settings.TowerStartingAttackCooldown,
            _sharedData.Settings.TowerStartingAttackDamage);

        towerTargetSelector.InitStartValues(_sharedData.Settings.TowerStartingTargetingRange);
        _sharedData.Settings.tower = tower;
    }
}