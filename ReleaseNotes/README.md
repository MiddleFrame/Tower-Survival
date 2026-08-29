# Google Play release notes

`pending/` is the queue for the next Android release. Each file is named after a
Google Play locale and contains the localized **What's new** text for that locale.

Workflow:

1. When a player-visible change is completed, append a short bullet to every file
   in `pending/`. Repository agent instructions make this automatic when changes
   are implemented with Codex. Keep each complete text at 500 characters or fewer.
2. Run `Tools > Idle Tower Defense > Build > Verified Android Build`.
3. The build is cancelled if a locale is empty, exceeds the limit, or the current
   version code has already been archived.
4. After a successful build, the notes are written to
   `releases/<versionCode>_<version>/android/<locale>/changelogs/<versionCode>.txt`.
   This layout can be copied directly into Fastlane Play Store metadata.
5. Only then are the pending files cleared for the next release. A failed or
   cancelled build leaves them untouched.

The archive uses `PlayerSettings.Android.bundleVersionCode` and
`PlayerSettings.bundleVersion`, so increment the version code before rebuilding a
new release.
