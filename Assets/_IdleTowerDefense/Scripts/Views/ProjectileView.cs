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
    private EcsPool<Projectile> _projectilePool;
    private EcsPool<Health> _healthPool;
    private EcsPackedEntity _packedEntity;
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
        world = null;
        _destroyPool = null;
        _projectilePool = null;
        _healthPool = null;
    }

    public void Configure(EcsWorld ecsWorld, int entity)
    {
        world = ecsWorld;
        packedEntity = entity;
        _packedEntity = world.PackEntity(entity);
        _destroyPool = world.GetPool<Destroy>();
        _projectilePool = world.GetPool<Projectile>();
        _healthPool = world.GetPool<Health>();
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

        if (!_packedEntity.Unpack(world, out int projectileEntity)
            || !_projectilePool.Has(projectileEntity))
            return;

        ref Projectile projectile = ref _projectilePool.Get(projectileEntity);
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

            if (InitData.sharedData?.CombatSpells != null
                && InitData.sharedData.CombatSpells.IsTowerInvulnerable)
            {
                MarkForDestroy();
                return;
            }

            foreach (int tower in _towerFilter)
            {
                ref Health towerHealth = ref _healthPool.Get(tower);
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
            if (!enemyView.TryGetEntity(world, out int unpackedEnemy)
                || !_healthPool.Has(unpackedEnemy)
                || _destroyPool.Has(unpackedEnemy))
            {
                projectile.IsConsumed = false;
                return;
            }

            ref Health enemyHealth = ref _healthPool.Get(unpackedEnemy);
            if (enemyHealth.CurrentHealth <= 0f)
            {
                projectile.IsConsumed = false;
                return;
            }

            enemyHealth.CurrentHealth -= projectile.Damage;
            enemyHealth.OnDamaged?.Invoke();
            projectile.OnDamageDealt?.Invoke(projectile.Damage, other.transform);

            if (enemyHealth.CurrentHealth <= 0)
            {
                enemyHealth.CurrentHealth = 0;
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
        if (world == null || _destroyPool == null
            || !_packedEntity.Unpack(world, out int projectileEntity))
            return;

        if (!_destroyPool.Has(projectileEntity))
            _destroyPool.Add(projectileEntity);

        if (_collider != null)
            _collider.enabled = false;

        for (int i = 0; i < _renderers.Length; i++)
            _renderers[i].enabled = false;
    }
}
