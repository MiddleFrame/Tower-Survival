using UnityEngine;

public struct TowerWeapon
{
    // Attack Damage
    public float BaseAttackDamage;
    public float AttackDamage;
    public float AttackDamageMultiplier;
    public float AttackDamageAdditions;
    
    // AttackCooldown
    public float BaseAttackCooldown;
    public float AttackCooldown;
    public float AttackCooldownRemaining;

    public void InitStartValues(float baseCooldown, float baseDamage)
    {
        InitCooldown(baseCooldown);

        InitDamage(baseDamage);
    }

    private void InitCooldown(float baseCooldown)
    {
        BaseAttackCooldown = baseCooldown;
        AttackCooldown=RecalculateAttackCooldown(0,0);
    }

    private void InitDamage(float baseDamage)
    {
        Debug.Log("Init damage");
        BaseAttackDamage = baseDamage;
        AttackDamageMultiplier = 1.15f;
        AttackDamageAdditions = 0.6f;
    }

    public float RecalculateAttackDamage(int grades)
    {
        AttackDamage = BaseAttackDamage *Mathf.Pow(AttackDamageMultiplier, grades)  + AttackDamageAdditions*grades;
        return AttackDamage;
    }

    public float RecalculateAttackCooldown(int grades, float multiplier)
    {
        return BaseAttackCooldown - grades*multiplier;
       
    }
}