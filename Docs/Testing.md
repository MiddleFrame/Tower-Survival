# Tests

The main entry point is `Tools > Idle Tower Defense > Project Health`. It shows the last result, failed assertions, duration, and whether the result is outdated. A compact status badge also appears in the Scene view.

Fast tests run automatically after each successful script compilation. Entering Play Mode is blocked while that result is failed or outdated; both behaviors can be switched in the Project Health window.

Every ordinary Unity player build runs the `BuildRequired` gate and also requires a current passing Play Mode result. It is cancelled when an assertion fails or the runtime result is outdated. For a release use `Tools > Idle Tower Defense > Build > Verified Android Build`: it runs the required Edit Mode contracts, two Play Mode runtime smoke tests, and only then creates the APK/AAB.

The standard runner remains available through `Window > General > Test Runner` or from the Project Health window.

## Categories

- `Fast`: pure combat rules suitable for running after every script compilation.
- `BuildRequired`: contracts that must pass before a build is allowed.
- `DataValidation`: production ScriptableObject and animation/prefab integrity.
- `Balance`: deterministic simulator checks; useful before balance changes and verified builds.

Play Mode smoke tests verify that the runtime advances frames, enabled build scenes are loadable, and the localization catalog is included in the player. Their assembly is marked as a test assembly and is not included in the release.

Current tests protect deliberately changeable and high-impact contracts rather than external SDK behavior:

- tower damage and attack cooldown formulas;
- fixed ranged-enemy distance;
- enemy damage initialization;
- barrel one-shot configuration and the final-frame animation damage event;
- enemy stage ordering, probabilities, spawn values and stat-array consistency;
- tier unlock ordering;
- matching temporary/persistent upgrade identities and limits;
- positive, non-decreasing upgrade and page-unlock costs;
- valid player-cohort input;
- deterministic population simulation and non-mutation of production settings.

Negative contracts additionally verify that:

- missing, insufficient, or malformed currency costs cannot change a balance;
- rejected mine upgrades change neither level nor currency, while an exact balance charges the displayed current-level price;
- upgrade levels at or beyond the maximum stay completed and their buttons cannot remain interactable;
- repeated animation events queue at most one pending hit and destroyed enemies cannot queue damage;
- initializing enemy damage does not itself damage the tower;
- missing localization keys remain visible, unknown source text is preserved, and selecting the active language emits no duplicate event.

Command-line EditMode run:

```powershell
Unity.exe -batchmode -nographics `
  -projectPath "C:\Users\tente\Desktop\The-Lone-Tower-main" `
  -runTests -testPlatform EditMode `
  -testResults "C:\Users\tente\Desktop\The-Lone-Tower-main\TestResults\editmode.xml" `
  -logFile "C:\Users\tente\Desktop\The-Lone-Tower-main\TestResults\editmode.log"
```

Do not add tests for stable third-party implementation details. Test our boundary when the game grants a reward, saves a purchase, or reacts to an SDK result; mock the SDK itself.
