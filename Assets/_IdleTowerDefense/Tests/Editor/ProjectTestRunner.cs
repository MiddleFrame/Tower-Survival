using System;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEditor.Compilation;
using UnityEditor.TestTools.TestRunner.Api;
using UnityEngine;
using Object = UnityEngine.Object;

internal enum ProjectTestRunKind
{
    None,
    Fast,
    BuildRequired,
    PlayMode
}

[InitializeOnLoad]
internal static class ProjectTestRunner
{
    private const string PendingCompilationKey = "IdleTowerDefense.ProjectHealth.PendingCompilation";
    private const string ActiveKindKey = "IdleTowerDefense.ProjectHealth.ActiveKind";
    private const string ExternalTestRunKey = "IdleTowerDefense.ProjectHealth.ExternalTestRun";
    private static readonly ProjectTestCallbacks Callbacks = new ProjectTestCallbacks();
    private static TestRunnerApi _api;

    internal static bool IsRunning => CurrentKind != ProjectTestRunKind.None;
    internal static ProjectTestRunKind CurrentKind =>
        (ProjectTestRunKind)SessionState.GetInt(ActiveKindKey, (int)ProjectTestRunKind.None);

    static ProjectTestRunner()
    {
        TestRunnerApi.RegisterTestCallback(Callbacks, 100);
        CompilationPipeline.compilationStarted -= OnCompilationStarted;
        CompilationPipeline.compilationStarted += OnCompilationStarted;
        CompilationPipeline.compilationFinished -= OnCompilationFinished;
        CompilationPipeline.compilationFinished += OnCompilationFinished;
        EditorApplication.playModeStateChanged -= OnPlayModeStateChanged;
        EditorApplication.playModeStateChanged += OnPlayModeStateChanged;
        EditorApplication.delayCall += TryRunPendingCompilationTests;
        ProjectHealthState.RefreshStaleness();
    }

    [MenuItem("Tools/Idle Tower Defense/Tests/Run Fast")]
    internal static void RunFast() => RunAsync(ProjectTestRunKind.Fast);

    [MenuItem("Tools/Idle Tower Defense/Tests/Run Build Required")]
    internal static void RunBuildRequired() => RunAsync(ProjectTestRunKind.BuildRequired);

    [MenuItem("Tools/Idle Tower Defense/Tests/Run Play Mode Smoke")]
    internal static void RunPlayModeSmoke() => RunAsync(ProjectTestRunKind.PlayMode);

    [MenuItem("Tools/Idle Tower Defense/Tests/Open Unity Test Runner")]
    internal static void OpenUnityTestRunner() => EditorApplication.ExecuteMenuItem("Window/General/Test Runner");

    internal static bool RunBuildRequiredSynchronously()
        => RunSynchronously(ProjectTestRunKind.BuildRequired);

    internal static bool RunFastSynchronously()
        => RunSynchronously(ProjectTestRunKind.Fast);

    private static bool RunSynchronously(ProjectTestRunKind kind)
    {
        if (IsRunning) return false;
        Begin(kind);
        ExecutionSettings settings = Settings(kind, true);
        _api = ScriptableObject.CreateInstance<TestRunnerApi>();
        _api.Execute(settings);
        bool passed = kind == ProjectTestRunKind.Fast
            ? ProjectHealthState.IsFastCurrentAndPassed()
            : ProjectHealthState.IsBuildCurrentAndPassed();
        if (_api != null) Object.DestroyImmediate(_api);
        _api = null;
        return passed;
    }

    internal static void RunPlayModeForVerifiedBuild() => RunAsync(ProjectTestRunKind.PlayMode);

    private static void RunAsync(ProjectTestRunKind kind)
    {
        if (IsRunning || EditorApplication.isCompiling || BuildPipeline.isBuildingPlayer)
        {
            Debug.LogWarning("Project Health cannot start tests while another test, compilation, or build is active.");
            return;
        }
        Begin(kind);
        _api = ScriptableObject.CreateInstance<TestRunnerApi>();
        _api.Execute(Settings(kind, false));
    }

    private static void Begin(ProjectTestRunKind kind)
    {
        SessionState.SetInt(ActiveKindKey, (int)kind);
        ProjectHealthState.Set(kind, new ProjectHealthRun
        {
            status = ProjectHealthStatus.Running,
            fingerprint = ProjectHealthFingerprint.For(kind)
        });
    }

    private static ExecutionSettings Settings(ProjectTestRunKind kind, bool synchronous)
    {
        var filter = new Filter
        {
            testMode = kind == ProjectTestRunKind.PlayMode ? TestMode.PlayMode : TestMode.EditMode,
            categoryNames = kind == ProjectTestRunKind.Fast ? new[] { "Fast" } :
                kind == ProjectTestRunKind.BuildRequired ? new[] { "BuildRequired" } : null
        };
        return new ExecutionSettings(filter) { runSynchronously = synchronous };
    }

    private static void OnCompilationStarted(object context)
    {
        // The Test Runner reloads/compiles its temporary assemblies when entering
        // and leaving Play Mode. That is not a project source change and must not
        // invalidate the successful stages of a verified build.
        bool projectScriptsChanged = ProjectHealthState.HaveFastInputsChanged();
        if (projectScriptsChanged)
            SessionState.SetBool(PendingCompilationKey, true);
        ProjectHealthState.RefreshStaleness();
    }

    private static void OnCompilationFinished(object context)
    {
        EditorApplication.delayCall += TryRunPendingCompilationTests;
    }

    private static void TryRunPendingCompilationTests()
    {
        if (!SessionState.GetBool(PendingCompilationKey, false) || !ProjectHealthState.AutoRunFast) return;
        if (EditorApplication.isCompiling || EditorApplication.isUpdating)
        {
            EditorApplication.delayCall += TryRunPendingCompilationTests;
            return;
        }
        if (EditorUtility.scriptCompilationFailed)
        {
            SessionState.SetBool(PendingCompilationKey, false);
            return;
        }
        SessionState.SetBool(PendingCompilationKey, false);
        if (!Application.isBatchMode) RunFast();
    }

    private static void OnPlayModeStateChanged(PlayModeStateChange state)
    {
        if (state != PlayModeStateChange.ExitingEditMode || !ProjectHealthState.BlockPlayMode ||
            IsRunning || Application.isBatchMode || SessionState.GetBool(ExternalTestRunKey, false)) return;
        ProjectHealthState.RefreshStaleness();
        if (ProjectHealthState.IsFastCurrentAndPassed()) return;

        EditorApplication.isPlaying = false;
        EditorApplication.delayCall += () =>
        {
            int choice = EditorUtility.DisplayDialogComplex("Project Health blocks Play Mode",
                "Fast tests have failed, are outdated, or have not been run after the last script compilation.",
                "Run Fast Tests", "Cancel", "Open Project Health");
            if (choice == 0) RunFast();
            else if (choice == 2) ProjectHealthWindow.Open();
        };
    }

    private sealed class ProjectTestCallbacks : IErrorCallbacks
    {
        private readonly List<ProjectHealthFailure> _failures = new List<ProjectHealthFailure>();

        public void RunStarted(ITestAdaptor testsToRun)
        {
            _failures.Clear();
            if (CurrentKind == ProjectTestRunKind.None)
                SessionState.SetBool(ExternalTestRunKey, true);
        }
        public void TestStarted(ITestAdaptor test) { }

        public void TestFinished(ITestResultAdaptor result)
        {
            if (CurrentKind == ProjectTestRunKind.None || result.HasChildren || result.TestStatus != TestStatus.Failed) return;
            _failures.Add(new ProjectHealthFailure
            {
                test = result.FullName,
                message = result.Message,
                stackTrace = result.StackTrace
            });
        }

        public void RunFinished(ITestResultAdaptor result)
        {
            ProjectTestRunKind kind = CurrentKind;
            if (kind == ProjectTestRunKind.None)
            {
                SessionState.SetBool(ExternalTestRunKey, false);
                return;
            }
            string fingerprint = ProjectHealthFingerprint.For(kind);
            var run = new ProjectHealthRun
            {
                status = result.FailCount == 0 && result.PassCount > 0 ? ProjectHealthStatus.Passed : ProjectHealthStatus.Failed,
                fingerprint = fingerprint,
                finishedUtc = DateTime.UtcNow.ToString("O"),
                passed = result.PassCount,
                failed = result.FailCount,
                skipped = result.SkipCount + result.InconclusiveCount,
                duration = result.Duration,
                failures = new List<ProjectHealthFailure>(_failures)
            };
            ProjectHealthState.Set(kind, run);
            SaveXml(kind, result);
            SessionState.SetInt(ActiveKindKey, (int)ProjectTestRunKind.None);
            if (_api != null)
            {
                Object.DestroyImmediate(_api);
                _api = null;
            }
            Notify(run);
            if (kind == ProjectTestRunKind.PlayMode)
                ProjectVerifiedBuild.OnPlayModeTestsFinished(run.status == ProjectHealthStatus.Passed);
        }

        public void OnError(string message)
        {
            ProjectTestRunKind kind = CurrentKind;
            if (kind == ProjectTestRunKind.None)
            {
                SessionState.SetBool(ExternalTestRunKey, false);
                return;
            }
            ProjectHealthState.Set(kind, new ProjectHealthRun
            {
                status = ProjectHealthStatus.Failed,
                fingerprint = ProjectHealthFingerprint.For(kind),
                finishedUtc = DateTime.UtcNow.ToString("O"),
                failed = 1,
                failures = new List<ProjectHealthFailure> { new ProjectHealthFailure { test = "Test runner", message = message } }
            });
            SessionState.SetInt(ActiveKindKey, (int)ProjectTestRunKind.None);
            if (_api != null)
            {
                Object.DestroyImmediate(_api);
                _api = null;
            }
            if (kind == ProjectTestRunKind.PlayMode)
                ProjectVerifiedBuild.OnPlayModeTestsFinished(false);
        }

        private static void SaveXml(ProjectTestRunKind kind, ITestResultAdaptor result)
        {
            Directory.CreateDirectory("TestResults");
            TestRunnerApi.SaveResultToFile(result, $"TestResults/{kind}.xml");
        }

        private static void Notify(ProjectHealthRun run)
        {
            string message = run.status == ProjectHealthStatus.Passed
                ? $"Tests passed: {run.passed}"
                : $"Tests failed: {run.failed}";
            if (SceneView.lastActiveSceneView != null)
                SceneView.lastActiveSceneView.ShowNotification(new GUIContent(message), 3d);
            if (run.status == ProjectHealthStatus.Failed)
                Debug.LogError($"Project Health: {message}. Open Tools > Idle Tower Defense > Project Health.");
        }
    }
}

public static class ProjectHealthBatch
{
    private const string WaitingForPlayModeKey = "IdleTowerDefense.ProjectHealth.BatchPlayMode";

    [InitializeOnLoadMethod]
    private static void ResumePlayModeWaitAfterReload()
    {
        if (SessionState.GetBool(WaitingForPlayModeKey, false))
            EditorApplication.delayCall += AttachPlayModeWait;
    }

    public static void RunAutomationSmokeTest()
    {
        if (!ProjectTestRunner.RunFastSynchronously())
            throw new BuildFailedException("Project Health Fast automation smoke test failed.");
        if (!ProjectTestRunner.RunBuildRequiredSynchronously())
            throw new BuildFailedException("Project Health BuildRequired automation smoke test failed.");
        Debug.Log("Project Health Edit Mode automation smoke test passed.");
    }

    public static void RunPlayModeSmokeTest()
    {
        SessionState.SetBool(WaitingForPlayModeKey, true);
        AttachPlayModeWait();
        ProjectTestRunner.RunPlayModeSmoke();
    }

    public static void RunBuildGateSmokeTest()
    {
        new ProjectHealthBuildGate().OnPreprocessBuild(null);
        Debug.Log("Project Health build gate smoke test passed.");
    }

    private static void AttachPlayModeWait()
    {
        EditorApplication.update -= WaitForPlayMode;
        EditorApplication.update += WaitForPlayMode;
    }

    private static void WaitForPlayMode()
    {
        if (!SessionState.GetBool(WaitingForPlayModeKey, false) || ProjectTestRunner.IsRunning) return;
        SessionState.SetBool(WaitingForPlayModeKey, false);
        EditorApplication.update -= WaitForPlayMode;
        bool passed = ProjectHealthState.IsPlayModeCurrentAndPassed();
        Debug.Log(passed ? "Project Health Play Mode smoke test passed." : "Project Health Play Mode smoke test failed.");
        EditorApplication.Exit(passed ? 0 : 1);
    }
}

internal sealed class ProjectHealthBuildGate : IPreprocessBuildWithReport
{
    public int callbackOrder => int.MinValue + 100;

    public void OnPreprocessBuild(BuildReport report)
    {
        ProjectHealthState.RefreshStaleness();
        if (!ProjectHealthState.IsBuildCurrentAndPassed())
        {
            if (!Application.isBatchMode) ProjectHealthWindow.Open();
            throw new BuildFailedException(
                "Build cancelled: required Edit Mode tests are missing or outdated. " +
                "Use Tools > Idle Tower Defense > Build > Verified Android Build.");
        }
        if (ProjectHealthState.IsPlayModeCurrentAndPassed()) return;
        if (!Application.isBatchMode) ProjectHealthWindow.Open();
        throw new BuildFailedException(
            "Build cancelled: Play Mode smoke tests are missing or outdated. Use Tools > Idle Tower Defense > Build > Verified Android Build.");
    }
}

internal static class ProjectVerifiedBuild
{
    private const string OutputPathKey = "IdleTowerDefense.ProjectHealth.VerifiedBuildPath";

    [MenuItem("Tools/Idle Tower Defense/Build/Verified Android Build")]
    private static void Start()
    {
        string extension = EditorUserBuildSettings.buildAppBundle ? "aab" : "apk";
        string output = EditorUtility.SaveFilePanel("Verified Android Build", "Builds", "TowerSurvival", extension);
        if (string.IsNullOrEmpty(output)) return;
        if (!GooglePlayReleaseNotes.ValidatePending(out string releaseNotesError))
        {
            EditorUtility.DisplayDialog("Verified Build cancelled", releaseNotesError, "OK");
            Debug.LogError(releaseNotesError);
            return;
        }
        if (!ProjectTestRunner.RunBuildRequiredSynchronously())
        {
            ProjectHealthWindow.Open();
            EditorUtility.DisplayDialog("Verified Build cancelled", "Required Edit Mode tests failed.", "OK");
            return;
        }
        SessionState.SetString(OutputPathKey, output);
        ProjectTestRunner.RunPlayModeForVerifiedBuild();
    }

    internal static void OnPlayModeTestsFinished(bool passed)
    {
        string output = SessionState.GetString(OutputPathKey, string.Empty);
        if (string.IsNullOrEmpty(output)) return;
        if (!passed)
        {
            SessionState.EraseString(OutputPathKey);
            ProjectHealthWindow.Open();
            EditorUtility.DisplayDialog("Verified Build cancelled", "Play Mode tests failed.", "OK");
            return;
        }
        EditorApplication.delayCall += TryBuild;
    }

    private static void TryBuild()
    {
        if (EditorApplication.isPlayingOrWillChangePlaymode)
        {
            EditorApplication.delayCall += TryBuild;
            return;
        }
        string output = SessionState.GetString(OutputPathKey, string.Empty);
        SessionState.EraseString(OutputPathKey);
        ProjectHealthState.RefreshStaleness();
        bool buildTestsPassed = ProjectHealthState.IsBuildCurrentAndPassed();
        bool playModeTestsPassed = ProjectHealthState.IsPlayModeCurrentAndPassed();
        if (!buildTestsPassed || !playModeTestsPassed)
        {
            string stage = !buildTestsPassed ? "Build Required" : "Play Mode";
            ProjectHealthWindow.Open();
            EditorUtility.DisplayDialog("Verified Build cancelled",
                $"{stage} results became outdated before the Android build started. Run Verified Android Build again.",
                "OK");
            return;
        }

        if (!GooglePlayReleaseNotes.ValidatePending(out string releaseNotesError))
        {
            EditorUtility.DisplayDialog("Verified Build cancelled", releaseNotesError, "OK");
            Debug.LogError(releaseNotesError);
            return;
        }

        EditorBuildSettingsScene[] scenes = Array.FindAll(EditorBuildSettings.scenes, x => x.enabled);
        string[] scenePaths = Array.ConvertAll(scenes, x => x.path);
        BuildReport report = BuildPipeline.BuildPlayer(new BuildPlayerOptions
        {
            scenes = scenePaths,
            locationPathName = output,
            target = BuildTarget.Android,
            options = BuildOptions.None
        });
        if (report.summary.result == BuildResult.Succeeded)
        {
            string releaseNotesPath = GooglePlayReleaseNotes.ArchiveSuccessfulBuild();
            Debug.Log($"Verified Android Build succeeded: {output}\nGoogle Play release notes: {releaseNotesPath}");
            EditorUtility.RevealInFinder(output);
        }
        else
            Debug.LogError($"Verified Android Build failed: {report.summary.result}");
    }
}
