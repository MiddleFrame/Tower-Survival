using Leopotam.EcsLite;
using UnityEngine;

public class MovementSystem : IEcsPreInitSystem, IEcsRunSystem
{
    private EcsWorld world;
    private EcsFilter enemyFilter;

    public void PreInit(IEcsSystems systems)
    {
        world = systems.GetWorld();
        enemyFilter = world.Filter<Position>()
            .Inc<Movement>()
            .End();
    }

    public void Run(IEcsSystems systems)
    {
        EcsPool<Position> positionPool = world.GetPool<Position>();
        EcsPool<Movement> movementPool = world.GetPool<Movement>();


        foreach (int entity in enemyFilter)
        {
            ref Position position = ref positionPool.Get(entity);
            ref Movement movement = ref movementPool.Get(entity);

            if (((Vector2)position).magnitude > movement.StopRadius)
            {
                movement.Stopped = false;
                var newPosition = position + Time.deltaTime * movement.Velocity;
                position = newPosition;
                movement.transform.position = new Vector3(position.x, position.y, 0);
            }
            else
            {
                movement.Stopped = true;
            }
        }

    }
}