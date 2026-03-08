using Leopotam.EcsLite;
using UnityEngine;

public class MovementSystem : IEcsPreInitSystem, IEcsRunSystem
{
    private EcsWorld world;
    private EcsFilter enemyFilter;
    private EcsPool<Position> _positionPool;
    private EcsPool<Movement> _movementPool;
    private EcsPool<AttackHit> _attackPool;

    public void PreInit(IEcsSystems systems)
    {
        world = systems.GetWorld();
        enemyFilter = world.Filter<Position>()
            .Inc<Movement>()
            .Exc<AttackHit>()
            .End();
        _positionPool = world.GetPool<Position>();
        _movementPool = world.GetPool<Movement>();
        _attackPool = world.GetPool<AttackHit>();
    }

    public void Run(IEcsSystems systems)
    {
        foreach (int entity in enemyFilter)
        {
            ref Position position = ref _positionPool.Get(entity);
            ref Movement movement = ref _movementPool.Get(entity);

            if (((Vector2) position).magnitude > movement.StopRadius)
            {
                var newPosition = position + Time.deltaTime * movement.Velocity;
                position = newPosition;
                movement.transform.position = new Vector3(position.x, position.y, 0);
            }
            else
            {
                _attackPool.Add(entity);
            }
        }
    }
}