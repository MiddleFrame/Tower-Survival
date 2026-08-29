using System;

public static class CombatSpellRules
{
    public static float ResolveMetaDropChance(float baseChance, float surgeMultiplier, float bountyMultiplier)
    {
        float chance = Math.Max(0f, baseChance)
                       * Math.Max(1f, surgeMultiplier)
                       * Math.Max(1f, bountyMultiplier);
        return Math.Min(1f, chance);
    }

    public static int ResolveRewardAmount(int baseAmount, float multiplier)
    {
        if (baseAmount <= 0)
            return 0;

        double result = Math.Floor(baseAmount * Math.Max(1f, multiplier));
        return result >= int.MaxValue ? int.MaxValue : (int)result;
    }
}

public sealed class CombatSpellUseState
{
    public CombatSpellUseState(int uses)
    {
        RemainingUses = Math.Max(0, uses);
    }

    public int RemainingUses { get; private set; }

    public bool TryUse()
    {
        if (RemainingUses <= 0)
            return false;

        RemainingUses--;
        return true;
    }
}
