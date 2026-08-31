using System.Collections.Generic;
using UnityEngine;

public static class EarlyProgressionRules
{
    public const int TutorialCompletionCopperOre = 20;
    public const int TutorialCompletionGoldOre = 0;
    public const float TierOneCopperOreDropChance = 0.2f;

    public static bool ApplyTutorialCompletionCurrencies(IDictionary<CurrencyTypes, Currency> currencies)
    {
        if (currencies == null
            || !currencies.TryGetValue(CurrencyTypes.Ore, out Currency copperOre)
            || !currencies.TryGetValue(CurrencyTypes.Gold, out Currency goldOre))
            return false;

        copperOre.value = TutorialCompletionCopperOre;
        goldOre.value = TutorialCompletionGoldOre;
        return true;
    }

    public static bool ShouldDropCopperOre(int tierIndex, float randomRoll)
    {
        return tierIndex == 0
               && randomRoll >= 0f
               && randomRoll < TierOneCopperOreDropChance;
    }

    public static int CalculateCopperOreAmount(float baseAmount, float rewardMultiplier)
    {
        return Mathf.Max(0, Mathf.RoundToInt(baseAmount * Mathf.Max(0f, rewardMultiplier)));
    }
}
