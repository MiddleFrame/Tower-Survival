using Guirao.UltimateTextDamage;
using Leopotam.EcsLite;
using UnityEngine;

public class EnemyDamageSystem : IEcsInitSystem, IEcsRunSystem
{
    private EcsWorld _world;
    private EcsFilter _enemyFilter;
    private EcsFilter _towerFilter;
    private SharedData _sharedData;
    private EcsPool<Health> healthPool;
    private EcsPool<EnemyDamage> meleeDamagePool;
    private EcsPool<Movement> movementPool;
    private EcsPool<Projectile> projectilePool;
    private EcsPool<Position> positionPool;
    private EcsPool<Damage> damagePool;

    public void Init(IEcsSystems systems)
    {
        _sharedData = systems.GetShared<SharedData>();
        _world = systems.GetWorld();
        _enemyFilter = _world.Filter<Enemy>()
            .Inc<Movement>()
            .Inc<EnemyDamage>()
            .Inc<Position>()
            .Inc<Damage>()
            .End();
        _towerFilter = _world.Filter<Tower>()
            .Inc<Health>()
            .End();

        healthPool = _world.GetPool<Health>();
        meleeDamagePool = _world.GetPool<EnemyDamage>();
        movementPool = _world.GetPool<Movement>();
        projectilePool = _world.GetPool<Projectile>();
        positionPool = _world.GetPool<Position>();
        damagePool = _world.GetPool<Damage>();
    }

    public void Run(IEcsSystems systems)
    {
        if (DataController.IsGameplayEnding)
            return;

        foreach (int tower in _towerFilter)
        {
            ref Health towerHealth = ref healthPool.Get(tower);

            foreach (int enemy in _enemyFilter)
            {
                ref EnemyDamage enemyDamage = ref meleeDamagePool.Get(enemy);

                enemyDamage.DamageCooldownRemaining = enemyDamage.DamageCooldown;

                if (enemyDamage.isRangeDamage)
                    Attack(enemy, enemyDamage, movementPool);
                else
                    TakeMeleeDamage(ref towerHealth, enemyDamage);
                damagePool.Del(enemy);
            }
        }
    }

    private void Attack(int enemy, EnemyDamage enemyDamage, EcsPool<Movement> movement)
    {
        int projectileEntity = _world.NewEntity();

        ref Projectile projectile = ref projectilePool.Add(projectileEntity);
        ref Movement projectileMovement = ref movement.Add(projectileEntity);
        ref Position projectilePosition = ref positionPool.Add(projectileEntity);

        // Setup View
        ProjectileView projectileView = _sharedData.ViewPools != null
            ? _sharedData.ViewPools.Spawn(_sharedData.Settings.DynamiteView, Vector3.zero, Quaternion.identity)
            : GameObject.Instantiate(_sharedData.Settings.DynamiteView);
        // Init components
        projectile.Damage = enemyDamage.Damage;
        projectile.IsConsumed = false;
        projectile.view = projectileView;
        projectile.OnDamageDealt += (damage, enemyTransform) =>
            UltimateTextDamageManager.Instance.Add(damage.ToString("N0"), enemyTransform, "tower");
        projectileMovement.StopRadius = 0;

        projectileMovement.transform = projectileView.transform;
        projectilePosition = positionPool.Get(enemy);
        projectileMovement.Velocity = ((Vector2) positionPool.Get(enemy)).normalized * -projectileView.MovementSpeed;
        // Init View
        //projectileView.transform.position = (Vector2)projectilePosition;
        projectileView.Configure(_world, projectileEntity);
    }

    private void TakeMeleeDamage(ref Health towerHealth, EnemyDamage enemyDamage)
    {
        towerHealth.CurrentHealth -= enemyDamage.Damage;
        if (towerHealth.CurrentHealth <= 0)
        {
            towerHealth.CurrentHealth = 0;
            towerHealth.OnKilled?.Invoke();
        }

        enemyDamage.OnDamageDealt?.Invoke(enemyDamage.Damage, _sharedData.towerView.transform);
        towerHealth.OnDamaged?.Invoke();
    }
}
