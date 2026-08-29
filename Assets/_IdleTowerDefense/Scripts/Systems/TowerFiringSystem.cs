using Guirao.UltimateTextDamage;
using Leopotam.EcsLite;
using UnityEngine;

public class TowerFiringSystem : IEcsInitSystem, IEcsRunSystem
{
    private SharedData _sharedData;
    private EcsWorld _world;
    private EcsFilter _towerTargetSelectorFilter;
    private EcsPool<TowerTargetSelector> _towerTargetSelectorPool;
    private EcsPool<TowerWeapon> _towerWeaponPool;
    private EcsPool<Projectile> _projectilePool;
    private EcsPool<Movement> _movementPool;
    private EcsPool<Position> _positionPool;
    private EcsPool<Enemy> _enemyPool;

    private readonly AudioClip _shootingClip;
    private readonly AudioSource _soundSource;

    public TowerFiringSystem(AudioClip shoot, AudioSource sound)
    {
        _shootingClip = shoot;
        _soundSource = sound;
    }
    
    public void Init(IEcsSystems systems)
    {
        _sharedData = systems.GetShared<SharedData>();
        _world = systems.GetWorld();
        _towerTargetSelectorFilter = _world.Filter<Tower>()
            .Inc<TowerTargetSelector>()
            .Inc<TowerWeapon>()
            .End();
        _towerTargetSelectorPool = _world.GetPool<TowerTargetSelector>();
        _towerWeaponPool = _world.GetPool<TowerWeapon>();
        _projectilePool = _world.GetPool<Projectile>();
        _movementPool = _world.GetPool<Movement>();
        _positionPool = _world.GetPool<Position>();
        _enemyPool = _world.GetPool<Enemy>();
    }

    public void Run(IEcsSystems systems)
    {
        if (DataController.IsGameplayEnding)
            return;

        foreach (int tower in _towerTargetSelectorFilter)
        {
            ref TowerTargetSelector towerTargetSelector = ref _towerTargetSelectorPool.Get(tower);
            ref TowerWeapon towerWeapon = ref _towerWeaponPool.Get(tower);

            if (towerTargetSelector.CurrentTargets == null || towerTargetSelector.CurrentTargets.Count == 0)
            {
                continue;
            }

            if (towerWeapon.AttackCooldownRemaining >= 0)
            {
                continue;
            }
            bool fired = false;
            for (int i = 0; i < towerTargetSelector.CurrentTargets.Count; i++)
            {
                if (!towerTargetSelector.CurrentTargets[i].Unpack(_world, out int target)
                    || !_enemyPool.Has(target)
                    || !_positionPool.Has(target))
                    continue;

                fired |= SpawnProjectile(_positionPool.Get(target), towerWeapon.AttackDamage);
            }

            if (fired)
            {
                towerWeapon.AttackCooldownRemaining = towerWeapon.AttackCooldown;
                if (_soundSource != null && _shootingClip != null)
                    _soundSource.PlayOneShot(_shootingClip);
            }
        }
    }

    private bool SpawnProjectile(Position targetPosition, float damage)
    {
        ProjectileView projectilePrefab = _sharedData.Settings.ProjectileView;
        if (projectilePrefab == null)
            return false;

        ProjectileView projectileView = _sharedData.ViewPools != null
            ? _sharedData.ViewPools.Spawn(projectilePrefab, Vector3.zero, Quaternion.identity)
            : GameObject.Instantiate(projectilePrefab);
        if (projectileView == null)
            return false;

        Vector3 targetWorldPosition = (Vector2) targetPosition;
        Vector2 direction = ((Vector2) targetPosition).normalized;
        projectileView.transform.LookAt2D(targetWorldPosition, LookType.Right);

        int projectileEntity = _world.NewEntity();
        ref Projectile projectile = ref _projectilePool.Add(projectileEntity);
        ref Movement projectileMovement = ref _movementPool.Add(projectileEntity);
        ref Position projectilePosition = ref _positionPool.Add(projectileEntity);

        projectile.Damage = damage;
        projectile.IsConsumed = false;
        projectile.view = projectileView;
        projectile.OnDamageDealt += ShowDamage;
        projectilePosition = direction * 0.05f;
        projectileMovement.Velocity = direction * projectileView.MovementSpeed;
        projectileMovement.StopRadius = 0;
        projectileMovement.transform = projectileView.transform;
        projectileView.Configure(_world, projectileEntity);
        return true;
    }

    private static void ShowDamage(float damage, Transform enemyTransform)
    {
        UltimateTextDamageManager.Instance.Add(damage.ToString("N0"), enemyTransform);
    }
}
