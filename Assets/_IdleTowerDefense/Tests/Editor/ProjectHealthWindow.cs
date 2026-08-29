using System;
using System.Globalization;
using System.IO;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEngine;
using UnityEditorInternal;

public sealed class ProjectHealthWindow : EditorWindow
{
    private Vector2 _scroll;
    private static readonly Regex UnityStackLine = new Regex(@"\(at (?<path>Assets/.+):(?<line>\d+)\)", RegexOptions.Compiled);

    [MenuItem("Tools/Idle Tower Defense/Project Health", priority = -100)]
    public static void Open()
    {
        ProjectHealthWindow window = GetWindow<ProjectHealthWindow>("Project Health");
        window.minSize = new Vector2(520f, 360f);
        window.Show();
    }

    private void OnEnable()
    {
        ProjectHealthState.Changed -= Repaint;
        ProjectHealthState.Changed += Repaint;
        ProjectHealthState.RefreshStaleness();
    }

    private void OnDisable() => ProjectHealthState.Changed -= Repaint;

    private void OnGUI()
    {
        _scroll = EditorGUILayout.BeginScrollView(_scroll);
        EditorGUILayout.Space(8f);
        EditorGUILayout.LabelField("Project Health", new GUIStyle(EditorStyles.boldLabel) { fontSize = 18 });
        EditorGUILayout.LabelField("Fast feedback after compilation and mandatory gates before builds.", EditorStyles.wordWrappedLabel);
        EditorGUILayout.Space(8f);

        bool auto = EditorGUILayout.ToggleLeft("Run Fast tests after every successful script compilation", ProjectHealthState.AutoRunFast);
        if (auto != ProjectHealthState.AutoRunFast) ProjectHealthState.AutoRunFast = auto;
        bool blockPlay = EditorGUILayout.ToggleLeft("Block Play Mode when Fast tests are failed or outdated", ProjectHealthState.BlockPlayMode);
        if (blockPlay != ProjectHealthState.BlockPlayMode) ProjectHealthState.BlockPlayMode = blockPlay;

        EditorGUILayout.Space(8f);
        DrawRun("Fast after compilation", ProjectHealthState.Data.fast, ProjectTestRunKind.Fast);
        DrawRun("Build Required + Data Validation", ProjectHealthState.Data.buildRequired, ProjectTestRunKind.BuildRequired);
        DrawRun("Play Mode (Verified Build)", ProjectHealthState.Data.playMode, ProjectTestRunKind.PlayMode);

        EditorGUILayout.Space(8f);
        using (new EditorGUILayout.HorizontalScope())
        {
            using (new EditorGUI.DisabledScope(ProjectTestRunner.IsRunning || EditorApplication.isCompiling))
            {
                if (GUILayout.Button("Run Fast", GUILayout.Height(28f))) ProjectTestRunner.RunFast();
                if (GUILayout.Button("Run Build Required", GUILayout.Height(28f))) ProjectTestRunner.RunBuildRequired();
                if (GUILayout.Button("Run Play Mode", GUILayout.Height(28f))) ProjectTestRunner.RunPlayModeSmoke();
            }
            if (GUILayout.Button("Unity Test Runner", GUILayout.Height(28f))) ProjectTestRunner.OpenUnityTestRunner();
        }
        EditorGUILayout.Space(8f);
        EditorGUILayout.HelpBox("Verified Android Build is available at Tools > Idle Tower Defense > Build. It runs required Edit Mode tests, then Play Mode tests, and starts one build only when both pass. The build gate only validates these results and never starts nested test runs.", MessageType.Info);
        EditorGUILayout.EndScrollView();
    }

    private static void DrawRun(string title, ProjectHealthRun run, ProjectTestRunKind kind)
    {
        Color color = StatusColor(run.status);
        Color old = GUI.backgroundColor;
        GUI.backgroundColor = color;
        EditorGUILayout.BeginVertical(EditorStyles.helpBox);
        GUI.backgroundColor = old;
        using (new EditorGUILayout.HorizontalScope())
        {
            EditorGUILayout.LabelField(title, EditorStyles.boldLabel);
            GUILayout.FlexibleSpace();
            GUILayout.Label(StatusLabel(run.status), new GUIStyle(EditorStyles.boldLabel) { normal = { textColor = color } });
        }
        if (run.status != ProjectHealthStatus.NeverRun)
        {
            EditorGUILayout.LabelField($"Passed {run.passed}   Failed {run.failed}   Skipped {run.skipped}   Duration {run.duration:0.000}s");
            if (DateTime.TryParse(run.finishedUtc, CultureInfo.InvariantCulture, DateTimeStyles.RoundtripKind, out DateTime finished))
                EditorGUILayout.LabelField("Last finished", finished.ToLocalTime().ToString("yyyy-MM-dd HH:mm:ss"));
        }
        foreach (ProjectHealthFailure failure in run.failures)
        {
            EditorGUILayout.Space(3f);
            EditorGUILayout.LabelField(failure.test, EditorStyles.boldLabel);
            EditorGUILayout.LabelField(failure.message ?? "Unknown failure", EditorStyles.wordWrappedLabel);
            using (new EditorGUILayout.HorizontalScope())
            {
                if (GUILayout.Button("Open failure", GUILayout.Width(110f))) OpenFailure(failure.stackTrace);
                if (GUILayout.Button("Open Test Runner", GUILayout.Width(120f))) ProjectTestRunner.OpenUnityTestRunner();
            }
        }
        EditorGUILayout.EndVertical();
    }

    private static void OpenFailure(string stackTrace)
    {
        Match match = UnityStackLine.Match(stackTrace ?? string.Empty);
        if (!match.Success)
        {
            ProjectTestRunner.OpenUnityTestRunner();
            return;
        }
        string path = Path.GetFullPath(match.Groups["path"].Value);
        int line = int.Parse(match.Groups["line"].Value);
        InternalEditorUtility.OpenFileAtLineExternal(path, line);
    }

    internal static Color StatusColor(ProjectHealthStatus status)
    {
        switch (status)
        {
            case ProjectHealthStatus.Passed: return new Color(0.25f, 0.8f, 0.35f);
            case ProjectHealthStatus.Failed: return new Color(1f, 0.3f, 0.3f);
            case ProjectHealthStatus.Running: return new Color(0.3f, 0.65f, 1f);
            case ProjectHealthStatus.Stale: return new Color(1f, 0.72f, 0.2f);
            default: return Color.gray;
        }
    }

    internal static string StatusLabel(ProjectHealthStatus status)
    {
        switch (status)
        {
            case ProjectHealthStatus.Passed: return "● PASSED";
            case ProjectHealthStatus.Failed: return "● FAILED";
            case ProjectHealthStatus.Running: return "● RUNNING";
            case ProjectHealthStatus.Stale: return "● OUTDATED";
            default: return "● NEVER RUN";
        }
    }
}

[InitializeOnLoad]
internal static class ProjectHealthSceneBadge
{
    static ProjectHealthSceneBadge()
    {
        SceneView.duringSceneGui -= Draw;
        SceneView.duringSceneGui += Draw;
    }

    private static void Draw(SceneView sceneView)
    {
        ProjectHealthRun run = ProjectHealthState.Data.fast;
        Handles.BeginGUI();
        Rect rect = new Rect(sceneView.position.width - 150f, 8f, 140f, 24f);
        Color old = GUI.backgroundColor;
        GUI.backgroundColor = ProjectHealthWindow.StatusColor(run.status);
        if (GUI.Button(rect, "Tests: " + ProjectHealthWindow.StatusLabel(run.status).Replace("● ", string.Empty)))
            ProjectHealthWindow.Open();
        GUI.backgroundColor = old;
        Handles.EndGUI();
    }
}
