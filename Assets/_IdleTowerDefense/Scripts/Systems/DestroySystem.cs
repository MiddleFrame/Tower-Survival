using Guirao.UltimateTextDamage;
using Leopotam.EcsLite;
using Unity.VisualScripting;
using UnityEngine;

public class DestroySystem : IEcsPreInitSystem, IEcsRunSystem
{
    private EcsWorld world;
    private EcsFilter destroyFilter;


    public void PreInit(EcsSystems systems)
    {
        world = systems.GetWorld();
        destroyFilter = world.Filter<Destroy>().End();
    }

    public void Run(EcsSystems systems)
    {
        EcsPool<CurrencyDrop> currencyDropPool = world.GetPool<CurrencyDrop>();
        EcsPool<Position> positionPool = world.GetPool<Position>();

        foreach (int destroyedEntity in destroyFilter)
        {
            if (currencyDropPool.Has(destroyedEntity))
            {
                ref CurrencyDrop currencyDrop = ref currencyDropPool.Get(destroyedEntity);
                ref Position enemyPosition = ref positionPool.Get(destroyedEntity);

                // Add currency
                foreach (var drop in currencyDrop.Drops)
                {
                    GameManager.Currency.AddValues(drop);
                }


                var obj = GameObject.Instantiate(UltimateTextDamageManager.Instance.dropPrefab).GetComponent<CurrencyDrops>()
                    .Construct(currencyDrop.Drops[CurrencyTypes.Exp], currencyDrop.Drops[CurrencyTypes.Ore]);
                obj.SetParent( UltimateTextDamageManager.Instance._uI );
                obj.localRotation = Quaternion.identity;
                obj.position =(Vector2) enemyPosition;     
                obj.localScale = Vector3.one;
            }

            world.DelEntity(destroyedEntity);
        }
    }
}