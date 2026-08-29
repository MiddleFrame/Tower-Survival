using System.Collections;
using NUnit.Framework;
using UnityEngine;
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
}
