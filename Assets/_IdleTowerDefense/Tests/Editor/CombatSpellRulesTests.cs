using System.Collections;
using System.Reflection;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

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

    [UnityTest]
    public IEnumerator MetaCurrencyDrop_InvokesRewardOnlyAfterFlightCompletes()
    {
        var targetObject = new GameObject("Crystal target", typeof(RectTransform));
        CurrencyDisplayElement target = targetObject.AddComponent<CurrencyDisplayElement>();
        targetObject.SetActive(false);
        var cameraObject = new GameObject("World camera", typeof(Camera));
        Camera worldCamera = cameraObject.GetComponent<Camera>();
        worldCamera.orthographic = true;
        worldCamera.transform.position = new Vector3(0f, 0f, -10f);
        var dropObject = new GameObject("Crystal drop", typeof(SpriteRenderer),
            typeof(CircleCollider2D), typeof(MetaCurrencyDropView));
        MetaCurrencyDropView drop = dropObject.GetComponent<MetaCurrencyDropView>();
        FieldInfo flightDuration = typeof(MetaCurrencyDropView)
            .GetField("_flightDuration", BindingFlags.Instance | BindingFlags.NonPublic);
        flightDuration?.SetValue(drop, 0.001f);
        int collected = 0;
        try
        {
            drop.Initialize(1, 15f, target, worldCamera, amount => collected += amount);
            drop.Collect();

            Assert.That(collected, Is.Zero);
            Assert.That(drop.IsFlying, Is.True);
            flightDuration?.SetValue(drop, 0f);
            IEnumerator flight = (IEnumerator)typeof(MetaCurrencyDropView)
                .GetMethod("FlyToCollectionTarget", BindingFlags.Instance | BindingFlags.NonPublic)
                ?.Invoke(drop, null);
            Assert.That(flight, Is.Not.Null);
            Assert.That(flight.MoveNext(), Is.False);
            Assert.That(collected, Is.EqualTo(1));
            yield return null;
        }
        finally
        {
            Object.DestroyImmediate(targetObject);
            Object.DestroyImmediate(cameraObject);
            if (dropObject != null)
                Object.DestroyImmediate(dropObject);
        }
    }
}
