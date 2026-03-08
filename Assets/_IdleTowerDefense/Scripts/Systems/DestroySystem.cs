using System.Collections.Generic;
using Guirao.UltimateTextDamage;
using Leopotam.EcsLite;
using UnityEngine;

public class DestroySystem : IEcsInitSystem, IEcsRunSystem
{
    private EcsWorld _world;
    private EcsFilter _destroyFilter;
    private EcsPool<CurrencyDrop> _currencyDropPool;
    private EcsPool<Position> _positionPool;
    private EcsPool<Enemy> _enemyPool;
    private EcsPool<Projectile> _projectilePool;
    private SharedData _sharedData;
    public static int goldMultiplier=1;
    public void Init(IEcsSystems systems)
    {
        _sharedData = systems.GetShared<SharedData>();
        _world = systems.GetWorld();
        _destroyFilter = _world.Filter<Destroy>().Inc<Position>().End();
        _currencyDropPool = _world.GetPool<CurrencyDrop>();
        _positionPool = _world.GetPool<Position>();
        _enemyPool = _world.GetPool<Enemy>();
        _projectilePool = _world.GetPool<Projectile>();
    }

    public void Run(IEcsSystems systems)
    {
        foreach (int destroyedEntity in _destroyFilter)
        {
            if (_currencyDropPool.Has(destroyedEntity))
            {
                ref CurrencyDrop currencyDrop = ref _currencyDropPool.Get(destroyedEntity);
                ref Position enemyPosition = ref _positionPool.Get(destroyedEntity);
                if (DataController.Instance.EnemiesKilled % 10 == 0)
                {
                    DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, goldMultiplier));
                }
                // Add currency
                foreach (var drop in currencyDrop.Drops)
                {
                    DataController.Currency.AddValues(drop);
                }


                var obj = GameObject.Instantiate(UltimateTextDamageManager.Instance.dropPrefab).GetComponent<CurrencyDrops>()
                    .Construct(currencyDrop.Drops[CurrencyTypes.Exp], currencyDrop.Drops[CurrencyTypes.Ore]);
                obj.SetParent( UltimateTextDamageManager.Instance._uI );
                obj.localRotation = Quaternion.identity;
                obj.position =(Vector2) enemyPosition;     
                obj.localScale = Vector3.one;
            }

            if (_enemyPool.Has(destroyedEntity))
            {
                ref Enemy enemy = ref _enemyPool.Get(destroyedEntity);
                if (enemy.view != null && _sharedData.ViewPools != null)
                    _sharedData.ViewPools.Release(enemy.view);
            }

            if (_projectilePool.Has(destroyedEntity))
            {
                ref Projectile projectile = ref _projectilePool.Get(destroyedEntity);
                if (projectile.view != null && _sharedData.ViewPools != null)
                    _sharedData.ViewPools.Release(projectile.view);
            }

            _world.DelEntity(destroyedEntity);
        }
    }
}
