# Architecture and gameplay direction

Audit date: 2026-08-22. Scope: first-party runtime code, ECS combat loop, scene/bootstrap ownership, mutable runtime data, save identifiers, hot paths, and the current upgrade loop.

## Current architecture verdict

The project is a workable hybrid: EcsLite owns short-lived combat entities, while MonoBehaviours own views, physics callbacks, UI, SDKs, and scene lifecycle. That is appropriate for a mobile tower game of the current scale. Replacing everything with ECS, Jobs, Burst, or a DI framework would add complexity without measured value.

The main problem is not the chosen pattern but unclear state ownership. Authored `GameSettings` data, per-run state, global player state, view references, and UI callbacks currently cross boundaries through statics and ScriptableObjects. This makes direct scene testing, reliable resets, offline simulation, and future automation mechanics harder than necessary.

## Findings and priorities

### Priority 1 — lifecycle and data safety

- `Singleton<T>.Instance` silently creates a new GameObject and component when the expected scene object is absent. A generated `DataController` or `TemporaryUpgradeManager` has none of its serialized references, so an ordering error becomes a later null reference. Replace auto-creation with explicit scene bootstrap and a non-creating `TryGet` path.
- `InitData.sharedData` is initialized by the Menu scene and consumed by the Game scene. Starting Game directly is therefore not a supported lifecycle even though it is a normal Unity workflow. Move app/session initialization to one persistent bootstrap object or let each scene receive an explicit session context.
- Temporary upgrade ScriptableObjects retain ECS worlds, filters, and delegates. Authored assets should remain configuration; create per-run upgrade state/commands that refer to immutable upgrade IDs.
- Save dictionaries use `upgrade.Title` as identity. Display text is changeable and localized; add an immutable serialized `UpgradeId`, migrate existing title keys once, and save only by ID.
- SDK owners such as IAP should unsubscribe or dispose callbacks when their lifetime ends, even if the intended object normally persists for the whole process.

### Priority 2 — ECS boundaries

- Raw ECS integer identities must not escape a frame or be stored by views. EcsLite can recycle the integer after deletion. Persistent references should use `EcsPackedEntity` and unpack immediately before access.
- Add explicit event/request components for cross-boundary actions: `DamageRequest`, `CombatCommand`, `RewardGranted`, and `RunEnded`. Systems consume them; views and SDK callbacks only enqueue them.
- Split simulation data from presentation links when headless/offline simulation becomes a requirement. `Health`, `Movement`, `Enemy`, and `Projectile` currently contain `Slider`, `Transform`, `Animator`, view, and delegate references. This is acceptable now, but a deterministic simulator should operate on plain numeric components and a separate view-sync layer.
- Keep one EcsLite world for combat. There is no measured reason to introduce a second ECS, Jobs/Burst, or native collections yet.

### Priority 3 — hot paths

- Cache pools and filters in system initialization.
- Reuse target/candidate buffers and avoid LINQ in combat `Run` methods.
- Prefer squared distance comparisons over `magnitude` in per-entity loops.
- Update UI from dirty/event state rather than every frame once profiling shows UI cost. Health regeneration currently means the tower can legitimately change every frame; enemies generally do not.
- Pool remaining combat feedback objects such as currency-drop text if profiling shows recurring allocation or instantiate spikes.
- Measure on the target Android device before adopting lower-level optimizations.

## Refactoring completed in this audit

- Tower targets are stored as generation-safe `EcsPackedEntity` handles.
- Target selection excludes entities already marked for destruction, reuses lists/buffers, caches ECS pools, uses squared distances, and has a stable comparison result.
- Firing unpacks targets immediately before access and does not spend cooldown or play audio when no valid projectile can be created.
- Enemy and projectile views validate packed handles before reading ECS components.
- A projectile ignores an enemy already dead or pending destruction, preventing duplicate kill callbacks and rewards.
- Runtime spawn radius and runtime currency objects no longer mutate authored `GameSettings` data.

## Recommended gameplay direction: programmable defense

The central progression should be the automation of decisions, not the automation of button pressing. The player first performs useful tactical actions manually, then earns the ability to encode those same decisions into the pre-battle build.

### The three layers of a build

1. **Hardware** — weapon, reactor, shield, drone bay, cooling. These define capabilities and trade-offs rather than only increasing damage.
2. **Doctrine** — target priority, resource policy, reserve threshold, and threat response. Examples: prioritize fast enemies outside the inner ring; reserve 30% energy for shields; collect ore only while tower health is above 70%.
3. **Protocols** — condition/action pairs. Examples: `if 5 enemies enter one sector -> shock pulse`; `if an armored enemy is marked -> overcharge`; `if scrap appears outside weapon range -> send collector drone`.

Every automatic protocol occupies a logic slot and consumes reactor power or bandwidth. A strong automation build therefore sacrifices some raw combat power. This prevents automation from becoming a universally correct upgrade.

### Attention curve

- Early game: three manual commands recharge or become relevant every 10–30 seconds: mark priority target, dispatch collector drone, vent/overcharge one subsystem.
- Mid game: unlock one or two protocol slots. The player automates the most repetitive command and intervenes roughly every 30–90 seconds for exceptions.
- Late game: a complete doctrine handles routine threats. The player checks the run every few minutes, changes priority for a boss/wave, or lets the same build drive offline progress.

Automation must remove an entire class of interaction. Merely increasing a cooldown from 20 to 60 seconds still leaves the same chore and does not feel like progression.

### Battle flow without in-battle stat upgrades

- Before battle, show an imperfect but useful threat forecast: enemy tags, dominant directions, armor distribution, and resource opportunities.
- During battle, enemies and resource events feed the conditions configured in the doctrine. No level-up popup interrupts combat.
- Battle rewards are parts, protocol chips, research data, and calibration results. They expand the next build rather than offering temporary `+10% damage` choices mid-run.
- After battle, show why the build worked or failed: damage by module, energy starvation time, ignored resource value, protocol activations, leaks by enemy tag. The next meaningful action is editing the build.

### Good manual commands for this game

- **Target mark:** meaningful against healers, bomb carriers, tanks, or resource enemies; later automated by target-priority rules.
- **Collector dispatch:** click a dropped resource or choose a sector; later automated by value/risk thresholds.
- **Power reroute:** temporarily move reactor output among weapon, shield, and repair; later automated by reserve policies.
- **Heat vent:** choose when to pause a high-output weapon; later automated by heat thresholds.
- **Directional barrier or decoy:** responds to the geometry of a central tower and cannot be reduced to generic spell spam.

Avoid several low-cooldown damage spells. They turn the game into a weak action game and make later automation feel like the game is playing itself rather than executing the player's plan.

## Smallest useful prototype

Build one vertical slice before replacing the existing upgrade loop:

1. Add one manual command: `Mark Target`, with a 15–20 second charge.
2. Add two target doctrines: `Nearest` and `Marked First`.
3. Add one automation protocol: `Automatically mark the first Ranged enemy while no target is marked`.
4. Give automation a visible cost, such as one reactor unit or one of two logic slots.
5. Run five short battles and measure command interval, missed commands, time looking at the screen, build-edit time, and whether the player can explain why one doctrine won.

Architecturally, manual input and automation should enqueue the same `CombatCommand`. A plain-C# policy evaluates a read-only `ThreatSnapshot`; a small MonoBehaviour presents buttons; an ECS system applies the command. This keeps game rules testable and makes future offline simulation use the same build logic.
