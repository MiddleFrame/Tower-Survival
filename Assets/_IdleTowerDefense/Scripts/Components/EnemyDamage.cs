using System;
using UnityEngine;

public struct EnemyDamage 
{
    public bool isRangeDamage;
    public float Damage;
    public float DamageCooldown;
    public float DamageCooldownRemaining;
    public Action<float, Transform> OnDamageDealt;
    public Action OnStartAttack;

    public void InitStartValues(bool isRange, float baseDamage, float damageMultiplier, float cooldown, Action onAttack, Action<float, Transform> onDamageDealt)
    {
        isRangeDamage = isRange; 
        Damage = baseDamage*damageMultiplier;
        DamageCooldown = cooldown;
        OnStartAttack += onAttack; 
        OnDamageDealt += onDamageDealt; 
    }
}