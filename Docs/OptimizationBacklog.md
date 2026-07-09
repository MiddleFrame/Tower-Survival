# Optimization Backlog

## Done in this pass

- Enabled Android release minify in `ProjectSettings/ProjectSettings.asset`.
- Changed long music/theme clips in `Assets/_IdleTowerDefense/Sound/Themes` to streaming, background loading, no preload, Vorbis quality `0.5`.
- Removed runtime object searches from UI/light scripts where practical.
- Added explicit DI path for day/night lighting: `World -> SharedData -> EnemySpawnSystem -> EnemyView -> LocalLightController`.
- Removed duplicated `DestroySystem` registration in `World`.
- Added cached component lookup in `GameplayViewPools` for generic pooled spawns.
- Moved touched UI scripts to `Assets/_IdleTowerDefense/Scripts/UI` with their `.meta` files preserved.

## Manual Inspector Wiring

- `Game` scene: assign `World._dayNightController`.
- `LocalLightController`: assign `light2D`; for scene objects also assign `dayNightController`.
- Enemy prefabs with local lights: assign `EnemyView.localLights`; the scene `DayNightController` is injected at spawn time.
- `UIElementSound`: no mass wiring is required. Per-button `clickSFX` remains optional; default `Sound Setting` and `UI/UI Audio` are resolved once and cached.
- `Settings`: assign `_saveMusic` and `_saveSound` from the corresponding slider objects.
- `SaveOnUpHandler`: assign `slider`.
- `HorizontalSelector`: assign `_label`, `_selectorAnimator`, `indicatorParent`, and `indicatorPrefab`.
- `Indicator Item.prefab`: add `HorizontalSelectorIndicator` and assign its `onState` / `offState` objects.
- `AdjustGridLayoutCellSize`: assign `grid`.

## Build Size Work

- Move `Assets/_IdleTowerDefense/PixelPacket/tiny_swords.7z` outside `Assets` if it is only source/reference material. It is 6.25 MB in the project.
- Rename or move `Assets/_IdleTowerDefense/PixelPacket/tiny_swords/Resources`; Unity includes every `Resources` folder in builds. Current size is about 0.63 MB.
- Remove or move demo/sample/documentation assets outside `Assets` when they are not needed in player builds.
- Review Android texture import settings:
  - 1150 texture metas under `_IdleTowerDefense`.
  - 409 are explicitly uncompressed.
  - 1150 allow max size `2048+`.
  - 0 have mipmaps enabled, which is good for 2D/UI.
- For pixel/UI textures, prefer platform overrides with ASTC/ETC2 and realistic max size (`256`, `512`, `1024` depending on visible size).
- For pixel art where compression artifacts are visible, keep critical sprites uncompressed but atlas them and lower max size first.
- Generate a Unity Build Report after reimport; use it to target the actual largest included assets instead of optimizing unused source files.

## Code Organization Work

- Move gameplay root scripts from `Assets/_IdleTowerDefense/Scripts` into feature folders:
  - `Core`: `World`, `SharedData`, `InitData`, `DataController`, settings/save keys.
  - `Gameplay`: ECS components and systems.
  - `Views`: tower/enemy/projectile/view pools.
  - `UI`: menus, settings, display widgets, selectors, UI sound.
  - `Audio`: sound manager and audio-specific behaviours.
  - `Village`: current village scripts.
  - `Upgrades`: persistent and temporary upgrades.
- Keep third-party assets in clearly isolated folders and avoid editing them unless needed.
- Add assembly definitions later, after folder cleanup, so game code and editor-only code compile separately.

## Remaining DI / Lookup Work

- Replace remaining singleton/static access in gameplay flows where it affects testing or lifecycle (`DataController.Instance`, static upgrade flags, static shared data).
- Turn frequently used scene references into serialized dependencies on root controllers.
- For prefab internals with multiple child components, create small view classes like `HorizontalSelectorIndicator` instead of child-name lookups.
- Keep editor-only `Reset` / `OnValidate` helpers for auto-wiring, but require runtime fields to be serialized or injected.

## TODO Comment Audit

No `TODO`, `FIXME`, `HACK`, or `XXX` comments were found in the project code during this pass.
