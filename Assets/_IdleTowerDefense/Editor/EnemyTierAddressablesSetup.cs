using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEditor.AddressableAssets;
using UnityEditor.AddressableAssets.Settings;
using UnityEngine;
using UnityEngine.AddressableAssets;

internal static class EnemyTierAddressablesSetup
{
    internal const string GameSettingsPath = "Assets/_IdleTowerDefense/ScriptableObjects/Game Settings.asset";

    [MenuItem("Tools/Idle Tower Defense/Addressables/Configure Enemy Tiers")]
    public static void Configure()
    {
        if (EditorApplication.isPlayingOrWillChangePlaymode)
            throw new InvalidOperationException("Leave Play Mode before configuring enemy tiers.");

        GameSettings game = AssetDatabase.LoadAssetAtPath<GameSettings>(GameSettingsPath);
        if (game == null)
            throw new InvalidOperationException($"Missing Game Settings: {GameSettingsPath}");

        EnemySpawnSettings[] tiers = game.EnemySpawnSettings != null && game.EnemySpawnSettings.Length > 0
            ? game.EnemySpawnSettings
            : Enumerable.Range(0, game.Tiers?.Length ?? 0).Select(i => EnemyTierEditorAssets.Load(game, i)).ToArray();
        if (tiers.Length == 0 || tiers.Any(tier => tier == null || tier._enemyList?.EnemySpawns == null ||
                                                    tier._enemyList.EnemySpawns.Count == 0 || tier.stages?.Length == 0))
            throw new InvalidOperationException("Enemy tier configuration is incomplete.");

        AddressableAssetSettings settings = AddressableAssetSettingsDefaultObject.GetSettings(true);
        settings.BuildRemoteCatalog = false;
        settings.BuildAddressablesWithPlayerBuild = AddressableAssetSettings.PlayerBuildOption.BuildWithPlayer;

        var clusters = new Dictionary<string, List<int>>();
        var enemyPaths = new Dictionary<string, string>();
        var tierEnemyGuids = new List<string[]>();
        for (int i = 0; i < tiers.Length; i++)
        {
            string[] guids = tiers[i]._enemyList.EnemySpawns.Select(enemy =>
            {
                string path = AssetDatabase.GetAssetPath(enemy);
                string guid = AssetDatabase.AssetPathToGUID(path);
                if (string.IsNullOrEmpty(guid))
                    throw new InvalidOperationException($"Tier {i + 1} has an unsaved enemy prefab.");
                enemyPaths[guid] = path;
                return guid;
            }).Distinct().OrderBy(guid => guid).ToArray();
            tierEnemyGuids.Add(guids);
            string signature = string.Join("|", guids);
            if (!clusters.TryGetValue(signature, out List<int> members))
            {
                members = new List<int>();
                clusters.Add(signature, members);
            }
            members.Add(i);
        }

        var groupsByTier = new AddressableAssetGroup[tiers.Length];
        foreach (List<int> members in clusters.Values)
        {
            string name = "Local_Tiers_" + string.Join("_", members.Select(i => (i + 1).ToString()));
            AddressableAssetGroup group = LocalAddressablesSetup.GetOrCreateLocalGroup(settings, name);
            foreach (int index in members)
                groupsByTier[index] = group;
        }

        var preview = new EnemyTierContent[tiers.Length];
        for (int i = 0; i < tiers.Length; i++)
        {
            EnemySpawnSettings tier = tiers[i];
            string guid = AssetDatabase.AssetPathToGUID(AssetDatabase.GetAssetPath(tier));
            AddressableAssetEntry entry = settings.CreateOrMoveEntry(guid, groupsByTier[i]);
            entry.address = $"tiers/{i + 1}/spawn-settings";
            preview[i] = new EnemyTierContent
            {
                SpawnSettings = new AssetReferenceT<EnemySpawnSettings>(guid),
                RecordToOpen = tier.RecordToOpen,
                OreMultiplier = tier.OreMultiplier,
                EnemyDamageMultiplier = tier.EnemyDamageMultiplier,
                EnemyHealthMultiplier = tier.EnemyHealthMultiplier,
                FirstStageSpawnRate = tier.stages[0].enemySpawnRate,
                EnemyNames = tier._enemyList.EnemySpawns.Select(enemy => enemy.name).ToArray()
            };
        }

        foreach (KeyValuePair<string, string> enemy in enemyPaths)
        {
            AddressableAssetGroup owner = null;
            for (int i = 0; i < tierEnemyGuids.Count; i++)
            {
                if (!tierEnemyGuids[i].Contains(enemy.Key))
                    continue;
                if (owner == null)
                    owner = groupsByTier[i];
                else if (owner != groupsByTier[i])
                {
                    owner = LocalAddressablesSetup.GetOrCreateLocalGroup(settings, "Local_Enemies_Shared");
                    break;
                }
            }
            AddressableAssetEntry entry = settings.CreateOrMoveEntry(enemy.Key, owner);
            entry.address = "enemies/" + enemy.Key;
        }

        game.Tiers = preview;
        game.EnemySpawnSettings = Array.Empty<EnemySpawnSettings>();
        EditorUtility.SetDirty(game);
        EditorUtility.SetDirty(settings);
        AssetDatabase.SaveAssets();
        Debug.Log($"Configured {tiers.Length} enemy tiers in local Addressables groups.");
    }
}
