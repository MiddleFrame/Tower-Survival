using TMPro;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.TextCore.LowLevel;

[InitializeOnLoad]
internal static class LocalizationFontImporter
{
    private const string SourcePath = "Assets/Resources/Localization/Neucha.ttf";
    private const string AssetPath = "Assets/Resources/Localization/Neucha SDF.asset";

    static LocalizationFontImporter()
    {
        EditorApplication.delayCall += EnsureFallbackFont;
    }

    private static void EnsureFallbackFont()
    {
        if (EditorApplication.isPlayingOrWillChangePlaymode || AssetDatabase.LoadAssetAtPath<TMP_FontAsset>(AssetPath) != null)
            return;

        Font sourceFont = AssetDatabase.LoadAssetAtPath<Font>(SourcePath);
        if (sourceFont == null)
        {
            Debug.LogError($"Localization font was not imported from {SourcePath}.");
            return;
        }

        TMP_FontAsset fontAsset = TMP_FontAsset.CreateFontAsset(
            sourceFont, 90, 9, GlyphRenderMode.SDFAA, 512, 512,
            AtlasPopulationMode.Dynamic, true);
        if (fontAsset == null)
        {
            Debug.LogError("Could not create the Cyrillic TMP fallback font.");
            return;
        }

        fontAsset.name = "Neucha SDF";
        fontAsset.atlasTexture.name = "Neucha Atlas";
        fontAsset.material.name = "Neucha Atlas Material";

        AssetDatabase.CreateAsset(fontAsset, AssetPath);
        AssetDatabase.AddObjectToAsset(fontAsset.atlasTexture, fontAsset);
        AssetDatabase.AddObjectToAsset(fontAsset.material, fontAsset);
        EditorUtility.SetDirty(fontAsset);
        AssetDatabase.SaveAssets();
        AssetDatabase.ImportAsset(AssetPath);
        Debug.Log("Created the lightweight Cyrillic TMP fallback font.");
    }
}

[InitializeOnLoad]
internal static class LocalizationPreviewMenu
{
    private const string MenuRoot = "Tools/Idle Tower Defense/Localization/";
    private const string EnglishMenu = MenuRoot + "Preview English";
    private const string RussianMenu = MenuRoot + "Preview Russian";
    private const string PortugueseMenu = MenuRoot + "Preview Portuguese (Brazil)";
    private const string SpanishMenu = MenuRoot + "Preview Spanish (Latin America)";
    private const string GermanMenu = MenuRoot + "Preview German";
    private const string FrenchMenu = MenuRoot + "Preview French";
    private const string TurkishMenu = MenuRoot + "Preview Turkish";
    private const string IndonesianMenu = MenuRoot + "Preview Indonesian";
    private const string PolishMenu = MenuRoot + "Preview Polish";
    private const string ItalianMenu = MenuRoot + "Preview Italian";
    private const string RefreshMenu = MenuRoot + "Refresh Preview";
    private const string RuntimeMenu = MenuRoot + "Use Player Language";
    private const string PreviewLanguageKey = "IdleTowerDefense.Localization.EditorPreviewLanguage";

    private static bool _previewQueued;

    static LocalizationPreviewMenu()
    {
        if (Application.isBatchMode)
            return;

        EditorApplication.delayCall += RestoreEditorPreview;
        EditorApplication.playModeStateChanged += OnPlayModeStateChanged;
        EditorSceneManager.sceneOpened += OnSceneOpened;
    }

    [MenuItem(EnglishMenu, priority = 100)]
    private static void PreviewEnglish()
    {
        SetEditorPreview(GameLanguage.English);
    }

    [MenuItem(EnglishMenu, true)]
    private static bool ValidatePreviewEnglish()
    {
        Menu.SetChecked(EnglishMenu, IsSelected(GameLanguage.English));
        return CanPreview;
    }

    [MenuItem(RussianMenu, priority = 101)]
    private static void PreviewRussian()
    {
        SetEditorPreview(GameLanguage.Russian);
    }

    [MenuItem(RussianMenu, true)]
    private static bool ValidatePreviewRussian()
    {
        Menu.SetChecked(RussianMenu, IsSelected(GameLanguage.Russian));
        return CanPreview;
    }

    [MenuItem(PortugueseMenu, priority = 102)]
    private static void PreviewPortuguese() => SetEditorPreview(GameLanguage.PortugueseBrazil);

    [MenuItem(PortugueseMenu, true)]
    private static bool ValidatePreviewPortuguese() => ValidatePreview(PortugueseMenu, GameLanguage.PortugueseBrazil);

    [MenuItem(SpanishMenu, priority = 103)]
    private static void PreviewSpanish() => SetEditorPreview(GameLanguage.SpanishLatinAmerica);

    [MenuItem(SpanishMenu, true)]
    private static bool ValidatePreviewSpanish() => ValidatePreview(SpanishMenu, GameLanguage.SpanishLatinAmerica);

    [MenuItem(GermanMenu, priority = 104)]
    private static void PreviewGerman() => SetEditorPreview(GameLanguage.German);

    [MenuItem(GermanMenu, true)]
    private static bool ValidatePreviewGerman() => ValidatePreview(GermanMenu, GameLanguage.German);

    [MenuItem(FrenchMenu, priority = 105)]
    private static void PreviewFrench() => SetEditorPreview(GameLanguage.French);

    [MenuItem(FrenchMenu, true)]
    private static bool ValidatePreviewFrench() => ValidatePreview(FrenchMenu, GameLanguage.French);

    [MenuItem(TurkishMenu, priority = 106)]
    private static void PreviewTurkish() => SetEditorPreview(GameLanguage.Turkish);

    [MenuItem(TurkishMenu, true)]
    private static bool ValidatePreviewTurkish() => ValidatePreview(TurkishMenu, GameLanguage.Turkish);

    [MenuItem(IndonesianMenu, priority = 107)]
    private static void PreviewIndonesian() => SetEditorPreview(GameLanguage.Indonesian);

    [MenuItem(IndonesianMenu, true)]
    private static bool ValidatePreviewIndonesian() => ValidatePreview(IndonesianMenu, GameLanguage.Indonesian);

    [MenuItem(PolishMenu, priority = 108)]
    private static void PreviewPolish() => SetEditorPreview(GameLanguage.Polish);

    [MenuItem(PolishMenu, true)]
    private static bool ValidatePreviewPolish() => ValidatePreview(PolishMenu, GameLanguage.Polish);

    [MenuItem(ItalianMenu, priority = 109)]
    private static void PreviewItalian() => SetEditorPreview(GameLanguage.Italian);

    [MenuItem(ItalianMenu, true)]
    private static bool ValidatePreviewItalian() => ValidatePreview(ItalianMenu, GameLanguage.Italian);

    [MenuItem(RefreshMenu, priority = 120)]
    private static void RefreshPreview()
    {
        if (!CanPreview)
            return;

        LightweightLocalization.ReloadEditorPreview();
        ApplySelectedPreview();
        RepaintEditor();
    }

    [MenuItem(RefreshMenu, true)]
    private static bool ValidateRefreshPreview()
    {
        return CanPreview;
    }

    [MenuItem(RuntimeMenu, priority = 140)]
    private static void UsePlayerLanguage()
    {
        if (!CanPreview)
            return;

        EditorPrefs.DeleteKey(PreviewLanguageKey);
        LightweightLocalization.RestoreSavedLanguage();
        LocalizeCurrentPrefabStage();
        RepaintEditor();
    }

    [MenuItem(RuntimeMenu, true)]
    private static bool ValidateUsePlayerLanguage()
    {
        Menu.SetChecked(RuntimeMenu, !EditorPrefs.HasKey(PreviewLanguageKey));
        return CanPreview;
    }

    private static bool CanPreview => !EditorApplication.isPlayingOrWillChangePlaymode;

    private static void SetEditorPreview(GameLanguage language)
    {
        if (!CanPreview)
            return;

        EditorPrefs.SetInt(PreviewLanguageKey, (int)language);
        ApplyPreviewLanguage(language);
        RepaintEditor();
    }

    private static bool IsSelected(GameLanguage language)
    {
        return EditorPrefs.HasKey(PreviewLanguageKey)
            && EditorPrefs.GetInt(PreviewLanguageKey) == (int)language;
    }

    private static bool ValidatePreview(string menu, GameLanguage language)
    {
        Menu.SetChecked(menu, IsSelected(language));
        return CanPreview;
    }

    private static void OnSceneOpened(UnityEngine.SceneManagement.Scene scene, OpenSceneMode mode)
    {
        QueueEditorPreview();
    }

    private static void OnPlayModeStateChanged(PlayModeStateChange state)
    {
        if (state == PlayModeStateChange.ExitingEditMode)
            LightweightLocalization.RestoreSavedLanguage();
        else if (state == PlayModeStateChange.EnteredEditMode)
            QueueEditorPreview();
    }

    private static void QueueEditorPreview()
    {
        if (_previewQueued || !EditorPrefs.HasKey(PreviewLanguageKey))
            return;

        _previewQueued = true;
        EditorApplication.delayCall += RestoreEditorPreview;
    }

    private static void RestoreEditorPreview()
    {
        _previewQueued = false;
        if (Application.isBatchMode || !CanPreview || !EditorPrefs.HasKey(PreviewLanguageKey))
            return;

        if (EditorApplication.isCompiling || EditorApplication.isUpdating)
        {
            QueueEditorPreview();
            return;
        }

        ApplySelectedPreview();
        RepaintEditor();
    }

    private static void ApplySelectedPreview()
    {
        if (!EditorPrefs.HasKey(PreviewLanguageKey))
            return;

        int value = EditorPrefs.GetInt(PreviewLanguageKey, (int)GameLanguage.English);
        GameLanguage language = System.Enum.IsDefined(typeof(GameLanguage), value)
            ? (GameLanguage)value
            : GameLanguage.English;
        ApplyPreviewLanguage(language);
    }

    private static void ApplyPreviewLanguage(GameLanguage language)
    {
        LightweightLocalization.PreviewLanguage(language);
        LocalizeCurrentPrefabStage();
    }

    private static void LocalizeCurrentPrefabStage()
    {
        PrefabStage stage = PrefabStageUtility.GetCurrentPrefabStage();
        if (stage != null)
            LightweightLocalization.LocalizeHierarchy(stage.prefabContentsRoot);
    }

    private static void RepaintEditor()
    {
        Canvas.ForceUpdateCanvases();
        EditorApplication.QueuePlayerLoopUpdate();
        SceneView.RepaintAll();
        UnityEditorInternal.InternalEditorUtility.RepaintAllViews();
    }
}
