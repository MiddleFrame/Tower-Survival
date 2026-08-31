using System.Collections.Generic;
using NUnit.Framework;

[Category("Fast")]
[Category("BuildRequired")]
public sealed class EarlyProgressionRulesTests
{
    [Test]
    public void TutorialCompletion_ReplacesCopperAndGoldWithFixedStartingBalances()
    {
        var currencies = new Dictionary<CurrencyTypes, Currency>
        {
            [CurrencyTypes.Ore] = new Currency { type = CurrencyTypes.Ore, value = 99 },
            [CurrencyTypes.Gold] = new Currency { type = CurrencyTypes.Gold, value = 77 },
            [CurrencyTypes.Crystals] = new Currency { type = CurrencyTypes.Crystals, value = 4 }
        };

        bool applied = EarlyProgressionRules.ApplyTutorialCompletionCurrencies(currencies);

        Assert.That(applied, Is.True);
        Assert.That(currencies[CurrencyTypes.Ore].value,
            Is.EqualTo(EarlyProgressionRules.TutorialCompletionCopperOre));
        Assert.That(currencies[CurrencyTypes.Gold].value,
            Is.EqualTo(EarlyProgressionRules.TutorialCompletionGoldOre));
        Assert.That(currencies[CurrencyTypes.Crystals].value, Is.EqualTo(4));
    }

    [TestCase(0, 0f, true)]
    [TestCase(0, 0.1999f, true)]
    [TestCase(0, 0.2f, false)]
    [TestCase(1, 0f, false)]
    public void CopperOreDrop_IsLimitedToTierOneAndTwentyPercent(int tier, float roll, bool expected)
    {
        Assert.That(EarlyProgressionRules.ShouldDropCopperOre(tier, roll), Is.EqualTo(expected));
    }

    [Test]
    public void CopperOreAmount_UsesAuthoredTierMultiplier()
    {
        Assert.That(EarlyProgressionRules.CalculateCopperOreAmount(6f, 1f), Is.EqualTo(6));
    }
}
