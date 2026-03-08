using Leopotam.EcsLite;
using UnityEngine;

public class EnemyAttackSystem : IEcsInitSystem, IEcsRunSystem
{
    private EcsWorld _world;
    private EcsFilter _attackFilter;
    private EcsPool<Movement> _movementPool;
    private EcsPool<Enemy> _enemyPool;
    private EcsPool<EnemyDamage> _meleeDamagePool;
    private static readonly int hit = Animator.StringToHash("Hit");
    private static readonly int hitDown = Animator.StringToHash("Hit_down");
    private static readonly int hitUp = Animator.StringToHash("Hit_up");

    public void Init(IEcsSystems systems)
    {
        _world = systems.GetWorld();
        _attackFilter = _world.Filter<Enemy>()
            .Inc<AttackHit>()
            .Inc<Movement>()
            .End();

        _enemyPool = _world.GetPool<Enemy>();
        _movementPool = _world.GetPool<Movement>();
        _meleeDamagePool = _world.GetPool<EnemyDamage>();
    }

    public void Run(IEcsSystems systems)
    {
        if (DataController.IsGameplayEnding)
            return;

        foreach (var entity in _attackFilter)
        {
            ref Movement movementEntity = ref _movementPool.Get(entity);
            ref Enemy enemy = ref _enemyPool.Get(entity);
            ref EnemyDamage enemyDamage = ref _meleeDamagePool.Get(entity);
            enemyDamage.DamageCooldownRemaining -= Time.deltaTime;
            if (enemyDamage.DamageCooldownRemaining > 0) continue;
            enemyDamage.DamageCooldownRemaining = enemyDamage.DamageCooldown;
            switch (movementEntity.transform.position.y)
            {
                case > 0.5f:
                    enemy.animator.SetTrigger(hitDown);
                    break;
                case < -0.5f:
                    enemy.animator.SetTrigger(hitUp);
                    break;
                default:
                    enemy.animator.SetTrigger(hit);
                    break;
            }
        }
    }

    
}
