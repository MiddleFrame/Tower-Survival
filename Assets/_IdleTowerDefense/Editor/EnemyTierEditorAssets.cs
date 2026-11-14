using System;
using UnityEditor;

internal static class EnemyTierEditorAssets
{
    internal static EnemySpawnSettings Load(GameSettings settings, int tierIndex)
    {
        if (settings == null || settings.Tiers == null || tierIndex < 0 || tierIndex >= settings.Tiers.Length)
            throw new ArgumentOutOfRangeException(nameof(tierIndex));

        string guid = settings.Tiers[tierIndex].SpawnSettings?.AssetGUID;
        string path = AssetDatabase.GUIDToAssetPath(guid);
        EnemySpawnSettings asset = AssetDatabase.LoadAssetAtPath<EnemySpawnSettings>(path);
        if (asset == null)
            throw new InvalidOperationException($"Missing tier {tierIndex + 1} asset: {path}");
        return asset;
    }
}
