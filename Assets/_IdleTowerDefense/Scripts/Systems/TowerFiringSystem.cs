using Guirao.UltimateTextDamage;
using Leopotam.EcsLite;
using UnityEngine;

public class TowerFiringSystem : IEcsInitSystem, IEcsRunSystem
{
    private SharedData _sharedData;
    private EcsWorld _world;
    private EcsFilter _towerTargetSelectorFilter;

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
    }

    public void Run(IEcsSystems systems)
    {
        EcsPool<TowerTargetSelector> towerTargetSelectorPool = _world.GetPool<TowerTargetSelector>();
        EcsPool<TowerWeapon> towerWeaponPool = _world.GetPool<TowerWeapon>();

        foreach (int tower in _towerTargetSelectorFilter)
        {
            ref TowerTargetSelector towerTargetSelector = ref towerTargetSelectorPool.Get(tower);
            ref TowerWeapon towerWeapon = ref towerWeaponPool.Get(tower);

            if (towerTargetSelector.CurrentTargets == null || towerTargetSelector.CurrentTargets.Count == 0)
            {
                continue;
            }

            if (towerWeapon.AttackCooldownRemaining >= 0)
            {
                continue;
            }
            _soundSource.PlayOneShot(_shootingClip);
            towerWeapon.AttackCooldownRemaining = towerWeapon.AttackCooldown;
            for (int i = 0; i < towerTargetSelector.CurrentTargets.Count; i++)
            {
                // Spawn projectile
                int projectileEntity = _world.NewEntity();
                EcsPool<Projectile> projectilePool = _world.GetPool<Projectile>();
                EcsPool<Movement> movementPool = _world.GetPool<Movement>();
                EcsPool<Position> positionPool = _world.GetPool<Position>();
                ref Projectile projectile = ref projectilePool.Add(projectileEntity);
                ref Movement projectileMovement = ref movementPool.Add(projectileEntity);
                ref Position projectilePosition = ref positionPool.Add(projectileEntity);


                // Setup View
                ProjectileView projectileView = GameObject.Instantiate(_sharedData.Settings.ProjectileView);
                projectileView.transform.LookAt2D((Vector2)positionPool.Get(towerTargetSelector.CurrentTargets[i]),LookType.Right);
                // Init components
                projectile.Damage = towerWeapon.AttackDamage;
                projectile.OnDamageDealt += (damage, enemyTransform) => UltimateTextDamageManager.Instance.Add(damage.ToString("N0"), enemyTransform);
                projectilePosition = ((Vector2)positionPool.Get(towerTargetSelector.CurrentTargets[i])).normalized * 0.05f;
                projectileMovement.Velocity = ((Vector2)positionPool.Get(towerTargetSelector.CurrentTargets[i])).normalized * projectileView.MovementSpeed;
                projectileMovement.StopRadius = 0;
                projectileMovement.transform = projectileView.transform;
                // Init View
                projectileView.packedEntity = projectileEntity;
               // projectileView.transform.position = (Vector2)projectilePosition;
                projectileView.world = _world;
            }
        }
    }
}