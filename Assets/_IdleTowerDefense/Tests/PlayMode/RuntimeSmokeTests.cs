using System.Collections;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.SceneManagement;
using UnityEngine.TestTools;

public sealed class RuntimeSmokeTests
{
    [UnityTest]
    public IEnumerator Runtime_AdvancesAFrameAndHasBuildScenes()
    {
        int startingFrame = Time.frameCount;

        yield return null;

        Assert.That(Time.frameCount, Is.GreaterThan(startingFrame),
            "The runtime did not advance a frame in Play Mode.");
        Assert.That(SceneManager.sceneCountInBuildSettings, Is.GreaterThan(0),
            "No scenes are enabled in Build Settings.");
        Assert.That(Application.CanStreamedLevelBeLoaded(0), Is.True,
            "The first enabled build scene cannot be loaded by the player.");
    }

    [UnityTest]
    public IEnumerator Runtime_IncludesLocalizationCatalog()
    {
        yield return null;

        TextAsset catalog = Resources.Load<TextAsset>("Localization/strings");
        Assert.That(catalog, Is.Not.Null,
            "The localization catalog is missing from runtime Resources.");
        Assert.That(catalog.text, Does.StartWith("key\ten\tru"),
            "The localization catalog lost its English/Russian header.");
    }

    [UnityTest]
    public IEnumerator Runtime_LoadsLocalSpellDetailsAndReleasesHandle()
    {
        AsyncOperationHandle<GameObject> handle = Addressables.LoadAssetAsync<GameObject>("ui/spells/detail-card");
        try
        {
            yield return handle;
            Assert.That(handle.Status, Is.EqualTo(AsyncOperationStatus.Succeeded));
            Assert.That(handle.Result.GetComponent("CombatSpellDetailView"), Is.Not.Null);
        }
        finally
        {
            if (handle.IsValid())
                Addressables.Release(handle);
        }
    }

    [UnityTest]
    public IEnumerator Runtime_LoadsSelectedEnemyTierFromLocalCatalog()
    {
        AsyncOperationHandle<ScriptableObject> handle =
            Addressables.LoadAssetAsync<ScriptableObject>("tiers/2/spawn-settings");
        try
        {
            yield return handle;
            Assert.That(handle.Status, Is.EqualTo(AsyncOperationStatus.Succeeded));
            Assert.That(handle.Result.name, Is.EqualTo("Tier 2"));
        }
        finally
        {
            if (handle.IsValid())
                Addressables.Release(handle);
        }
    }
}
