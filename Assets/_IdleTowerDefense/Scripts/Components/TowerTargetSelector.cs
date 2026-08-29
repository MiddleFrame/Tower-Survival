using System.Collections.Generic;
using Leopotam.EcsLite;
using UnityEngine;

public struct TowerTargetSelector
{
    public float TargetingRange;
    public int MaxTargets;
    public float MultiShotChange;
    public List<EcsPackedEntity> CurrentTargets;
    public float RenderedTargetingRange;

    public LineRenderer radiusRenderer;
    public void InitStartValues(float baseRange)
    {
        TargetingRange = baseRange;
        MaxTargets = InitData.sharedData.Settings.TowerStartingAttackTargets;
        MultiShotChange = 0;
        CurrentTargets = new List<EcsPackedEntity>(MaxTargets > 0 ? MaxTargets : 1);
        RenderedTargetingRange = float.NaN;
    }
}
