# Balance Lab

Open `Tools > Idle Tower Defense > Balance Lab`.

1. Create a scenario with `Assets > Create > Idle Tower Defense > Balance Lab > Scenario`, then assign `Game Settings`.
2. Keep production values in the referenced game assets. Put experimental multipliers, permanent starting levels and the temporary-upgrade purchase order in the scenario.
3. Run one scenario or every scenario in the project. Reports are written to the project-level `BalanceReports` directory as CSV and JSON.
4. `Export exact curves` writes the current spawn curve and every temporary/persistent upgrade cost curve without simulating player skill.

## Population simulation

Assign `Current Population` in the lower section of the Balance Lab window and press `Run player population`.

Each virtual player is sampled from weighted behavioral cohorts (economist, saver, cheapest-first, attack, defence and improviser). A journey contains multiple days and sessions and persists Ore, Gold, permanent upgrades, page unlocks, tier records and mine state. Combat efficiency, daily activity, rewarded-ad use and purchase decisions vary per player.

Population reports contain:

- player-level final state and complete upgrade distribution;
- one row per journey checkpoint for plotting progression over time;
- cohort comparison;
- P10/P50/P90 results and tier reach rates;
- full JSON data for later analysis.

Increasing player count reduces sampling noise but does not make incorrect archetype assumptions more accurate. Update archetype weights and ranges from real analytics when enough data exists.

The combat runner is deliberately separate from the exact curve export. It reproduces the current spawn order, stage thresholds, per-event HP/damage multiplication, enemy selection, ore chance, escalating scrap drop, fixed tower formulas and automatic temporary purchases. Projectile travel, exact Animator clip timing and ECS frame ordering remain assumptions exposed on the scenario.

Recommended workflow: duplicate a scenario, change one group of inputs, run all scenarios, and compare the generated batch CSV. Do not tune production ScriptableObjects until a scenario is worth playtesting.
