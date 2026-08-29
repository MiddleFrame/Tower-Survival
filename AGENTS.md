# The Lone Tower — repository instructions

This is a Unity mobile game project. Preserve player data, serialized references, asset GUIDs, and any unrelated user work already present in the worktree.

## Project context

- Unity: `6000.3.10f1`.
- Rendering: Universal Render Pipeline (`com.unity.render-pipelines.universal` 17.3.0), 2D-oriented project.
- Input: legacy Unity Input Manager (`activeInputHandler: 0`). Do not introduce the new Input System unless the task explicitly requires a migration.
- First-party game content: `Assets/_IdleTowerDefense/`.
- Runtime code: primarily `Assets/_IdleTowerDefense/Scripts/`.
- Editor tooling: `Assets/_IdleTowerDefense/Editor/` and editor-only folders under tests/tools.
- Tests: `Assets/_IdleTowerDefense/Tests/`; test policy and commands are in `Docs/Testing.md`.
- Enabled player scenes, in order: `Assets/_IdleTowerDefense/Scenes/Menu.unity`, then `Assets/_IdleTowerDefense/Scenes/Game.unity`.
- Product direction: `README.md`; balance findings: `Docs/BalanceAudit.md`; optimization work: `Docs/OptimizationBacklog.md`.
- The repository may already contain extensive user or third-party changes. Never discard, overwrite, stage, commit, or reformat unrelated changes.

## Tool ownership and MCP

- Use the specialized tool that owns the artifact or state.
- When a Unity MCP server is available, use it for scenes, GameObjects, components, prefabs, ScriptableObjects, materials, shaders, textures, animation, UI, project settings, packages, Console, Play Mode, tests, profiling, and builds.
- At the start of Unity-owned work, confirm that MCP is connected to this exact project. If no matching Unity session exists, do not silently use another Editor instance. Continue with safe repository-only work when possible and clearly report which Unity validation remains.
- Inspect the active scene, dirty state, relevant hierarchy/components/assets, compilation state, and Console before modifying Unity-owned state.
- Before changing a scene, establish whether it has unsaved user changes. Never save unrelated dirty scenes or assets without permission.
- Prefer focused MCP operations over arbitrary editor-code execution. Batch repetitive independent operations when safe.
- Use repository editing tools for C#, Markdown, JSON, and other plain-text source files, then validate their Unity impact through Unity MCP when available.
- Do not hand-edit Unity-serialized YAML (`.unity`, `.prefab`, `.asset`, `.mat`, animator/controller files) unless the user explicitly requests it or MCP is unavailable and the change can be made safely with full understanding of serialization.
- Never create, modify, move, or delete Unity objects merely to inspect the project.
- Never edit generated `.csproj`, `.sln`, `obj/`, `Library/`, `Logs/`, `Temp/`, build outputs, or other generated state.

## Architecture and implementation

- Preserve the established architecture, naming, folders, serialization, and code style unless the task explicitly changes them.
- Search for existing implementations and usages before adding types, managers, services, models, events, or public APIs.
- Organize code by cohesive feature and ownership boundary, not one global Managers, Controllers, or Utils bucket.
- Introduce an assembly definition only for a real compile-time, platform, or ownership boundary. Keep references minimal and prevent circular dependencies.
- Runtime assemblies must not use `UnityEditor`; editor code belongs in an `Editor` folder or editor-only assembly.
- Prefer small cohesive types with one reason to change. Split types that mix domain rules, Unity lifecycle, persistence, input, presentation, and unrelated ownership, but do not create trivial wrapper layers.
- Keep simulation/domain logic in plain C# where practical. Treat `MonoBehaviour` as a Unity adapter and lifecycle owner rather than the default location for every rule.
- Plain C# collaborators do not need individual GameObjects. Avoid god objects and scene roots containing unrelated systems.
- Keep public APIs narrow, use the least-visible access level, and expose immutable/read-only state where practical.
- Extend the established dependency mechanism. Do not introduce a DI framework, global service locator, ECS replacement, or new message bus without a measured need and explicit scope.
- The project already uses Leopotam EcsLite in parts of gameplay. Do not force unrelated features into ECS or create a second ECS architecture.
- Use ScriptableObjects for authored configuration/catalog data, not hidden mutable global runtime state.
- Preserve serialized field names. If a serialized rename is required, use Unity migration attributes and verify existing assets/scenes retain values.
- Match event, coroutine, async, and object lifetimes; unsubscribe or cancel when the owner is disabled/destroyed. Handle Unity destroyed-object semantics safely.
- Cache stable references. Avoid repeated scene searches, `GetComponent`, `Resources.Load`, allocations, or unbounded work in `Update`, `LateUpdate`, and `FixedUpdate`.
- Use `deltaTime` for frame-based motion and fixed time for physics. Do not drive dynamic Rigidbody objects through `Transform` unless the established design deliberately does so.
- Use prefab-aware changes and preserve prefab links. Move/rename assets through Unity-aware operations so `.meta` files and GUIDs remain valid. Never casually delete or regenerate `.meta` files.
- Do not leave temporary objects, debug components, generated test scenes, helper scripts, or experimental assets in production folders.

## UI and localization

- Preserve the project's existing uGUI/UI conventions and target mobile layouts.
- Keep game/domain rules out of views and button callbacks; separate references, presentation state/commands, and domain behavior.
- For UI changes, verify Canvas mode/scaler, anchors, pivots, safe areas, sorting, navigation/focus, touch targets, and representative phone/tablet aspect ratios.
- Keep player-facing text in the established localization catalog. Do not hard-code a new language switch or introduce a second localization system.
- Do not communicate important state only through color.

## 2D art, textures, and ImageGen

- For newly generated or materially edited bitmap art, use the available `imagegen` skill/tool (ImageGen plugin capability). Do not approximate requested art with procedural Python drawing, HTML/canvas, or an unrelated image service.
- Do not use ImageGen for existing SVG/vector/code-native assets or for a tiny edit better performed in the asset's native format.
- Before generating, inspect the relevant in-game references: neighboring sprites, palette, outline weight, lighting direction, camera scale, intended UI/world use, and target pixel dimensions. Match the established visual language rather than inventing a second style.
- State a concrete asset brief in the generation prompt: subject, view/projection, composition, silhouette, palette, material, lighting, background/alpha requirement, intended crop, and forbidden elements. For variants, keep camera, scale, lighting, and palette stable.
- For gameplay sprites and icons, request a clean isolated subject, deliberate readable silhouette, adequate padding, no text, no watermark, no mockup frame, no unintended props, and transparent background when appropriate.
- For tileable ground/wall textures, explicitly require seamless edges, even illumination, no focal object, no baked perspective, and no edge vignette. Visually test the result in a repeated grid before acceptance.
- Do not claim exact pixel art merely because an image is low resolution. If pixel art is required, verify a consistent pixel grid, hard edges, restrained palette, no anti-aliased fringe, and readability at actual in-game size.
- Do not bake lighting, drop shadows, UI labels, damage states, selection outlines, or effects into a base sprite unless the design explicitly requires them. Prefer Unity-side presentation for reusable state.
- Generation is an input, not automatic acceptance. Inspect every output at 100% and at in-game size for anatomy/geometry errors, stray marks, halos, accidental transparency, inconsistent lighting, illegible detail, seams, and style mismatch. Regenerate or edit instead of shipping a visibly flawed asset.
- Keep source/reference images and licenses/provenance when required. Never imitate a living artist by name or import assets whose usage rights are unclear.
- Use descriptive production filenames; do not keep names such as `output.png`, `imagegen_1.png`, or chat-download timestamps. Put assets in the narrowest existing feature folder and avoid parallel duplicate art folders.
- Import through Unity-aware operations. Configure `TextureImporter` deliberately: Sprite texture type for sprites, Single/Multiple mode as appropriate, pixels-per-unit consistent with neighboring assets, correct pivot/border, alpha transparency, wrap/filter mode, mipmaps, compression, max size, and platform overrides.
- Use Point filtering and disabled mipmaps only for assets that are truly pixel art or require exact texels. Use Bilinear/mipmaps for smoothly scaled art where appropriate. Do not force power-of-two dimensions unless the runtime use, compression format, tiling, or platform constraint benefits from it.
- For sprite sheets, keep cell dimensions and spacing consistent, slice deterministically, verify animation order, and inspect every frame for jitter and clipping.
- After import, verify the asset in the actual scene/prefab and Game view, including scale, camera zoom, UI scaling, color space, material/shader, transparency, atlas behavior, memory/import size, and Android appearance. A standalone PNG preview is not sufficient validation.
- Never overwrite an existing source texture or its `.meta` file unless replacement is explicitly intended and all consumers have been inspected. Prefer a new clearly named variant when compatibility is uncertain.

## Performance and low-level code

- Measure before claiming or implementing an optimization.
- Start with readable hot loops, cached references, pooling, bounded work, batching, appropriate simulation levels, and reduced overdraw/texture memory.
- Treat Jobs, Burst, native collections, unsafe memory, SIMD, and custom allocators as targeted optimizations, not default architecture.
- Isolate low-level implementations behind small boundaries and define ownership/disposal explicitly. Retain a deterministic managed/testable path when practical.
- Record profiler or benchmark evidence, tested hardware/settings, and before/after results for performance work.

## Code clarity and edit discipline

- Prefer self-explanatory names, cohesive methods, explicit boundary types, and straightforward control flow.
- Comments should explain non-obvious intent, invariants, units, ownership/threading, platform constraints, measured performance decisions, external formats, or deliberate workarounds—not narrate the code.
- Avoid banner comments, commented-out code, changelog comments, ownerless TODOs, and clever one-liners written merely to shorten code.
- Make the smallest coherent edit. Avoid whole-file rewrites, unrelated formatting, member reordering, and line-ending churn.
- Inspect the exact target before position-sensitive edits.

## Validation loop

After every code, gameplay, scene, prefab, asset, package, build-setting, or project-setting change:

1. Trigger or allow Unity refresh and wait for compilation/domain reload.
2. Read Console errors/exceptions first, then relevant warnings.
3. Fix every error or exception caused by the change.
4. Run the smallest relevant Edit Mode or Play Mode tests described in `Docs/Testing.md`.
5. Enter Play Mode when runtime behavior must be verified; exit afterward unless the user asks to leave it running.
6. Inspect resulting hierarchy, components, serialized values, and runtime state through Unity MCP when connected.
7. For visual, UI, camera, animation, physics, collider, transform, or texture work, inspect Scene and Game views at representative resolutions.
8. For performance work, capture comparable measurements before and after.
9. Repeat until requested behavior and relevant edge cases pass.

A clean Console is necessary but not sufficient. Do not claim a feature works until its behavior is validated. If Unity/MCP or a required environment is unavailable, report exactly what was checked and what remains instead of guessing.

## Tests and builds

- `Tools > Idle Tower Defense > Project Health` is the primary in-Editor health entry point. Follow `Docs/Testing.md` for Fast, BuildRequired, DataValidation, Balance, Edit Mode, and Play Mode checks.
- Add focused Edit Mode tests for deterministic logic and Play Mode tests for scene/lifecycle behavior when warranted. Keep tests deterministic and independent of execution order.
- Test first-party boundaries around external SDKs rather than stable third-party internals.
- When changes affect scene inclusion, stripping, platform APIs, shaders, packages, Addressables/assets, or Android integration, run the smallest relevant build validation.
- For releases use `Tools > Idle Tower Defense > Build > Verified Android Build`; do not bypass its required checks.
- Do not change active platform, quality settings, signing, or project-wide settings unless the task requires it.

## Google Play release notes

Whenever a task makes a player-visible change, update every locale file in `ReleaseNotes/pending/` as part of the same task. Write concise, natural player-facing copy rather than implementation details, and keep each complete file within Google Play's 500-character limit.

Do not add release notes for tests, refactors, tooling, documentation, or other player-invisible work. The verified Android build archives and clears pending notes after a successful build; never clear, move, or archive them manually.

## Git and reporting

- Never stage, commit, push, create a branch, or open a pull request unless the user asks for it.
- If asked to commit, include only the intended task changes and its required release-note/documentation updates. Inspect staged filenames and diff before committing; never include transient/generated content or unrelated work.
- Never use destructive reset/checkout commands to clean a dirty worktree without explicit authorization.
- Lead the final report with the outcome. Summarize files and Unity objects changed, then compilation, Console, tests, Play Mode/visual inspection, profiling, and builds as applicable.
- Mention remaining risks, pre-existing blockers, unavailable validation, and any manual steps concisely.
