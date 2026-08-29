using System;
using System.Collections.Generic;
using System.Globalization;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public static class LightweightLocalization
{
    private const string ResourcePath = "Localization/strings";
    private const string FallbackFontPath = "Localization/Neucha SDF";
    private const string LanguagePreferenceKey = "game.language";

    private static readonly Dictionary<string, string[]> Translations = new(StringComparer.Ordinal);
    private static readonly Dictionary<string, string> SourceToKey = new(StringComparer.Ordinal);
    private static readonly Dictionary<int, string> StaticTextKeys = new();
    private static bool _initialized;

    public static event Action LanguageChanged;

    public static GameLanguage CurrentLanguage { get; private set; }

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    private static void Bootstrap()
    {
        Initialize();
        SceneManager.sceneLoaded -= OnSceneLoaded;
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    public static void Initialize()
    {
        if (_initialized)
            return;

        LoadTable();
        RegisterFallbackFont();
        CurrentLanguage = GetSavedLanguage();
        _initialized = true;
    }

    public static void SetLanguage(GameLanguage language)
    {
        Initialize();
        if (CurrentLanguage == language)
            return;

        CurrentLanguage = language;
        PlayerPrefs.SetInt(LanguagePreferenceKey, (int)language);
        PlayerPrefs.Save();
        LocalizeAllLoadedScenes();
        LanguageChanged?.Invoke();
    }

#if UNITY_EDITOR
    /// <summary>
    /// Changes the language used to preview open scenes without changing the
    /// language saved for the player.
    /// </summary>
    public static void PreviewLanguage(GameLanguage language)
    {
        Initialize();
        ApplyLanguageWithoutSaving(language);
    }

    /// <summary>
    /// Restores the language saved for the player. Used before entering Play Mode.
    /// </summary>
    public static void RestoreSavedLanguage()
    {
        Initialize();
        ApplyLanguageWithoutSaving(GetSavedLanguage());
    }

    /// <summary>
    /// Reloads strings.tsv so translation edits can be previewed without entering Play Mode.
    /// </summary>
    public static void ReloadEditorPreview()
    {
        Initialize();
        LoadTable();
        RegisterFallbackFont();
        LocalizeAllLoadedScenes();
        LanguageChanged?.Invoke();
    }
#endif

    public static string Get(string key, params object[] arguments)
    {
        Initialize();
        if (!Translations.TryGetValue(key, out string[] values))
        {
            Debug.LogWarning($"Missing localization key: {key}");
            return key;
        }

        int languageIndex = Mathf.Clamp((int)CurrentLanguage, 0, values.Length - 1);
        string value = values[languageIndex];
        if (string.IsNullOrEmpty(value))
            value = values[0];

        return arguments is { Length: > 0 }
            ? string.Format(CultureInfo.InvariantCulture, value, arguments)
            : value;
    }

    public static string FromSource(string englishSource)
    {
        Initialize();
        return TryGetKey(englishSource, out string key) ? Get(key) : englishSource;
    }

    public static string ToUpper(string value)
    {
        if (string.IsNullOrEmpty(value))
            return value;

        // Turkish has two different forms of I. Invariant casing turns "i" into
        // "I", which produces visibly incorrect UI labels such as GELIŞTIRME.
        return CurrentLanguage == GameLanguage.Turkish
            ? value.Replace("i", "İ").Replace("ı", "I").ToUpperInvariant()
            : value.ToUpperInvariant();
    }

    public static void Bind(TMP_Text target, string key, params object[] arguments)
    {
        if (target == null)
            return;

        LocalizedTextBinding binding = target.GetComponent<LocalizedTextBinding>();
        if (binding == null)
            binding = target.gameObject.AddComponent<LocalizedTextBinding>();
        binding.Bind(target, key, false, arguments);
    }

    public static void BindSource(TMP_Text target, string englishSource, bool uppercase = false)
    {
        Initialize();
        if (TryGetKey(englishSource, out string key))
        {
            if (target == null)
                return;

            LocalizedTextBinding binding = target.GetComponent<LocalizedTextBinding>();
            if (binding == null)
                binding = target.gameObject.AddComponent<LocalizedTextBinding>();
            binding.Bind(target, key, uppercase);
        }
        else if (target != null)
            target.text = uppercase ? ToUpper(englishSource) : englishSource;
    }

    public static void LocalizeHierarchy(GameObject root)
    {
        if (root == null)
            return;

        Initialize();
        TMP_Text[] texts = root.GetComponentsInChildren<TMP_Text>(true);
        foreach (TMP_Text text in texts)
            LocalizeStaticText(text);
    }

    public static void LocalizeAllLoadedScenes()
    {
        for (int i = 0; i < SceneManager.sceneCount; i++)
        {
            Scene scene = SceneManager.GetSceneAt(i);
            if (!scene.isLoaded)
                continue;

            foreach (GameObject root in scene.GetRootGameObjects())
                LocalizeHierarchy(root);
        }
    }

    private static void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        foreach (GameObject root in scene.GetRootGameObjects())
            LocalizeHierarchy(root);
    }

    private static GameLanguage GetSavedLanguage()
    {
        int defaultLanguage = (int)GetSystemLanguage();
        int savedLanguage = PlayerPrefs.GetInt(LanguagePreferenceKey, defaultLanguage);
        return Enum.IsDefined(typeof(GameLanguage), savedLanguage)
            ? (GameLanguage)savedLanguage
            : (GameLanguage)defaultLanguage;
    }

    private static GameLanguage GetSystemLanguage()
    {
        return Application.systemLanguage switch
        {
            SystemLanguage.Russian => GameLanguage.Russian,
            SystemLanguage.Portuguese => GameLanguage.PortugueseBrazil,
            SystemLanguage.Spanish => GameLanguage.SpanishLatinAmerica,
            SystemLanguage.German => GameLanguage.German,
            SystemLanguage.French => GameLanguage.French,
            SystemLanguage.Turkish => GameLanguage.Turkish,
            SystemLanguage.Indonesian => GameLanguage.Indonesian,
            SystemLanguage.Polish => GameLanguage.Polish,
            SystemLanguage.Italian => GameLanguage.Italian,
            _ => GameLanguage.English
        };
    }

#if UNITY_EDITOR
    private static void ApplyLanguageWithoutSaving(GameLanguage language)
    {
        CurrentLanguage = language;
        LocalizeAllLoadedScenes();
        LanguageChanged?.Invoke();
    }
#endif

    private static void LocalizeStaticText(TMP_Text text)
    {
        if (text == null)
            return;

        LocalizedTextBinding binding = text.GetComponent<LocalizedTextBinding>();
        if (binding != null)
        {
            binding.RefreshNow();
            return;
        }

        int instanceId = text.GetInstanceID();
        if (!StaticTextKeys.TryGetValue(instanceId, out string key))
        {
            if (!TryGetKey(text.text, out key))
                return;
            StaticTextKeys[instanceId] = key;
        }

        text.text = Get(key);
    }

    private static bool TryGetKey(string source, out string key)
    {
        if (string.IsNullOrWhiteSpace(source))
        {
            key = null;
            return false;
        }

        if (SourceToKey.TryGetValue(source, out key))
            return true;

        string normalized = source.Trim();
        if (SourceToKey.TryGetValue(normalized, out key))
            return true;

        string unquoted = normalized.Length >= 2 && normalized[0] == '\'' && normalized[^1] == '\''
            ? normalized.Substring(1, normalized.Length - 2)
            : normalized;
        return SourceToKey.TryGetValue(unquoted, out key);
    }

    private static void LoadTable()
    {
        Translations.Clear();
        SourceToKey.Clear();

        TextAsset table = Resources.Load<TextAsset>(ResourcePath);
        if (table == null)
        {
            Debug.LogError($"Localization table was not found at Resources/{ResourcePath}.tsv");
            return;
        }

        string[] lines = table.text.Replace("\r", string.Empty).Split('\n');
        for (int lineIndex = 1; lineIndex < lines.Length; lineIndex++)
        {
            string line = lines[lineIndex];
            if (string.IsNullOrWhiteSpace(line) || line.StartsWith("#", StringComparison.Ordinal))
                continue;

            string[] columns = line.Split('\t');
            if (columns.Length < 3)
            {
                Debug.LogWarning($"Invalid localization row {lineIndex + 1}: {line}");
                continue;
            }

            string key = columns[0].Trim();
            int languageCount = Enum.GetValues(typeof(GameLanguage)).Length;
            string[] values = new string[languageCount];
            for (int languageIndex = 0; languageIndex < languageCount; languageIndex++)
            {
                int columnIndex = languageIndex + 1;
                values[languageIndex] = columnIndex < columns.Length
                    ? Unescape(columns[columnIndex])
                    : string.Empty;
            }
            Translations[key] = values;

            foreach (string value in values)
            {
                if (!string.IsNullOrEmpty(value) && !SourceToKey.ContainsKey(value))
                    SourceToKey.Add(value, key);
            }
        }
    }

    private static void RegisterFallbackFont()
    {
        TMP_FontAsset fallback = Resources.Load<TMP_FontAsset>(FallbackFontPath);
        if (fallback == null)
        {
            Debug.LogWarning("The localization TMP fallback font is missing. Let Unity finish importing the localization package.");
            return;
        }

        TMP_Settings.fallbackFontAssets ??= new List<TMP_FontAsset>();
        if (!TMP_Settings.fallbackFontAssets.Contains(fallback))
            TMP_Settings.fallbackFontAssets.Add(fallback);
    }

    private static string Unescape(string value)
    {
        return value.Replace("\\n", "\n").Replace("\\t", "\t");
    }
}
