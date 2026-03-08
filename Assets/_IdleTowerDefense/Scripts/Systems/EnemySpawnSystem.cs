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
    private static float expPerKillMultiply = 1;

    private EnemySpawnSettings _spawnSettings;

    private const float MELEE_DEFAULT_RANGE = 0.8f;
    private const float RANGE_DEFAULT_RANGE = 3f;
    private EcsPool<Enemy> _enemyPool;
    private EcsPool<Position> _positionPool;
    private EcsPool<Movement> _movementPool;
    private EcsPool<Health> _healthPool;
    private EcsPool<CurrencyDrop> _currencyDropPool;
    private EcsPool<EnemyDamage> _meleeDamagePool;
    private EcsPool<Damage> _damagePool;
    private EcsPool<Destroy> _destroyPool;

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
        expPerKillMultiply = 1;

        _enemyPool = _world.GetPool<Enemy>();
        _positionPool = _world.GetPool<Position>();
        _movementPool = _world.GetPool<Movement>();
        _healthPool = _world.GetPool<Health>();
        _currencyDropPool = _world.GetPool<CurrencyDrop>();
        _meleeDamagePool = _world.GetPool<EnemyDamage>();
        _damagePool = _world.GetPool<Damage>();
        _destroyPool = _world.GetPool<Destroy>();
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
        Vector2 randomPosition = Random.insideUnitCircle.normalized * _sharedData.Settings.EnemySpawnRadius;
        // Create Entity, add components
        _enemySpawned++;
        EnemyView enemyView = _sharedData.ViewPools != null
            ? _sharedData.ViewPools.Spawn(_spawnSettings.GetRandomEnemy(_stage), randomPosition, Quaternion.identity)
            : GameObject.Instantiate(_spawnSettings.GetRandomEnemy(_stage), randomPosition, Quaternion.identity);

        bool isOreEnemy = Random.Range(0, 10) > 7;

        int entity = _world.NewEntity();

        ref Enemy enemy = ref _enemyPool.Add(entity);
        ref Position position = ref _positionPool.Add(entity);
        ref Movement movement = ref _movementPool.Add(entity);
        ref Health health = ref _healthPool.Add(entity);
        ref CurrencyDrop currencyDrop = ref _currencyDropPool.Add(entity);
        ref EnemyDamage enemyDamage = ref _meleeDamagePool.Add(entity);


        // Setup View
        movement.transform = enemyView.transform;

        var enemyBaseStats = _sharedData.Settings.EnemySpawnSettings[DataController.tier]
            ._stats[(int) enemyView.enemyNumber];

        // Init Components
        position = randomPosition;
        movement.Velocity = -randomPosition.normalized * enemyBaseStats.movementSpeed;
        expPerKillMultiply *= 1.01f;
        int orePrice = isOreEnemy
            ? (int) (_sharedData.Settings.EnemySpawnSettings[DataController.tier].OreMultiplier * oreMultiplier)
            : 0;

        health.InitStartValues(
            enemyBaseStats.startingHealth,
            _enemyHealthMultiplier,
            0,
            enemyView.healthBar,
            null,
            () =>
            {
                DataController.Instance.EnemiesKilled++;
                DataController.Instance.EarnedOre += orePrice;
            }
        );
        enemyView.Configure(entity);

        enemyView.handler.OnEnded = () => _damagePool.Add(entity);

        enemy.animator = enemyView.animator;
        enemy.view = enemyView;


        enemyDamage.InitStartValues(
            enemyView.enemyNumber == EnemyView.EnemyType.Dynamite,
            enemyBaseStats.damage,
            _enemyDamageMultiplier,
            enemyBaseStats.damageCooldown,
            (damage, enemyTransform) =>
            {
                UltimateTextDamageManager.Instance.Add(damage.ToString("N0"), enemyTransform, "tower");
                if (enemyView.enemyNumber == EnemyView.EnemyType.Barrel && !_destroyPool.Has(entity))
                    _destroyPool.Add(entity);
            });

        movement.StopRadius = enemyDamage.isRangeDamage ? RANGE_DEFAULT_RANGE : MELEE_DEFAULT_RANGE;

        currencyDrop.Drops = new Dictionary<CurrencyTypes, int>
        {
            {
                CurrencyTypes.Exp, (int) (expMultiplier * expPerKillMultiply)
            },
            {
                CurrencyTypes.Ore, orePrice
            }
        };
    }
}
