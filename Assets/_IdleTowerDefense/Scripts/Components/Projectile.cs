using System;
using UnityEngine;

public struct Projectile
{
    public float Damage;
    public bool IsConsumed;
    public ProjectileView view;
    public Action<float, Transform> OnDamageDealt;
}
