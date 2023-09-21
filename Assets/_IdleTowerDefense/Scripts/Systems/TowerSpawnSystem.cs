using DG.Tweening;
using Leopotam.EcsLite;
using UnityEngine;

public class TowerSpawnSystem : IEcsPreInitSystem, IEcsInitSystem
{
    private EcsWorld _world;
    private SharedData _sharedData;

    private readonly Vector3 _spawnTowerPoint;

    private readonly HealthBar _healthBar;

    public TowerSpawnSystem(Transform spawnTowerPoint, HealthBar healthBar)
    {
        _spawnTowerPoint = spawnTowerPoint.position;
        _healthBar = healthBar;
    }

    public void PreInit(EcsSystems systems)
    {
        _sharedData = systems.GetShared<SharedData>();
        _world = systems.GetWorld();
    }

    public void Init(EcsSystems systems)
    {
        // Create Entity, add components
        int entity = _world.NewEntity();
        EcsPackedEntity packedEntity = _world.PackEntity(entity);
        EcsPool<Tower> towerPool = _world.GetPool<Tower>();
        EcsPool<TowerWeapon> towerWeaponPool = _world.GetPool<TowerWeapon>();
        EcsPool<TowerTargetSelector> towerTargetingPool = _world.GetPool<TowerTargetSelector>();
        EcsPool<Health> healthPool = _world.GetPool<Health>();
        towerPool.Add(entity);
        ref TowerWeapon towerWeapon = ref towerWeaponPool.Add(entity);
        ref TowerTargetSelector towerTargetSelector = ref towerTargetingPool.Add(entity);
        ref Health towerHealth = ref healthPool.Add(entity);

        // Setup View
        TowerView towerView =
            GameObject.Instantiate(_sharedData.Settings.TowerView, _spawnTowerPoint, Quaternion.identity);

        // Init components
        towerHealth.InitStartValues(
            _sharedData.Settings.BaseMaxHealth,
            1,
            _sharedData.Settings.BaseHealthRegeneration,
            _ =>
            {
                towerView.transform.DOPunchPosition(Random.insideUnitCircle / 100f, 0.1f, 3)
                    .OnComplete(() => towerView.transform.position = Vector3.zero);
            },
            () => GameManager.Instance.OnTowerKilled()
        );
        // Health Regeneration

        towerWeapon.InitStartValues(_sharedData.Settings.TowerStartingAttackCooldown,
            _sharedData.Settings.TowerStartingAttackDamage);

        towerTargetSelector.InitStartValues(_sharedData.Settings.TowerStartingTargetingRange);


        // Init View
        towerView.PackedEntity = packedEntity;
        _healthBar.PackedEntity = packedEntity;
        _sharedData.TowerView = towerView;
    }
    
}