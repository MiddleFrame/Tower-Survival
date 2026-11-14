using NUnit.Framework;
using System.Linq;
using UnityEditor;
using UnityEditor.AddressableAssets;
using UnityEditor.AddressableAssets.Settings;
using UnityEditor.AddressableAssets.Settings.GroupSchemas;
using UnityEngine;
using UnityEngine.AddressableAssets;

[Category("BuildRequired")]
public sealed class LocalAddressablesContractsTests
{
    [Test]
    public void SpellDetails_AreLocalAndHaveNoDirectHudReference()
    {
        AddressableAssetSettings settings = AddressableAssetSettingsDefaultObject.Settings;
        Assert.That(settings, Is.Not.Null);
        Assert.That(settings.BuildRemoteCatalog, Is.False);
        Assert.That(settings.BuildAddressablesWithPlayerBuild,
            Is.EqualTo(AddressableAssetSettings.PlayerBuildOption.BuildWithPlayer));
        foreach (AddressableAssetGroup localGroup in settings.groups)
        {
            if (localGroup == null)
                continue;
            BundledAssetGroupSchema localSchema = localGroup.GetSchema<BundledAssetGroupSchema>();
            if (localSchema == null)
                continue;
            Assert.That(localSchema.BuildPath.GetName(settings), Is.EqualTo(AddressableAssetSettings.kLocalBuildPath),
                $"{localGroup.Name} must be built into the player.");
            Assert.That(localSchema.LoadPath.GetName(settings), Is.EqualTo(AddressableAssetSettings.kLocalLoadPath),
                $"{localGroup.Name} must load from the player.");
        }

        AddressableAssetGroup group = settings.FindGroup(LocalAddressablesSetup.GroupName);
        Assert.That(group, Is.Not.Null);
        BundledAssetGroupSchema schema = group.GetSchema<BundledAssetGroupSchema>();
        Assert.That(schema, Is.Not.Null);
        Assert.That(schema.BuildPath.GetName(settings), Is.EqualTo(AddressableAssetSettings.kLocalBuildPath));
        Assert.That(schema.LoadPath.GetName(settings), Is.EqualTo(AddressableAssetSettings.kLocalLoadPath));

        string guid = AssetDatabase.AssetPathToGUID(LocalAddressablesSetup.DetailPath);
        Assert.That(group.GetAssetEntry(guid), Is.Not.Null);
        Assert.That(group.GetAssetEntry(guid).address, Is.EqualTo(LocalAddressablesSetup.DetailAddress));

        GameObject hudRoot = AssetDatabase.LoadAssetAtPath<GameObject>(LocalAddressablesSetup.HudPath);
        CombatSpellHudView hud = hudRoot.GetComponentInChildren<CombatSpellHudView>(true);
        Assert.That(hud, Is.Not.Null);
        var serializedHud = new SerializedObject(hud);
        Assert.That(serializedHud.FindProperty("_detailPrefab").objectReferenceValue, Is.Null);
        Assert.That(serializedHud.FindProperty("_detailAsset").FindPropertyRelative("m_AssetGUID").stringValue,
            Is.EqualTo(guid));
    }

    [Test]
    public void EnemyTiers_AreDeferredAndMenuPreviewMatchesSource()
    {
        GameSettings game = AssetDatabase.LoadAssetAtPath<GameSettings>(EnemyTierAddressablesSetup.GameSettingsPath);
        Assert.That(game, Is.Not.Null);
        Assert.That(game.EnemySpawnSettings, Is.Empty, "Direct tier references would pull enemies into the menu.");
        Assert.That(game.Tiers, Is.Not.Empty);

        string[] menuDependencies = AssetDatabase.GetDependencies("Assets/_IdleTowerDefense/Scenes/Menu.unity", true);
        for (int i = 0; i < game.Tiers.Length; i++)
        {
            EnemySpawnSettings source = EnemyTierEditorAssets.Load(game, i);
            EnemyTierContent preview = game.Tiers[i];
            Assert.That(menuDependencies, Does.Not.Contain(AssetDatabase.GetAssetPath(source)));
            Assert.That(preview.RecordToOpen, Is.EqualTo(source.RecordToOpen));
            Assert.That(preview.OreMultiplier, Is.EqualTo(source.OreMultiplier));
            Assert.That(preview.EnemyDamageMultiplier, Is.EqualTo(source.EnemyDamageMultiplier));
            Assert.That(preview.EnemyHealthMultiplier, Is.EqualTo(source.EnemyHealthMultiplier));
            Assert.That(preview.FirstStageSpawnRate, Is.EqualTo(source.stages[0].enemySpawnRate));
            Assert.That(preview.EnemyNames,
                Is.EqualTo(source._enemyList.EnemySpawns.Select(enemy => enemy.name).ToArray()));
            foreach (EnemyView enemy in source._enemyList.EnemySpawns)
                Assert.That(menuDependencies, Does.Not.Contain(AssetDatabase.GetAssetPath(enemy)));
        }
    }
}
