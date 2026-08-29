using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;

internal enum ProjectHealthStatus
{
    NeverRun,
    Running,
    Passed,
    Failed,
    Stale
}

[Serializable]
internal sealed class ProjectHealthFailure
{
    public string test;
    public string message;
    public string stackTrace;
}

[Serializable]
internal sealed class ProjectHealthRun
{
    public ProjectHealthStatus status;
    public string fingerprint;
    public string finishedUtc;
    public int passed;
    public int failed;
    public int skipped;
    public double duration;
    public List<ProjectHealthFailure> failures = new List<ProjectHealthFailure>();
}

[Serializable]
internal sealed class ProjectHealthData
{
    public ProjectHealthRun fast = new ProjectHealthRun();
    public ProjectHealthRun buildRequired = new ProjectHealthRun();
    public ProjectHealthRun playMode = new ProjectHealthRun();
}

internal static class ProjectHealthState
{
    private const string StateDirectory = "Library/ProjectHealth";
    private const string StatePath = StateDirectory + "/state.json";
    private static ProjectHealthData _data;

    internal static event Action Changed;
    internal static ProjectHealthData Data => _data ?? (_data = Load());

    internal static bool AutoRunFast
    {
        get => UnityEditor.EditorPrefs.GetBool("IdleTowerDefense.ProjectHealth.AutoFast", true);
        set => UnityEditor.EditorPrefs.SetBool("IdleTowerDefense.ProjectHealth.AutoFast", value);
    }

    internal static bool BlockPlayMode
    {
        get => UnityEditor.EditorPrefs.GetBool("IdleTowerDefense.ProjectHealth.BlockPlay", true);
        set => UnityEditor.EditorPrefs.SetBool("IdleTowerDefense.ProjectHealth.BlockPlay", value);
    }

    internal static ProjectHealthRun Get(ProjectTestRunKind kind)
    {
        switch (kind)
        {
            case ProjectTestRunKind.Fast: return Data.fast;
            case ProjectTestRunKind.BuildRequired: return Data.buildRequired;
            case ProjectTestRunKind.PlayMode: return Data.playMode;
            default: return Data.fast;
        }
    }

    internal static void Set(ProjectTestRunKind kind, ProjectHealthRun run)
    {
        switch (kind)
        {
            case ProjectTestRunKind.Fast: Data.fast = run; break;
            case ProjectTestRunKind.BuildRequired: Data.buildRequired = run; break;
            case ProjectTestRunKind.PlayMode: Data.playMode = run; break;
        }
        Save();
    }

    internal static bool HaveFastInputsChanged()
    {
        string previousFingerprint = Data.fast.fingerprint;
        return string.IsNullOrEmpty(previousFingerprint) ||
               !string.Equals(previousFingerprint, ProjectHealthFingerprint.Fast(), StringComparison.Ordinal);
    }

    internal static bool IsFastCurrentAndPassed()
    {
        return Data.fast.status == ProjectHealthStatus.Passed &&
               Data.fast.fingerprint == ProjectHealthFingerprint.Fast();
    }

    internal static bool IsBuildCurrentAndPassed()
    {
        return Data.buildRequired.status == ProjectHealthStatus.Passed &&
               Data.buildRequired.fingerprint == ProjectHealthFingerprint.Build();
    }

    internal static bool IsPlayModeCurrentAndPassed()
    {
        return Data.playMode.status == ProjectHealthStatus.Passed &&
               Data.playMode.fingerprint == ProjectHealthFingerprint.PlayMode();
    }

    internal static void RefreshStaleness()
    {
        bool changed = false;
        if (Data.fast.status == ProjectHealthStatus.Passed && Data.fast.fingerprint != ProjectHealthFingerprint.Fast())
        {
            Data.fast.status = ProjectHealthStatus.Stale;
            changed = true;
        }
        if (Data.buildRequired.status == ProjectHealthStatus.Passed &&
            Data.buildRequired.fingerprint != ProjectHealthFingerprint.Build())
        {
            Data.buildRequired.status = ProjectHealthStatus.Stale;
            changed = true;
        }
        if (Data.playMode.status == ProjectHealthStatus.Passed &&
            Data.playMode.fingerprint != ProjectHealthFingerprint.PlayMode())
        {
            Data.playMode.status = ProjectHealthStatus.Stale;
            changed = true;
        }
        if (changed) Save();
    }

    private static ProjectHealthData Load()
    {
        try
        {
            if (File.Exists(StatePath))
                return JsonUtility.FromJson<ProjectHealthData>(File.ReadAllText(StatePath)) ?? new ProjectHealthData();
        }
        catch (Exception exception)
        {
            Debug.LogWarning($"Could not load Project Health state: {exception.Message}");
        }
        return new ProjectHealthData();
    }

    private static void Save()
    {
        Directory.CreateDirectory(StateDirectory);
        File.WriteAllText(StatePath, JsonUtility.ToJson(Data, true));
        Changed?.Invoke();
        UnityEditorInternal.InternalEditorUtility.RepaintAllViews();
    }
}

internal static class ProjectHealthFingerprint
{
    private static readonly string[] BuildExtensions =
    {
        ".cs", ".asmdef", ".asmref", ".prefab", ".anim", ".controller", ".overrideController", ".unity"
    };

    private static readonly string[] PlayModeExtensions =
    {
        ".cs", ".asmdef", ".asmref", ".prefab", ".unity"
    };

    internal static string Fast() => Compute(new[] { ".cs", ".asmdef", ".asmref" }, false, false);
    internal static string Build() => Compute(BuildExtensions, true, true);
    internal static string PlayMode() => Compute(PlayModeExtensions, true, false);

    internal static string For(ProjectTestRunKind kind)
    {
        switch (kind)
        {
            case ProjectTestRunKind.Fast: return Fast();
            case ProjectTestRunKind.PlayMode: return PlayMode();
            default: return Build();
        }
    }

    internal static string FileContentHash(string path)
    {
        using (SHA256 sha = SHA256.Create())
        using (var stream = new FileStream(path, FileMode.Open, FileAccess.Read,
                   FileShare.ReadWrite | FileShare.Delete))
            return BitConverter.ToString(sha.ComputeHash(stream)).Replace("-", string.Empty);
    }

    private static string Compute(IReadOnlyCollection<string> extensions, bool includeBuildConfiguration,
        bool includeValidatedGameData)
    {
        string root = Directory.GetCurrentDirectory();
        string[] sourceRoots =
        {
            Path.Combine(root, "Assets", "_IdleTowerDefense"),
            Path.Combine(root, "Assets", "LightweightLocalization")
        };
        IEnumerable<string> files = sourceRoots
            .Where(Directory.Exists)
            .SelectMany(path => Directory.EnumerateFiles(path, "*", SearchOption.AllDirectories))
            .Where(path => extensions.Contains(Path.GetExtension(path), StringComparer.OrdinalIgnoreCase));
        string gameDataRoot = Path.Combine(root, "Assets", "_IdleTowerDefense", "ScriptableObjects");
        IEnumerable<string> validatedGameData = includeValidatedGameData && Directory.Exists(gameDataRoot)
            ? Directory.EnumerateFiles(gameDataRoot, "*.asset", SearchOption.AllDirectories)
            : Enumerable.Empty<string>();
        string[] commonExtra =
        {
            Path.Combine(root, "Packages", "manifest.json"),
            Path.Combine(root, "Packages", "packages-lock.json")
        };
        string[] buildExtra =
        {
            Path.Combine(root, "ProjectSettings", "EditorBuildSettings.asset"),
            Path.Combine(root, "Assets", "Resources", "Localization", "strings.txt")
        };
        IEnumerable<string> extra = commonExtra.Concat(includeBuildConfiguration ? buildExtra : Array.Empty<string>());
        var source = new StringBuilder();
        foreach (string path in files.Concat(validatedGameData).Concat(extra.Where(File.Exists))
                     .Distinct(StringComparer.OrdinalIgnoreCase)
                     .OrderBy(x => x, StringComparer.OrdinalIgnoreCase))
        {
            source.Append(path.Substring(root.Length)).Append('|')
                .Append(FileContentHash(path)).Append('\n');
        }
        using (SHA256 sha = SHA256.Create())
            return BitConverter.ToString(sha.ComputeHash(Encoding.UTF8.GetBytes(source.ToString()))).Replace("-", "");
    }
}
