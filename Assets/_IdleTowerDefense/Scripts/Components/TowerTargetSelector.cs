using System.Collections.Generic;
using UnityEngine;

public struct TowerTargetSelector
{
    public float TargetingRange;
    public int MaxTargets;
    public float MultiShotChange;
    public List<int> CurrentTargets;

    public LineRenderer radiusRenderer;
    public void InitStartValues(float baseRange)
    {
        TargetingRange = baseRange;
        MaxTargets = 1;
        MultiShotChange = 0;

    }
}
