using System;
using UnityEditor;
using UnityEditor.AddressableAssets;
using UnityEditor.AddressableAssets.Build;
using UnityEditor.AddressableAssets.Build.DataBuilders;
using UnityEditor.AddressableAssets.Settings;
using UnityEditor.AddressableAssets.Settings.GroupSchemas;
using UnityEngine;

internal static class LocalAddressablesSetup
{
    internal const string GroupName = "Local_UI_SpellDetails";
    internal const string DetailPath = "Assets/_IdleTowerDefense/Prefabs/UI/Spells/SpellDetailCard.prefab";
    internal const string HudPath = "Assets/_IdleTowerDefense/Prefabs/UI/Spells/CombatSpellHud.prefab";
    internal const string DetailAddress = "ui/spells/detail-card";

    [MenuItem("Tools/Idle Tower Defense/Addressables/Configure Local Content")]
    public static void Configure()
    {
        if (EditorApplication.isPlayingOrWillChangePlaymode)
            throw new InvalidOperationException("Leave Play Mode before configuring local content.");

        string detailGuid = AssetDatabase.AssetPathToGUID(DetailPath);
        if (string.IsNullOrEmpty(detailGuid))
            throw new InvalidOperationException($"Missing asset: {DetailPath}");

        AddressableAssetSettings settings = AddressableAssetSettingsDefaultObject.GetSettings(true);
        settings.BuildRemoteCatalog = false;
        settings.BuildAddressablesWithPlayerBuild = AddressableAssetSettings.PlayerBuildOption.BuildWithPlayer;

        AddressableAssetGroup group = GetOrCreateLocalGroup(settings, GroupName);
        AddressableAssetEntry entry = settings.CreateOrMoveEntry(detailGuid, group);
        entry.address = DetailAddress;
        settings.AddLabel("ui.spells.details");
        entry.SetLabel("ui.spells.details", true);
        EditorUtility.SetDirty(group);
        EditorUtility.SetDirty(settings);

        GameObject hudRoot = PrefabUtility.LoadPrefabContents(HudPath);
        try
        {
            CombatSpellHudView hud = hudRoot.GetComponentInChildren<CombatSpellHudView>(true);
            if (hud == null)
                throw new InvalidOperationException($"Missing CombatSpellHudView in {HudPath}");

            var serializedHud = new SerializedObject(hud);
            SerializedProperty direct = serializedHud.FindProperty("_detailPrefab");
            SerializedProperty reference = serializedHud.FindProperty("_detailAsset");
            if (direct == null || reference == null)
                throw new InvalidOperationException("Spell HUD serialized fields changed.");
            if (direct.objectReferenceValue != null &&
                AssetDatabase.GetAssetPath(direct.objectReferenceValue) != DetailPath)
                throw new InvalidOperationException("Spell HUD detail prefab was changed by another edit.");

            SerializedProperty guid = reference.FindPropertyRelative("m_AssetGUID");
            if (guid == null)
                throw new InvalidOperationException("Addressables reference serialization changed.");
            guid.stringValue = detailGuid;
            direct.objectReferenceValue = null;
            serializedHud.ApplyModifiedPropertiesWithoutUndo();
            PrefabUtility.SaveAsPrefabAsset(hudRoot, HudPath);
        }
        finally
        {
            PrefabUtility.UnloadPrefabContents(hudRoot);
        }

        AssetDatabase.SaveAssets();
        Debug.Log("Configured local spell detail Addressables. Build Addressables content with the player.");
    }

    internal static AddressableAssetGroup GetOrCreateLocalGroup(AddressableAssetSettings settings, string name)
    {
        AddressableAssetGroup group = settings.FindGroup(name) ?? settings.CreateGroup(
            name, false, false, true, null,
            typeof(ContentUpdateGroupSchema), typeof(BundledAssetGroupSchema));
        BundledAssetGroupSchema schema = group.GetSchema<BundledAssetGroupSchema>();
        schema.BuildPath.SetVariableByName(settings, AddressableAssetSettings.kLocalBuildPath);
        schema.LoadPath.SetVariableByName(settings, AddressableAssetSettings.kLocalLoadPath);
        schema.BundleMode = BundledAssetGroupSchema.BundlePackingMode.PackTogether;
        EditorUtility.SetDirty(schema);
        return group;
    }

    [MenuItem("Tools/Idle Tower Defense/Addressables/Build Local Content")]
    public static void BuildLocalContent()
    {
        AddressableAssetSettings settings = AddressableAssetSettingsDefaultObject.Settings;
        if (settings == null || settings.BuildRemoteCatalog)
            throw new InvalidOperationException("Local Addressables settings are missing or a remote catalog is enabled.");
        foreach (AddressableAssetGroup group in settings.groups)
        {
            if (group == null)
                continue;
            BundledAssetGroupSchema schema = group.GetSchema<BundledAssetGroupSchema>();
            if (schema == null)
                continue;
            if (schema.BuildPath.GetName(settings) != AddressableAssetSettings.kLocalBuildPath ||
                schema.LoadPath.GetName(settings) != AddressableAssetSettings.kLocalLoadPath)
                throw new InvalidOperationException($"Addressables group is not local: {group.Name}");
        }

        AddressableAssetSettings.BuildPlayerContent(out AddressablesPlayerBuildResult result);
        if (result == null || !string.IsNullOrEmpty(result.Error))
            throw new InvalidOperationException($"Local Addressables build failed: {result?.Error}");
        Debug.Log($"Local Addressables content built: {result.OutputPath}");
    }

    [MenuItem("Tools/Idle Tower Defense/Addressables/Test With Built Content")]
    public static void UseBuiltContentInPlayMode()
    {
        SetPlayModeBuilder(typeof(BuildScriptPackedPlayMode));
    }

    [MenuItem("Tools/Idle Tower Defense/Addressables/Test With Asset Database")]
    public static void UseAssetDatabaseInPlayMode()
    {
        SetPlayModeBuilder(typeof(BuildScriptFastMode));
    }

    private static void SetPlayModeBuilder(Type builderType)
    {
        AddressableAssetSettings settings = AddressableAssetSettingsDefaultObject.Settings;
        if (settings == null)
            throw new InvalidOperationException("Addressables settings are missing.");
        int index = settings.DataBuilders.FindIndex(builder => builder != null && builder.GetType() == builderType);
        if (index < 0)
            throw new InvalidOperationException($"Addressables play-mode builder is missing: {builderType.Name}");
        settings.ActivePlayModeDataBuilderIndex = index;
        EditorUtility.SetDirty(settings);
        AssetDatabase.SaveAssets();
        Debug.Log($"Addressables Play Mode uses {builderType.Name}.");
    }
}
