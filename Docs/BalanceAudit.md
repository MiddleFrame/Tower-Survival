# Balance audit — current implementation

This is a map of the production balance sources as of 2026-08-01. It is deliberately descriptive: `BalanceScenario` overrides are experiments and do not modify these values.

## Sources of truth

| Area | Production source | Current formula / behavior |
|---|---|---|
| Tower base stats | `ScriptableObjects/Game Settings.asset` | damage 1, cooldown 2 s, targets 2, range 2, health 50, regeneration 0 |
| Tower damage | `TowerWeapon.cs` | `baseDamage * 1.15^levels + 0.6 * levels` |
| Tower cooldown | `TowerWeapon.cs` + Attack Speed asset | `2 - 0.06 * levels`; production code has no lower clamp |
| Temporary costs | each temporary upgrade asset | `floor((temporaryLevel + 1) * costUpgradeMultiplier)` Scrap |
| Permanent costs | each persistent upgrade asset | `floor(baseCost * exponent^level + additional * level)` Ore |
| Enemy tiers | `Tier 1.asset` … `Tier 4.asset` | base enemy stats, stage thresholds, group size, interval and type probabilities |
| Enemy scaling | each tier asset + `EnemySpawnSystem.cs` | HP and damage multipliers are applied once after every spawn event, not once per enemy |
| Scrap drop | `EnemySpawnSystem.cs` | per spawned enemy multiplier grows by `1.01`; integer truncation occurs when the enemy is created |
| Ore drop | `EnemySpawnSystem.cs` | 20% chance, `floor(tierOre * oreUpgradeMultiplier)` |
| Gold drop | `DestroySystem.cs` | every tenth kill, base 1 multiplied by Gold-per-10-kills level + 1 |
| Spawn distance | `TemporaryUpgradeManager.cs` | `towerRange * 1.2 + 5`, recalculated by the range upgrade initialization |
| Tier unlock | tier assets | record threshold (`RecordToOpen`) |
| Permanent page unlock | `Upgrade Settings.asset` | Gold arrays: Attack `[20,150]`, Defence `[50]`, Utility `[100]` |
| Mine | `Village/UI/Mine.cs` | purchase 2,000 Ore; production 5 Gold/h and 100 Ore/h per capacity; caps 20 Gold and 1,000 Ore per limit |
| IAP | `InAppInitializer.cs` | 500 / 2,000 / 5,000 Gold; ad-removal purchase grants 1,000 Gold |

## Current tier discontinuities

- Tier 1 base HP values are `0.9 / 5 / 1`; Tier 2 jumps to `100 / 500 / 100`.
- Tier 1 base damage values are `1 / 2 / 1`; Tier 2 uses `2000 / 400 / 200`.
- Tier 3 and Tier 4 reuse very similar stage probabilities, while base stats and event multipliers rise sharply.
- Tiers 2, 3 and 4 all currently use the same unlock record `1000`.

These may be intentional gates, but they need to be tested as discontinuities rather than treated as one smooth difficulty curve.

## Risks found before tuning

1. Mine capacity and limit upgrades check affordability at the old level, increment the level, then subtract the new-level price. The displayed/checked price can therefore differ from the amount charged.
2. Attack cooldown reaches zero at 34 levels (`2 / 0.06`) and becomes negative afterward. Production has no minimum cooldown.
3. Several temporary multipliers are `1.03` but costs are converted to `int`. Early upgrades therefore cost only 1 Scrap for a long sequence of levels; fractional growth is discarded.
4. Enemy HP/damage exponential growth is event-based. Increasing group size raises enemies per second without slowing exponential stat growth per event, so both axes rise together.
5. ScriptableObject `EnemySpawnRadius` is mutated at runtime when range is initialized/upgraded. Any future simulator must use the derived formula, not only the serialized value.

## Simulation boundary

The exact CSV exporter is authoritative for formulas and configured values. The Monte-Carlo combat model reproduces spawn ordering, random enemy selection, movement, tower fire, enemy attacks, rewards and automatic temporary spending. Exact projectile flight, Animator clip lengths and ECS frame order are represented by scenario assumptions and must be calibrated against telemetry or recorded real runs.

The population layer adds persistent Ore/Gold, permanent upgrade purchases, page unlocks, tier records, rewarded Ore, mine production and weighted player archetypes. Cohort behavior is synthetic until its weights and ranges are replaced with real analytics. More simulated players reduce random noise but cannot correct a wrong behavioral assumption.
