# Aseprite MCP — pixel-native authoring

Configured on this Windows host on 2026-10-04. This is an editing tool, not an image-generation model. Use it when the user requests Aseprite pixel-art authoring or native frame edits. Other bitmap-generation requests retain the repository's ImageGen rules.

## Local setup

- Aseprite: `D:/Aseprite/Aseprite.exe`, version 1.3.9.2-x64.
- MCP source: `D:/Aseprite/mcp/aseprite-mcp` from https://github.com/Vollkorn-Games/aseprite-mcp.
- Installed revision: `28900e757d7e5c18515ad0a95558acde1865aad2`.
- Entry point: `D:/Aseprite/mcp/aseprite-mcp/build/index.js`.
- Codex server name: `aseprite`; configuration: `C:/Users/tente/.codex/config.toml`.
- Transport: local STDIO. No network listener, PixelLab credits, or additional image API key.
- The editor is invoked in batch mode; an open Aseprite window is not required and is not controlled.
- Node, pnpm and dependencies are installed only for the MCP server, not in the Unity project. Dependency lifecycle scripts were skipped; the reviewed server build was run explicitly.

Restart the `aseprite` MCP connection after changing its configuration. If this chat still lacks its tools, reload Codex or start a new turn after reconnecting. Configuration registration alone does not prove that tools were loaded into the current chat.

## Work boundary

Keep editable working documents under the existing feature directory, for example `Docs/Art/SkeletonArmored/AsepriteTrials/<descriptive-version>/`. Do not overwrite an approved PNG, `.meta` or runtime sprite. Use a new `.aseprite` document and explicit absolute paths. Remove rejected trials, temporary previews and one-off helpers when the task is complete and they are no longer needed; retain approved editable sources and required provenance. Do not auto-crop or scale a character to equalize padding: preserve its pixel grid, visible size and foot position.

The upstream server validates paths but is not a filesystem sandbox. Follow this boundary deliberately; do not use its tools to write unrelated files. Unity imports, texture pivots, prefabs and clips remain owned by Unity MCP.

## Authoring loop

1. Read the relevant character plan and inspect the approved reference, in-game size, palette, outline, view and light direction. Confirm source dimensions before copying.
2. Use `open_sprite` / `get_sprite_info` for read-only inspection and `save_sprite` with a new `outputPath` to create an editable `.aseprite` copy. Never omit `outputPath` when copying an approved source.
3. Retain a reference layer. Edit the character on separate layers where useful: skull/helmet, torso, limbs and weapon. Do not paste a motionless head across an animation to conceal generated facial inconsistencies.
4. Use `get_canvas`, `get_pixels`, `draw_grid`, `draw_pixels`, selections and cel operations for focused native pixel edits. Batch cohesive edits; avoid hundreds of single-pixel round trips. Coordinates are zero-based from top-left; frames and layers are one-based.
5. Keep the skull rigid, sockets hollow and axe identity consistent. The head may turn with the body; do not introduce blinking, pupils, facial expressions, extra limbs, involuntary foot lifts or baked slash trails.
6. For an attack, establish readable wind-up, impact and recovery keyframes first. Return to the actual starting pose without a forward/backward jerk; then add in-betweens. Do not infer quality from uniform GIF delays or a closed first/last frame alone.
7. After each meaningful edit, call `render_sprite` at 1x and integer nearest-neighbor scale. Use `allFrames` to compare silhouettes and a region/grid for small errors; inspect the complete exported animation for motion and timing.
8. Check every frame for clipped limbs, extra pieces, eye changes, weapon switches, strays, transparent fringes and foot drift. Compare both opaque pixels and alpha; transparent RGB noise is not motion.
9. Export review PNGs/GIF and a spritesheet with layout metadata. Keep canvas/cell dimensions and frame order deterministic. Record changed frames and remaining defects in the feature plan. A preview is a candidate, not player-visible acceptance.
10. Integrate only when requested, via Unity MCP, preserving GUIDs/metas and central pivots. Validate the real game-scale result separately.

## Installation checks

The upstream build completed. Five selected test files passed, 53/53 tests total: unit utilities, MCP STDIO/HTTP transport, vision/pixel round trips, frame operations and exports. Their negative-case error messages are expected assertions, not failed installation checks.

These checks establish working tooling, not a finished skeleton animation. Existing game art was not modified during installation.

A separate smoke client loaded the actual `aseprite` entry from Codex configuration and completed a STDIO handshake with 65 exposed tools (tilemap tools excluded). It opened and rendered the approved 96×96 skeleton read-only, drew/read six test pixels in an isolated 8×8 document, duplicated a frame, exported PNG/GIF and returned an all-frame preview. The approved source SHA-256 was unchanged. Reference and test previews were inspected.

Verification script: `D:/Aseprite/mcp/verification/smoke.mjs`; report and non-production samples: `D:/Aseprite/mcp/verification/run-nVYNAZ/report.json`. Config backup: `C:/Users/tente/.codex/config.toml.backup-aseprite-20261004`. Existing configuration lines were preserved; only the Aseprite entry was added. These paths are host-specific, not files to import into Unity.
