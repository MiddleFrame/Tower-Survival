using Leopotam.EcsLite;
using UnityEngine;

public class ProjectileView : MonoBehaviour
{
    public float MovementSpeed = 5;
    public float Damage = 1;
    public float MaxLifetime = 10;

    public int packedEntity;
    public EcsWorld world;
    private EcsFilter _towerFilter;

    [SerializeField]
    private bool isEnemyProjectile;

    private EcsPool<Destroy> _destroyPool;
    private void Start()
    {
        
        _towerFilter = world.Filter<Tower>()
            .Inc<Health>()
            .End();
        _destroyPool = world.GetPool<Destroy>();
        Destroy(gameObject, MaxLifetime);
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (isEnemyProjectile)
        {
            if (other.tag.Equals("Tower"))
            {
                EcsPool<Projectile> projectilePool = world.GetPool<Projectile>();
                
                EcsPool<Health> healthPool = world.GetPool<Health>();
                
                ref Projectile projectile = ref projectilePool.Get(packedEntity);
                foreach (int tower in _towerFilter)
                {
                    ref Health towerHealth = ref healthPool.Get(tower);
                    towerHealth.CurrentHealth -= Damage;
                    if (towerHealth.CurrentHealth <= 0)
                    {
                        towerHealth.CurrentHealth = 0;
                        towerHealth.OnKilled?.Invoke();
                    }
                    projectile.OnDamageDealt?.Invoke(Damage, other.transform);
                    towerHealth.OnDamaged?.Invoke();
                }
                
                EcsPool<Destroy> destroyPool = world.GetPool<Destroy>();
                if (!destroyPool.Has(packedEntity))
                {
                    destroyPool.Add(packedEntity);
                    Destroy(gameObject);
                }

            }
        }
        else if (other.TryGetComponent(out EnemyView enemyView))
        {
            if (enemyView.PackedEntity.Unpack(world, out int unpackedEnemy))
            {
                EcsPool<Destroy> destroyPool = world.GetPool<Destroy>();
                EcsPool<Health> healthPool = world.GetPool<Health>();
                EcsPool<Projectile> projectilePool = world.GetPool<Projectile>();
                ref Health enemyHealth = ref healthPool.Get(unpackedEnemy);
                ref Projectile projectile = ref projectilePool.Get(packedEntity);

                enemyHealth.CurrentHealth -= projectile.Damage;
                enemyHealth.OnDamaged?.Invoke();

                projectile.OnDamageDealt?.Invoke(projectile.Damage, other.transform);

                // Check enemy health and mark for deletion if necessary
                if (enemyHealth.CurrentHealth <= 0 && !destroyPool.Has(unpackedEnemy))
                { 
                    enemyHealth.OnKilled?.Invoke();
                    destroyPool.Add(unpackedEnemy);

                    // Delayed destroy to work around damage numbers not working when destroyed immediately
                    GameObject o;
                    (o = other.gameObject).SetActive(false);
                    Destroy(o, 0.1f);
                }

                // Mark projectile for deletion if not already
                if (!destroyPool.Has(packedEntity))
                {
                    destroyPool.Add(packedEntity);
                    Destroy(gameObject);
                }
            }
        }
    }

    private void OnDestroy()
    {
        if (!_destroyPool.Has(packedEntity))
        {
            _destroyPool.Add(packedEntity);
        }
    }
}