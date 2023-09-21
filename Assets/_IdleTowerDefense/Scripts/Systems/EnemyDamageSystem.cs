using Guirao.UltimateTextDamage;
using Leopotam.EcsLite;
using UnityEngine;

public class EnemyDamageSystem : IEcsPreInitSystem, IEcsRunSystem
{
    private EcsWorld _world;
    private EcsFilter _enemyFilter;
    private EcsFilter _towerFilter;
    private SharedData _sharedData;

    public void PreInit(EcsSystems systems)
    {
        _sharedData = systems.GetShared<SharedData>();
        _world = systems.GetWorld();
        _enemyFilter = _world.Filter<Enemy>()
            .Inc<Movement>()
            .Inc<EnemyDamage>()
            .Inc<Position>()
            .End();
        _towerFilter = _world.Filter<Tower>()
            .Inc<Health>()
            .End();
    }

    public void Run(EcsSystems systems)
    {
        EcsPool<Health> healthPool = _world.GetPool<Health>();
        EcsPool<EnemyDamage> meleeDamagePool = _world.GetPool<EnemyDamage>();
        EcsPool<Movement> movementPool = _world.GetPool<Movement>();

        foreach (int tower in _towerFilter)
        {
            ref Health towerHealth = ref healthPool.Get(tower);

            foreach (int enemy in _enemyFilter)
            {
                ref Movement enemyMovement = ref movementPool.Get(enemy);
                if (!enemyMovement.Stopped)
                {
                    continue;
                }

                ref EnemyDamage enemyDamage = ref meleeDamagePool.Get(enemy);
                enemyDamage.DamageCooldownRemaining -= Time.deltaTime;
                if (enemyDamage.DamageCooldownRemaining <= 0)
                {
                    enemyDamage.DamageCooldownRemaining = enemyDamage.DamageCooldown;

                    if (enemyDamage.isRangeDamage)
                        Attack(enemy, enemyDamage, movementPool);
                    else
                        TakeMeleeDamage(ref towerHealth, enemyDamage);
                }
            }
        }
    }

    private void Attack(int enemy, EnemyDamage enemyDamage, EcsPool<Movement> movement)
    {
        int projectileEntity = _world.NewEntity();
        EcsPackedEntity packedProjectileEntity = _world.PackEntity(projectileEntity);
        EcsPool<Projectile> projectilePool = _world.GetPool<Projectile>();
        EcsPool<Position> positionPool = _world.GetPool<Position>();
        ref Projectile projectile = ref projectilePool.Add(projectileEntity);
        ref Movement projectileMovement = ref movement.Add(projectileEntity);
        ref Position projectilePosition = ref positionPool.Add(projectileEntity);
        enemyDamage.OnStartAttack?.Invoke();

        // Setup View
        ProjectileView projectileView = GameObject.Instantiate(_sharedData.Settings.DynamiteView);
        // Init components
        projectile.Damage = enemyDamage.Damage;
        projectile.OnDamageDealt += (damage, enemyTransform) =>
            UltimateTextDamageManager.Instance.Add(damage.ToString("N0"), enemyTransform,"tower");
        projectileMovement.StopRadius = 0;

        projectilePosition = ((Vector2) positionPool.Get(enemy));
        projectileMovement.Velocity = ((Vector2) positionPool.Get(enemy)).normalized * -projectileView.MovementSpeed;
        // Init View
        projectileView.transform.position = (Vector2)projectilePosition;
        projectileView.packedEntity = packedProjectileEntity;
        projectileView.world = _world;
    }

    private void TakeMeleeDamage(ref Health towerHealth, EnemyDamage enemyDamage)
    {
        enemyDamage.OnStartAttack?.Invoke();
        towerHealth.OnDamaged?.Invoke(enemyDamage.Damage);
        enemyDamage.OnDamageDealt?.Invoke(enemyDamage.Damage, _sharedData.TowerView.transform);
    }
}