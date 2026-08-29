using System;
using System.Collections.Generic;
using Leopotam.EcsLite;
using UnityEngine;

public class TowerTargetingSystem : IEcsInitSystem, IEcsRunSystem
{
    private struct TargetCandidate
    {
        public int Entity;
        public EcsPackedEntity PackedEntity;
        public float DistanceSquared;
    }

    private static readonly Comparison<TargetCandidate> CompareByDistance = (left, right) =>
    {
        int distanceComparison = left.DistanceSquared.CompareTo(right.DistanceSquared);
        return distanceComparison != 0 ? distanceComparison : left.Entity.CompareTo(right.Entity);
    };

    private readonly List<TargetCandidate> _candidates = new List<TargetCandidate>(64);
    private readonly List<EcsPackedEntity> _previousTargets = new List<EcsPackedEntity>(8);

    private EcsWorld _world;
    private EcsFilter _enemyFilter;
    private EcsFilter _towerTargetSelectorFilter;
    private EcsPool<TowerTargetSelector> _towerTargetSelectorPool;
    private EcsPool<TowerWeapon> _towerWeaponPool;
    private EcsPool<Position> _enemyPositionPool;

    public void Init(IEcsSystems systems)
    {
        _world = systems.GetWorld();
        _enemyFilter = _world.Filter<Enemy>()
            .Inc<Position>()
            .Exc<Destroy>()
            .End();
        _towerTargetSelectorFilter = _world.Filter<Tower>()
            .Inc<TowerTargetSelector>()
            .Inc<TowerWeapon>()
            .End();
        _towerTargetSelectorPool = _world.GetPool<TowerTargetSelector>();
        _towerWeaponPool = _world.GetPool<TowerWeapon>();
        _enemyPositionPool = _world.GetPool<Position>();
    }


    public void Run(IEcsSystems systems)
    {
        foreach (int towerEntity in _towerTargetSelectorFilter)
        {
            ref TowerTargetSelector towerTargetSelector = ref _towerTargetSelectorPool.Get(towerEntity);

            if (!Mathf.Approximately(towerTargetSelector.RenderedTargetingRange,
                    towerTargetSelector.TargetingRange))
            {
                UpdateTargetingRange(towerTargetSelector.TargetingRange, ref towerTargetSelector);
                towerTargetSelector.RenderedTargetingRange = towerTargetSelector.TargetingRange;
            }

            ref TowerWeapon towerWeapon = ref _towerWeaponPool.Get(towerEntity);
            towerWeapon.AttackCooldownRemaining -= Time.deltaTime;

            if (towerWeapon.AttackCooldownRemaining >= 0)
                continue;

            SelectTargets(ref towerTargetSelector);
        }
    }

    private void SelectTargets(ref TowerTargetSelector targetSelector)
    {
        BuildSortedCandidates(targetSelector.TargetingRange);

        if (targetSelector.CurrentTargets == null)
            targetSelector.CurrentTargets = new List<EcsPackedEntity>(targetSelector.MaxTargets > 0
                ? targetSelector.MaxTargets
                : 1);

        _previousTargets.Clear();
        _previousTargets.AddRange(targetSelector.CurrentTargets);
        targetSelector.CurrentTargets.Clear();

        if (_candidates.Count == 0)
            return;

        int targetsCount = UnityEngine.Random.value > targetSelector.MultiShotChange
                ? 1
                : targetSelector.MaxTargets;
        if (targetsCount <= 0)
            return;

        for (int i = 0; i < _previousTargets.Count && targetSelector.CurrentTargets.Count < targetsCount; i++)
        {
            if (!_previousTargets[i].Unpack(_world, out int previousEntity))
                continue;

            int candidateIndex = FindCandidate(previousEntity);
            if (candidateIndex >= 0)
            {
                targetSelector.CurrentTargets.Add(_candidates[candidateIndex].PackedEntity);
                _candidates.RemoveAt(candidateIndex);
            }
        }

        for (int i = 0; i < _candidates.Count && targetSelector.CurrentTargets.Count < targetsCount; i++)
            targetSelector.CurrentTargets.Add(_candidates[i].PackedEntity);
    }

    private void BuildSortedCandidates(float targetingRange)
    {
        _candidates.Clear();
        float targetingRangeSquared = targetingRange * targetingRange;

        foreach (int enemy in _enemyFilter)
        {
            ref Position enemyPosition = ref _enemyPositionPool.Get(enemy);
            float distanceSquared = enemyPosition.x * enemyPosition.x + enemyPosition.y * enemyPosition.y;
            if (distanceSquared <= targetingRangeSquared)
            {
                _candidates.Add(new TargetCandidate
                {
                    Entity = enemy,
                    PackedEntity = _world.PackEntity(enemy),
                    DistanceSquared = distanceSquared
                });
            }
        }

        _candidates.Sort(CompareByDistance);
    }

    private int FindCandidate(int entity)
    {
        for (int i = 0; i < _candidates.Count; i++)
        {
            if (_candidates[i].Entity == entity)
                return i;
        }

        return -1;
    }

    private void UpdateTargetingRange(float range, ref TowerTargetSelector targetSelector)
    {
        if (targetSelector.radiusRenderer == null)
            return;

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
