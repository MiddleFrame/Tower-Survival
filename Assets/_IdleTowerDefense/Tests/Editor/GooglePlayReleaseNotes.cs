using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEngine;

internal static class GooglePlayReleaseNotes
{
    private const int GooglePlayCharacterLimit = 500;
    private const string RootDirectoryName = "ReleaseNotes";
    private const string PendingDirectoryName = "pending";
    private const string ReleasesDirectoryName = "releases";

    // Google Play locale names. Keep this list in sync with the languages shipped by the game.
    private static readonly string[] Locales =
    {
        "en-US", "ru-RU", "pt-BR", "es-419", "de-DE",
        "fr-FR", "tr-TR", "id", "pl-PL", "it-IT"
    };

    private static readonly UTF8Encoding Utf8WithoutBom = new UTF8Encoding(false);

    internal static bool ValidatePending(out string error)
    {
        EnsurePendingFilesExist();
        var problems = new List<string>();

        foreach (string locale in Locales)
        {
            string note = ReadNormalized(PendingPath(locale));
            if (string.IsNullOrWhiteSpace(note))
                problems.Add($"{locale}: note is empty");
            else if (note.Length > GooglePlayCharacterLimit)
                problems.Add($"{locale}: {note.Length}/{GooglePlayCharacterLimit} characters");
        }

        string releaseDirectory = CurrentReleaseDirectory();
        if (Directory.Exists(releaseDirectory))
            problems.Add($"release already exists: {releaseDirectory}");

        error = problems.Count == 0
            ? string.Empty
            : "Google Play release notes are not ready:\n- " + string.Join("\n- ", problems);
        return problems.Count == 0;
    }

    internal static string ArchiveSuccessfulBuild()
    {
        if (!ValidatePending(out string error)) throw new InvalidOperationException(error);

        string finalDirectory = CurrentReleaseDirectory();
        string releasesRoot = Path.GetDirectoryName(finalDirectory);
        Directory.CreateDirectory(releasesRoot);
        string temporaryDirectory = Path.Combine(releasesRoot, ".tmp-" + Guid.NewGuid().ToString("N"));

        try
        {
            foreach (string locale in Locales)
            {
                string changelogDirectory = Path.Combine(temporaryDirectory, "android", locale, "changelogs");
                Directory.CreateDirectory(changelogDirectory);
                File.WriteAllText(
                    Path.Combine(changelogDirectory, PlayerSettings.Android.bundleVersionCode + ".txt"),
                    ReadNormalized(PendingPath(locale)) + Environment.NewLine,
                    Utf8WithoutBom);
            }

            Directory.Move(temporaryDirectory, finalDirectory);

            // Clear only after the complete release archive has been created successfully.
            foreach (string locale in Locales)
                File.WriteAllText(PendingPath(locale), string.Empty, Utf8WithoutBom);

            return finalDirectory;
        }
        catch
        {
            if (Directory.Exists(temporaryDirectory)) Directory.Delete(temporaryDirectory, true);
            throw;
        }
    }

    [MenuItem("Tools/Idle Tower Defense/Build/Open Pending Release Notes")]
    private static void OpenPendingReleaseNotes()
    {
        EnsurePendingFilesExist();
        EditorUtility.RevealInFinder(PendingDirectory());
    }

    private static void EnsurePendingFilesExist()
    {
        Directory.CreateDirectory(PendingDirectory());
        foreach (string locale in Locales)
        {
            string path = PendingPath(locale);
            if (!File.Exists(path)) File.WriteAllText(path, string.Empty, Utf8WithoutBom);
        }
    }

    private static string ReadNormalized(string path) =>
        File.ReadAllText(path, Encoding.UTF8).Replace("\r\n", "\n").Trim();

    private static string PendingPath(string locale) => Path.Combine(PendingDirectory(), locale + ".txt");

    private static string PendingDirectory() => Path.Combine(ProjectRoot(), RootDirectoryName, PendingDirectoryName);

    private static string CurrentReleaseDirectory()
    {
        string safeVersion = PlayerSettings.bundleVersion.Replace('/', '-').Replace('\\', '-');
        return Path.Combine(
            ProjectRoot(), RootDirectoryName, ReleasesDirectoryName,
            PlayerSettings.Android.bundleVersionCode + "_" + safeVersion);
    }

    private static string ProjectRoot() => Directory.GetParent(Application.dataPath).FullName;
}
