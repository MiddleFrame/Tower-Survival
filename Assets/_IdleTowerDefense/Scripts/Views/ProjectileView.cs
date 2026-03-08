using System.Collections.Generic;
using System.Linq;
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

    private Collider2D _collider;
    private Renderer[] _renderers;
    private EcsPool<Destroy> _destroyPool;
    private float _lifetimeRemaining;

    private static readonly HashSet<ProjectileView> ActiveViews = new HashSet<ProjectileView>();

    public static ProjectileView[] GetActiveViewsSnapshot()
    {
        return ActiveViews.ToArray();
    }

    private void Awake()
    {
        _collider = GetComponent<Collider2D>();
        _renderers = GetComponentsInChildren<Renderer>(true);
    }

    private void OnEnable()
    {
        ActiveViews.Add(this);
    }

    private void OnDisable()
    {
        ActiveViews.Remove(this);
    }

    public void Configure(EcsWorld ecsWorld, int entity)
    {
        world = ecsWorld;
        packedEntity = entity;
        _destroyPool = world.GetPool<Destroy>();
        _towerFilter = world.Filter<Tower>().Inc<Health>().End();
        _lifetimeRemaining = MaxLifetime;

        if (_collider != null)
            _collider.enabled = true;

        for (int i = 0; i < _renderers.Length; i++)
            _renderers[i].enabled = true;
    }

    private void Update()
    {
        if (world == null || DataController.IsGameplayEnding)
            return;

        _lifetimeRemaining -= Time.deltaTime;
        if (_lifetimeRemaining <= 0f)
            MarkForDestroy();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (world == null || DataController.IsGameplayEnding)
            return;

        EcsPool<Projectile> projectilePool = world.GetPool<Projectile>();
        ref Projectile projectile = ref projectilePool.Get(packedEntity);
        if (projectile.IsConsumed)
            return;

        projectile.IsConsumed = true;

        if (isEnemyProjectile)
        {
            if (!other.CompareTag("Tower"))
            {
                projectile.IsConsumed = false;
                return;
            }

            EcsPool<Health> healthPool = world.GetPool<Health>();
            foreach (int tower in _towerFilter)
            {
                ref Health towerHealth = ref healthPool.Get(tower);
                towerHealth.CurrentHealth -= projectile.Damage;
                if (towerHealth.CurrentHealth <= 0)
                {
                    towerHealth.CurrentHealth = 0;
                    towerHealth.OnKilled?.Invoke();
                }

                projectile.OnDamageDealt?.Invoke(projectile.Damage, other.transform);
                towerHealth.OnDamaged?.Invoke();
            }

            MarkForDestroy();
            return;
        }

        if (other.TryGetComponent(out EnemyView enemyView))
        {
            int unpackedEnemy = enemyView.enemyEntity;
            EcsPool<Health> healthPool = world.GetPool<Health>();
            ref Health enemyHealth = ref healthPool.Get(unpackedEnemy);

            enemyHealth.CurrentHealth -= projectile.Damage;
            enemyHealth.OnDamaged?.Invoke();
            projectile.OnDamageDealt?.Invoke(projectile.Damage, other.transform);

            if (enemyHealth.CurrentHealth <= 0)
            {
                enemyHealth.OnKilled?.Invoke();
                enemyView.SpawnDeathVfx();
                if (!_destroyPool.Has(unpackedEnemy))
                    _destroyPool.Add(unpackedEnemy);
            }

            MarkForDestroy();
            return;
        }

        projectile.IsConsumed = false;
    }

    private void MarkForDestroy()
    {
        if (world == null || _destroyPool == null)
            return;

        if (!_destroyPool.Has(packedEntity))
            _destroyPool.Add(packedEntity);

        if (_collider != null)
            _collider.enabled = false;

        for (int i = 0; i < _renderers.Length; i++)
            _renderers[i].enabled = false;
    }
}
