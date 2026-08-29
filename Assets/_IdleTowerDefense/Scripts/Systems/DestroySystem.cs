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
    private EcsPool<MetaCurrencyReward> _metaCurrencyRewardPool;
    private EcsPool<ClickBounty> _clickBountyPool;
    private SharedData _sharedData;
    private readonly CombatSpellController _combatSpells;
    public static int goldMultiplier=1;

    public DestroySystem()
    {
    }

    public DestroySystem(CombatSpellController combatSpells)
    {
        _combatSpells = combatSpells;
    }
    public void Init(IEcsSystems systems)
    {
        _sharedData = systems.GetShared<SharedData>();
        _world = systems.GetWorld();
        _destroyFilter = _world.Filter<Destroy>().Inc<Position>().End();
        _currencyDropPool = _world.GetPool<CurrencyDrop>();
        _positionPool = _world.GetPool<Position>();
        _enemyPool = _world.GetPool<Enemy>();
        _projectilePool = _world.GetPool<Projectile>();
        _metaCurrencyRewardPool = _world.GetPool<MetaCurrencyReward>();
        _clickBountyPool = _world.GetPool<ClickBounty>();
    }

    public void Run(IEcsSystems systems)
    {
        foreach (int destroyedEntity in _destroyFilter)
        {
            ref Position destroyedPosition = ref _positionPool.Get(destroyedEntity);
            float rewardMultiplier = _clickBountyPool.Has(destroyedEntity)
                ? Mathf.Max(1f, _clickBountyPool.Get(destroyedEntity).RewardMultiplier)
                : 1f;

            if (_metaCurrencyRewardPool.Has(destroyedEntity))
            {
                int amount = _metaCurrencyRewardPool.Get(destroyedEntity).Amount;
                _combatSpells?.TrySpawnMetaDrop(destroyedPosition, amount, rewardMultiplier);
            }

            if (_enemyPool.Has(destroyedEntity)
                && DataController.Instance.EnemiesKilled > 0
                && DataController.Instance.EnemiesKilled % 10 == 0)
            {
                DataController.Currency.AddValues(
                    new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, goldMultiplier));
            }

            if (_currencyDropPool.Has(destroyedEntity))
            {
                ref CurrencyDrop currencyDrop = ref _currencyDropPool.Get(destroyedEntity);
                foreach (var drop in currencyDrop.Drops)
                {
                    int amount = CombatSpellRules.ResolveRewardAmount(drop.Value, rewardMultiplier);
                    if (amount > 0)
                        DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes, int>(drop.Key, amount));
                }

                currencyDrop.Drops.TryGetValue(CurrencyTypes.Exp, out int exp);
                currencyDrop.Drops.TryGetValue(CurrencyTypes.Ore, out int ore);
                exp = CombatSpellRules.ResolveRewardAmount(exp, rewardMultiplier);
                ore = CombatSpellRules.ResolveRewardAmount(ore, rewardMultiplier);
                if (exp > 0 || ore > 0)
                {
                    Transform popup = GameObject.Instantiate(UltimateTextDamageManager.Instance.dropPrefab)
                        .GetComponent<CurrencyDrops>()
                        .Construct(exp, ore);
                    popup.SetParent(UltimateTextDamageManager.Instance._uI);
                    popup.localRotation = Quaternion.identity;
                    popup.position = (Vector2) destroyedPosition;
                    popup.localScale = Vector3.one;
                }
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
