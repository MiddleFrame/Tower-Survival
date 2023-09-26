using Guirao.UltimateTextDamage;
using Leopotam.EcsLite;
using UnityEngine;

public class DestroySystem : IEcsInitSystem, IEcsRunSystem
{
    private EcsWorld _world;
    private EcsFilter _destroyFilter;
    private EcsPool<CurrencyDrop> _currencyDropPool;
    private EcsPool<Position> _positionPool;
    public void Init(IEcsSystems systems)
    {
        _world = systems.GetWorld();
        _destroyFilter = _world.Filter<Destroy>().Inc<Position>().End();
        _currencyDropPool = _world.GetPool<CurrencyDrop>();
        _positionPool = _world.GetPool<Position>();
    }

    public void Run(IEcsSystems systems)
    {
        foreach (int destroyedEntity in _destroyFilter)
        {
            if (_currencyDropPool.Has(destroyedEntity))
            {
                ref CurrencyDrop currencyDrop = ref _currencyDropPool.Get(destroyedEntity);
                ref Position enemyPosition = ref _positionPool.Get(destroyedEntity);

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
            _world.DelEntity(destroyedEntity);
        }
    }
}