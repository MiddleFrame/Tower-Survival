# Local Addressables

Addressables are packaged with the player. There is no remote catalog, CDN, content download, cache clearing, or runtime catalog update. Every content change ships in a normal app update. `Addressables` 2.7.6 is pinned in `Packages/manifest.json`; the project uses the package's local build and load paths and builds content with the player.

## Current boundary

`Local_UI_SpellDetails` contains `SpellDetailCard.prefab`. The combat HUD loads it when the player opens spell details, destroys its instances when the panel closes, and releases its loading handle after Unity processes destruction. The closed panel has no card instances. The active spell buttons and the rest of the HUD remain directly referenced because they are needed immediately in combat.

Enemy tiers are also local Addressables. `GameSettings` holds addresses and small menu previews instead of direct tier/prefab references. `Local_Tiers_1` holds the first tier and its exclusive enemy, `Local_Tiers_2_3_4` holds the later tiers that use the same enemy set, and `Local_Enemies_Shared` holds enemies used by both sets. The menu shows preview numbers and enemy names without loading enemy prefabs. Before entering Game, `SceneTransitionController` loads the selected tier asynchronously; the gameplay `World` waits for that tier before creating ECS systems. Returning to Menu releases the tier after the Game scene is gone. Starting Game directly in the Editor loads its tier through the World owner.

`Tools > Idle Tower Defense > Addressables > Configure Enemy Tiers` regenerates previews and repacks tiers by identical enemy sets, keeping shared enemy prefabs in one group. Run it after editing tier data or adding enemies. BuildRequired validation checks that previews still match authored tier data and that Menu has no direct dependency on those tiers or their enemy prefabs.

`IAssetsLoader` owns asset acquisition and `AssetLease<T>` owns exactly one Addressables handle. Dispose every lease after its last instance is destroyed. Addressables already reference-counts shared dependencies; do not add a second global counter or call `Release` on a handle owned by another system. The first open is asynchronous, so the HUD must remain responsive while loading and report a load failure.

`Tools > Idle Tower Defense > Addressables > Configure Local Content` recreates the local UI group settings and migrates the HUD prefab through Unity's prefab APIs. It is idempotent. Run it after restoring the project if the Addressables settings are absent; do not hand-edit the generated group or prefab YAML.

## Rules for new content

1. Start with an ownership and lifetime map: who requests the content, when it becomes available, and which owner releases it. Only move content behind Addressables if it can be absent until requested and its direct references can be removed. Marking an asset addressable while a build scene or a directly included ScriptableObject still references it can duplicate it in the player.
2. Group by **co-loaded lifetime**, not by file type. A boss and its exclusive animation, audio, VFX, and UI can form one local group if they appear and leave together. Put assets shared by several such packs in a separate local shared group only after checking the Build Layout and duplicate-dependency analysis. Avoid one bundle per small asset; each loaded bundle adds overhead.
3. Use stable addresses and narrow labels. Examples: `bosses/<id>/prefab`, `locations/<id>/scene`, and `ui/<feature>/<asset>`. Labels identify intentional preload sets. Do not preload all locked tiers, future bosses, or all UI at startup. Preload a pack just before its known transition, and release it when the feature is no longer reachable and all pooled/live instances are gone.
4. Keep bootstrap, save data, localization, immediately visible menu UI, and assets required every frame directly available. Save IDs and unlock state, never bundle addresses as player progress. Authored ScriptableObject configuration may be addressable later, but its load must complete before systems read it; do not mutate production assets at runtime.
5. Before converting a scene, inventory every path that loads it (including first-run and retry), then move all paths through one scene loader. Keep the initial Menu scene in Build Settings. Remove a later scene from Build Settings only after its addressable transition, unload, failed-load path, and Play Mode smoke test work in a player build. A scene loader should own its scene handle and release it after leaving the scene.
6. Keep existing `GameplayViewPools` for frequently spawned enemies and projectiles. A pooled instance pins its prefab and dependencies while retained; trim or dispose pools at a feature/scene boundary before releasing a pack. Addressables is a content lifetime tool, not a replacement for pooling.
7. Keep group paths local and remote catalog disabled. Do not add an update/download/cache service for this offline design. Avoid `WaitForCompletion` on the main thread. Asset loading and optional preload should be asynchronous and outside combat hot loops.

## Validation for each new pack

Run Project Health's relevant Edit Mode and Play Mode checks, then build local Addressables content and inspect the Build Layout and `Check Duplicate Bundle Dependencies` analysis. Test cold start, first load, repeat load, exit/unload, and failure behavior on the target Android device. Compare Memory Profiler captures before and after the conversion at the same gameplay point, including peak, post-unload resident memory, frame time, and package size. Do not claim a memory or performance gain from the Addressables label alone.

For Editor validation of real bundles, run `Build Local Content`, then select `Test With Built Content` before Play Mode tests. Return to `Test With Asset Database` for normal editing. Player builds rebuild local Addressables content automatically.
