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

    private int _enemySpawned ;
    private int _stage;

    public static float expMultiplier=1;
    private static float expPerKillMultiply=1;
    
    private EnemySpawnSettings _spawnSettings;
    private EcsFilter _towerTargetSelectorFilter;

    private const float MELEE_DEFAULT_RANGE=0.8f;

    public void PreInit(EcsSystems systems)
    {
        _stage = 0;
        _sharedData = systems.GetShared<SharedData>();
        _world = systems.GetWorld();
        _spawnSettings = _sharedData.Settings.EnemySpawnSettings[GameManager.tier];
        _enemySpawnDelay = _spawnSettings.stages[_stage].enemySpawnRate;
    }

    public void Init(EcsSystems systems)
    {
        _towerTargetSelectorFilter = GameManager.Instance.World.Filter<Tower>().Inc<TowerTargetSelector>().End();
        expMultiplier = 1;
        expPerKillMultiply = 1;
    }

    public void Run(EcsSystems systems)
    {
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
        EnemyView enemyView =
            GameObject.Instantiate(_spawnSettings.GetRandomEnemy(_stage), randomPosition, new Quaternion());

        bool isOreEnemy = Random.Range(0, 4)>2;

        int entity = _world.NewEntity();
        EcsPackedEntity packedEntity = _world.PackEntity(entity);
        EcsPool<Enemy> enemyPool = _world.GetPool<Enemy>();
        EcsPool<Position> positionPool = _world.GetPool<Position>();
        EcsPool<Movement> movementPool = _world.GetPool<Movement>();
        EcsPool<Health> healthPool = _world.GetPool<Health>();
        EcsPool<CurrencyDrop> currencyDropPool = _world.GetPool<CurrencyDrop>();
        EcsPool<EnemyDamage> meleeDamagePool = _world.GetPool<EnemyDamage>();

        EcsPool<TowerTargetSelector> targetSelectorPool = GameManager.Instance.World.GetPool<TowerTargetSelector>();

        enemyPool.Add(entity);
        ref Position position = ref positionPool.Add(entity);
        ref Movement movement = ref movementPool.Add(entity);
        ref Health health = ref healthPool.Add(entity);
        ref CurrencyDrop currencyDrop = ref currencyDropPool.Add(entity);
        ref EnemyDamage enemyDamage = ref meleeDamagePool.Add(entity);
        ref TowerTargetSelector targetSelector =
            ref targetSelectorPool.Get(_towerTargetSelectorFilter.GetRawEntities()[0]);

        // Setup View


        var enemyBaseStats = _sharedData.Settings.EnemySpawnSettings[GameManager.tier]._stats[(int) enemyView.enemyNumber];

        // Init Components
        position = randomPosition;
        movement.Velocity = -randomPosition.normalized * enemyBaseStats.movementSpeed;
        expPerKillMultiply *= 1.01f;
        int orePrice = isOreEnemy ? (int)_sharedData.Settings.EnemySpawnSettings[GameManager.tier].OreMultiplier : 0; 
        
        health.InitStartValues(
            enemyBaseStats.startingHealth, 
            _enemyHealthMultiplier,
            0,
            null,
            () =>
            {
                GameManager.Instance.EnemiesKilled++;
                GameManager.Instance.EarnedOre+=orePrice;
            }
        );


        enemyDamage.InitStartValues(
            enemyView.enemyNumber == EnemyView.EnemyType.Dynamite,
            enemyBaseStats.damage,
            _enemyDamageMultiplier,
            enemyBaseStats.damageCooldown,
            enemyView.Hit,
            (damage, enemyTransform) =>
                UltimateTextDamageManager.Instance.Add(damage.ToString("N0"), enemyTransform, "tower"));

        movement.StopRadius = enemyDamage.isRangeDamage ? targetSelector.TargetingRange : MELEE_DEFAULT_RANGE;

        currencyDrop.Drops = new Dictionary<CurrencyTypes, int>
        {
            {
                CurrencyTypes.Exp, (int)(expMultiplier*expPerKillMultiply)
            },
            {
                CurrencyTypes.Ore, orePrice
            }
        };

        enemyView.PackedEntity = packedEntity;
        enemyView.World = _world;
    }
}