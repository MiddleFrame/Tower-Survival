using System;
using System.Collections.Generic;
using System.Linq;
using Leopotam.EcsLite;
using UnityEngine;
using Random = UnityEngine.Random;

public class TowerTargetingSystem : IEcsInitSystem, IEcsRunSystem
{
    private EcsWorld world;
    private EcsFilter enemyFilter;
    private EcsFilter towerTargetSelectorFilter;
    private EcsPool<TowerTargetSelector> towerTargetSelectorPool;
    private EcsPool<TowerWeapon> towerWeaponPool;
    private EcsPool<Position> enemyPositionPool;
    
    private float _targetingRange = -1;
    public void Init(IEcsSystems systems)
    {
        world = systems.GetWorld();
        enemyFilter = world.Filter<Enemy>()
            .Inc<Position>()
            .End();
        towerTargetSelectorFilter = world.Filter<Tower>()
            .Inc<TowerTargetSelector>()
            .Inc<TowerWeapon>()
            .End();
        towerTargetSelectorPool = world.GetPool<TowerTargetSelector>();
        towerWeaponPool = world.GetPool<TowerWeapon>();
        enemyPositionPool = world.GetPool<Position>();
        TemporaryUpgradeManager.Instance.UpdateEnemySpawnRange(_targetingRange);
    }


    public void Run(IEcsSystems systems)
    {
        foreach (int towerEntity in towerTargetSelectorFilter)
        {
            ref TowerTargetSelector towerTargetSelector = ref towerTargetSelectorPool.Get(towerEntity);
        
            if (!_targetingRange.Equals(towerTargetSelector.TargetingRange))
            {
                _targetingRange = towerTargetSelector.TargetingRange;
                UpdateTargetingRange(_targetingRange, ref towerTargetSelector);
            }
            
            ref TowerWeapon towerWeapon = ref towerWeaponPool.Get(towerEntity);
            towerWeapon.AttackCooldownRemaining -= Time.deltaTime;

            
            if (towerWeapon.AttackCooldownRemaining >= 0)
                continue;
            
            
            List<int> sortedEntities = GetSortedTargets(ref towerTargetSelector);
            if (sortedEntities.Count == 0) {
                towerTargetSelector.CurrentTargets = null;
                continue;
            }
            List<int> previousTargets = towerTargetSelector.CurrentTargets?.Where(x=>
                    sortedEntities.Exists(y=>
                        y==x))
                .ToList();
               
            towerTargetSelector.CurrentTargets = new List<int>();
            int targetsCount = Random.Range(0f, 1f) > towerTargetSelector.MultiShotChange
                ? 1
                : towerTargetSelector.MaxTargets;
            int j = 0;
            if (previousTargets != null)
                for (; j < targetsCount && j < previousTargets.Count; j++)
                {
                    towerTargetSelector.CurrentTargets.Add(previousTargets[j]);
                }

            for (int i = j; i < targetsCount && i < sortedEntities.Count; i++)
            {
                towerTargetSelector.CurrentTargets.Add(sortedEntities[i]);
            }
        }
    }

    private List<int> GetSortedTargets(ref TowerTargetSelector towerTargetSelector)
    {
        List<int> sortedEntities = new();

        
        foreach (int enemy in enemyFilter)
        {
            ref Position enemyPosition = ref enemyPositionPool.Get(enemy);
            float enemyDistance = ((Vector2)enemyPosition).magnitude;
            if (enemyDistance <= towerTargetSelector.TargetingRange)
            {
                sortedEntities.Add(enemy);
            }
        }

        
        sortedEntities.Sort(
            delegate(int a, int b) {
                ref Position aPosition = ref enemyPositionPool.Get(a);
                ref Position bPosition = ref enemyPositionPool.Get(b);
                return ((Vector2)aPosition).magnitude < ((Vector2)bPosition).magnitude ? -1 : 1;
            }
        );

        return sortedEntities;
    }
    
    private void UpdateTargetingRange(float range, ref TowerTargetSelector targetSelector)
    {
        int numSegments = 80;
        float deltaTheta = (2 * Mathf.PI) / numSegments;
        float theta = 0f;

        targetSelector.radiusRenderer.positionCount = numSegments + 1;

        for (int i = 0; i < numSegments + 1; i++)
        {
            float x = range * Mathf.Cos(theta);
            float y = range * Mathf.Sin(theta);

            targetSelector.radiusRenderer.SetPosition(i, new Vector3(x, y, 0f));

            theta += deltaTheta;
        }
    }
}