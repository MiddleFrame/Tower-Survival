using NUnit.Framework;

[Category("Fast")]
public class CombatSpellRulesTests
{
    [Test]
    public void MetaDropChance_CombinesSurgeAndBountyAndClampsToOne()
    {
        Assert.That(CombatSpellRules.ResolveMetaDropChance(0.2f, 2f, 1.5f), Is.EqualTo(0.6f).Within(0.0001f));
        Assert.That(CombatSpellRules.ResolveMetaDropChance(0.8f, 2f, 2f), Is.EqualTo(1f));
    }

    [Test]
    public void RewardAmount_NeverFallsBelowBaseAndUsesWholeUnits()
    {
        Assert.That(CombatSpellRules.ResolveRewardAmount(3, 0.5f), Is.EqualTo(3));
        Assert.That(CombatSpellRules.ResolveRewardAmount(3, 1.5f), Is.EqualTo(4));
    }

    [Test]
    public void UseState_RejectsFurtherActivationAfterChargesAreSpent()
    {
        var state = new CombatSpellUseState(1);

        Assert.That(state.TryUse(), Is.True);
        Assert.That(state.TryUse(), Is.False);
        Assert.That(state.RemainingUses, Is.Zero);
    }
}
