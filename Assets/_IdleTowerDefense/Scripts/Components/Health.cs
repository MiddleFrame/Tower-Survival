using System;

public struct Health
{
    // Health
    public float BaseMaxHealth;
    public float MaxHealth;
    public float CurrentHealth;
    public float MaxHealthMultiplier;
    public float MaxHealthAdditions;

    // HealthRegeneration
    public float BaseHealthRegeneration;
    public float HealthRegenerationMultiplier;
    public float HealthRegenerationAdditions;
    public float CurrentHealthRegeneration;

    public Action<float> OnDamaged;
    public Action OnKilled;

    public void InitStartValues(float baseHealth, float healthMultiplier, float baseRegen, Action<float> onDamaged,
        Action onKilled)
    {
        InitHealth(baseHealth, healthMultiplier);
        InitRegeneration(baseRegen);
        OnKilled += onKilled;
        OnDamaged += onDamaged;
        OnDamaged += GetDamage;
        
    }

    private void GetDamage(float damage)
    {
        CurrentHealth -= damage;
        if (CurrentHealth <= 0)
        {
            CurrentHealth = 0;
            OnKilled?.Invoke();
        }
    }
    
    private void InitRegeneration(float baseRegen)
    {
        BaseHealthRegeneration = baseRegen;
        HealthRegenerationMultiplier = 1;
        HealthRegenerationAdditions = 0;
        RecalculateHealthRegeneration();
    }

    private void InitHealth(float baseHealth, float healthMultiplier)
    {
        BaseMaxHealth = baseHealth;
        MaxHealthMultiplier = healthMultiplier;
        MaxHealthAdditions = 0;
        RecalculateMaxHealth();
    }

    public float RecalculateMaxHealth()
    {
        float healthPercent = MaxHealth > 0 ? CurrentHealth / MaxHealth : 1;
        MaxHealth = BaseMaxHealth * MaxHealthMultiplier + MaxHealthAdditions;
        CurrentHealth = healthPercent * MaxHealth;
        return MaxHealth;
    }

    public float RecalculateHealthRegeneration()
    {
        CurrentHealthRegeneration = BaseHealthRegeneration * HealthRegenerationMultiplier + HealthRegenerationAdditions;
        return CurrentHealthRegeneration;
    }
}