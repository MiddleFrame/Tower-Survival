using System.Collections.Generic;
using Guirao.UltimateTextDamage;
using Leopotam.EcsLite;
using UnityEngine;

public class EnemySpawnSystem : IEcsPreInitSystem, IEcsRunSystem, IEcsInitSystem
{
    private SharedData _sharedData;
    private double _spawnTimeRemaining;
    private EcsWorld _world;

    private float _enemySpawnDelay;
    private float _enemyHealthMultiplier = 1;
    private float _enemyDamageMultiplier = 1;
    private int _spawnCount = 1;

    private int _enemySpawned;
    private int _stage;

    public static float expMultiplier = 1;
    public static float oreMultiplier = 1;

    private EnemySpawnSettings _spawnSettings;

    private const float MELEE_DEFAULT_RANGE = 0.8f;
    // Tower starts at 2 units and gains 0.06 per range upgrade. This value deliberately
    // stays independent from the tower's current range (base range + two upgrades).
    private const float RANGED_ENEMY_ATTACK_RANGE = 2.12f;
    private EcsPool<Enemy> _enemyPool;
    private EcsPool<Position> _positionPool;
    private EcsPool<Movement> _movementPool;
    private EcsPool<Health> _healthPool;
    private EcsPool<EnemyDamage> _meleeDamagePool;
    private EcsPool<Damage> _damagePool;
    private EcsPool<Destroy> _destroyPool;
    private EcsPool<MetaCurrencyReward> _metaCurrencyRewardPool;

    public void PreInit(IEcsSystems systems)
    {
        _stage = 0;
        _sharedData = systems.GetShared<SharedData>();
        _world = systems.GetWorld();
        _spawnSettings = _sharedData.Settings.EnemySpawnSettings[DataController.tier];
        _enemySpawnDelay = _spawnSettings.stages[_stage].enemySpawnRate;
    }

    public void Init(IEcsSystems systems)
    {
        expMultiplier = 1;
        oreMultiplier = 1;

        _enemyPool = _world.GetPool<Enemy>();
        _positionPool = _world.GetPool<Position>();
        _movementPool = _world.GetPool<Movement>();
        _healthPool = _world.GetPool<Health>();
        _meleeDamagePool = _world.GetPool<EnemyDamage>();
        _damagePool = _world.GetPool<Damage>();
        _destroyPool = _world.GetPool<Destroy>();
        _metaCurrencyRewardPool = _world.GetPool<MetaCurrencyReward>();
    }

    public void Run(IEcsSystems systems)
    {
        if (DataController.IsGameplayEnding)
            return;

        _spawnTimeRemaining -= Time.deltaTime;
        if (!(_spawnTimeRemaining <= 0))
            return;

        UpdateEnemyChange();
        for (int i = 0; i < _spawnCount; i++)
        {
            SpawnEnemy();
        }

        // Reduce delay to increase spawn speed, increase health multiplier
        _enemySpawnDelay = _spawnSettings.stages[_stage].enemySpawnRate;
        _enemyHealthMultiplier *= _spawnSettings.EnemyHealthMultiplier;
        _enemyDamageMultiplier *= _spawnSettings.EnemyDamageMultiplier;
        _spawnCount = _spawnSettings.stages[_stage].enemySpawnCount;

        _spawnTimeRemaining = _enemySpawnDelay;
    }

    private void UpdateEnemyChange()
    {
        if (_stage + 1 >= _spawnSettings.stages.Length) return;
        if (_enemySpawned >= _spawnSettings.stages[_stage + 1].enemiesKilledToStartStage)
            _stage++;
    }

    private void SpawnEnemy()
    {
        // Calculate a random starting position
        Vector2 randomPosition = Random.insideUnitCircle.normalized * _sharedData.EnemySpawnRadius;
        // Create Entity, add components
        _enemySpawned++;
        EnemyView enemyView = _sharedData.ViewPools != null
            ? _sharedData.ViewPools.Spawn(_spawnSettings.GetRandomEnemy(_stage), randomPosition, Quaternion.identity)
            : GameObject.Instantiate(_spawnSettings.GetRandomEnemy(_stage), randomPosition, Quaternion.identity);
        enemyView.SetDayNightController(_sharedData.DayNightController);

        int entity = _world.NewEntity();

        ref Enemy enemy = ref _enemyPool.Add(entity);
        ref Position position = ref _positionPool.Add(entity);
        ref Movement movement = ref _movementPool.Add(entity);
        ref Health health = ref _healthPool.Add(entity);
        ref EnemyDamage enemyDamage = ref _meleeDamagePool.Add(entity);
        ref MetaCurrencyReward metaCurrencyReward = ref _metaCurrencyRewardPool.Add(entity);


        // Setup View
        movement.transform = enemyView.transform;

        var enemyBaseStats = _sharedData.Settings.EnemySpawnSettings[DataController.tier]
            ._stats[(int) enemyView.enemyNumber];

        // Init Components
        position = randomPosition;
        movement.Velocity = -randomPosition.normalized * enemyBaseStats.movementSpeed;
        metaCurrencyReward.Amount = 1;

        health.InitStartValues(
            enemyBaseStats.startingHealth,
            _enemyHealthMultiplier,
            0,
            enemyView.healthBar,
            null,
            () =>
            {
                DataController.Instance.EnemiesKilled++;
            }
        );
        enemyView.Configure(_world, entity);

        // Damage is queued only by the Animation Event at the end of the attack clip.
        EcsPackedEntity packedEnemy = _world.PackEntity(entity);
        enemyView.handler.OnEnded = () =>
        {
            EnemyDamageQueue.TryQueue(packedEnemy, _world, _damagePool);
        };

        enemy.animator = enemyView.animator;
        enemy.view = enemyView;


        enemyDamage.InitStartValues(
            enemyView.enemyNumber == EnemyView.EnemyType.Ranged,
            enemyBaseStats.damage,
            _enemyDamageMultiplier,
            enemyBaseStats.damageCooldown,
            (damage, enemyTransform) =>
            {
                UltimateTextDamageManager.Instance.Add(damage.ToString("N0"), enemyTransform, "tower");
                if (enemyView.destroyAfterAttack && !_destroyPool.Has(entity))
                    _destroyPool.Add(entity);
            });

        movement.StopRadius = enemyDamage.isRangeDamage ? RANGED_ENEMY_ATTACK_RANGE : MELEE_DEFAULT_RANGE;
    }
}

public static class EnemyDamageQueue
{
    public static bool TryQueue(EcsPackedEntity packedEnemy, EcsWorld world, EcsPool<Damage> damagePool)
    {
        if (!packedEnemy.Unpack(world, out int aliveEnemy) || damagePool.Has(aliveEnemy))
            return false;

        damagePool.Add(aliveEnemy);
        return true;
    }
}
