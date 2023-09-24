using Leopotam.EcsLite;
using UnityEngine;

public class ProjectileView : MonoBehaviour
{
    public float MovementSpeed = 5;
    public float Damage = 1;
    public float MaxLifetime = 10;

    public EcsPackedEntity packedEntity;
    public EcsWorld world;
    private EcsFilter _destroyFilter;
    private EcsFilter _towerFilter;

    [SerializeField]
    private bool isEnemyProjectile;

    private void Start()
    {
        _destroyFilter = world.Filter<Destroy>()
            .End();
        
        _towerFilter = world.Filter<Tower>()
            .Inc<Health>()
            .End();
        Destroy(gameObject, MaxLifetime);
    }

    private void Update()
    {
        if (packedEntity.Unpack(world, out int unpackedEntity))
        {
            EcsPool<Position> positionPool = world.GetPool<Position>();
            ref Position position = ref positionPool.Get(unpackedEntity);
            transform.position = new Vector3(position.x, position.y, 0);
        }
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (isEnemyProjectile)
        {
            if (other.TryGetComponent(out TowerView towerView)&&
                packedEntity.Unpack(world, out int unpackedProjectile))
            {
                EcsPool<Projectile> projectilePool = world.GetPool<Projectile>();
                
                EcsPool<Health> healthPool = world.GetPool<Health>();
                
                ref Projectile projectile = ref projectilePool.Get(unpackedProjectile);
                foreach (int tower in _towerFilter)
                {
                    ref Health towerHealth = ref healthPool.Get(tower);
                    towerHealth.CurrentHealth -= Damage;
                    if (towerHealth.CurrentHealth <= 0)
                    {
                        towerHealth.CurrentHealth = 0;
                        towerHealth.OnKilled?.Invoke();
                    }
                    projectile.OnDamageDealt?.Invoke(Damage, towerView.transform);
                    towerHealth.OnDamaged?.Invoke();
                }
                
                EcsPool<Destroy> destroyPool = world.GetPool<Destroy>();
                if (!destroyPool.Has(unpackedProjectile))
                {
                    destroyPool.Add(unpackedProjectile);
                    Destroy(gameObject);
                }

            }
        }
        else if (other.TryGetComponent(out EnemyView enemyView))
        {
            if (enemyView.PackedEntity.Unpack(world, out int unpackedEnemy) &&
                packedEntity.Unpack(world, out int unpackedProjectile))
            {
                EcsPool<Destroy> destroyPool = world.GetPool<Destroy>();
                EcsPool<Health> healthPool = world.GetPool<Health>();
                EcsPool<Projectile> projectilePool = world.GetPool<Projectile>();
                ref Health enemyHealth = ref healthPool.Get(unpackedEnemy);
                ref Projectile projectile = ref projectilePool.Get(unpackedProjectile);

                enemyHealth.CurrentHealth -= projectile.Damage;
                enemyHealth.OnDamaged?.Invoke();

                projectile.OnDamageDealt?.Invoke(projectile.Damage, other.transform);

                // Check enemy health and mark for deletion if necessary
                if (enemyHealth.CurrentHealth <= 0 && !destroyPool.Has(unpackedEnemy))
                { 
                    enemyHealth.OnKilled?.Invoke();
                    destroyPool.Add(unpackedEnemy);

                    // Delayed destroy to work around damage numbers not working when destroyed immediately
                    other.gameObject.SetActive(false);
                    Destroy(other.gameObject, 0.1f);
                }

                // Mark projectile for deletion if not already
                if (!destroyPool.Has(unpackedProjectile))
                {
                    destroyPool.Add(unpackedProjectile);
                    Destroy(gameObject);
                }
            }
        }
    }

    private void OnDestroy()
    {
        if (!packedEntity.Unpack(world, out int unpackedProjectile))
            return;

        EcsPool<Destroy> destroyPool = world.GetPool<Destroy>();


        if (!destroyPool.Has(unpackedProjectile))
        {
            destroyPool.Add(unpackedProjectile);
        }
    }
}