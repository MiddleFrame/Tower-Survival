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
    public void Init(IEcsSystems systems)
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
        
        healthPool = _world.GetPool<Health>();
        meleeDamagePool = _world.GetPool<EnemyDamage>();
        movementPool= _world.GetPool<Movement>();
        projectilePool = _world.GetPool<Projectile>();
        positionPool = _world.GetPool<Position>();
    }

    public void Run(IEcsSystems systems)
    {

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

        projectileMovement.transform = projectileView.transform;
        projectilePosition =  positionPool.Get(enemy);
        projectileMovement.Velocity = ((Vector2) positionPool.Get(enemy)).normalized * -projectileView.MovementSpeed;
        // Init View
        //projectileView.transform.position = (Vector2)projectilePosition;
        projectileView.packedEntity = projectileEntity;
        projectileView.world = _world;
    }

    private void TakeMeleeDamage(ref Health towerHealth, EnemyDamage enemyDamage)
    {
        towerHealth.CurrentHealth -= enemyDamage.Damage;
        if (towerHealth.CurrentHealth <= 0)
        {
            towerHealth.CurrentHealth = 0;
            towerHealth.OnKilled?.Invoke();
        }
        enemyDamage.OnStartAttack?.Invoke();
        enemyDamage.OnDamageDealt?.Invoke(enemyDamage.Damage, _sharedData.towerView.transform);
        towerHealth.OnDamaged?.Invoke();
    }
}