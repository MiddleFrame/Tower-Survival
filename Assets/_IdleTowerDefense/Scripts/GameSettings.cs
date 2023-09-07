using UnityEngine;

[CreateAssetMenu(fileName = "New Game Settings", menuName = "Idle Tower Defense/Game Settings")]
public class GameSettings : ScriptableObject
{
    [Header("Settings")]
    public EnemySpawnSettings[] EnemySpawnSettings;

    public UpgradeSettings UpgradeSettings;

    [Header("Prefabs")]
    public TowerView TowerView;

    public ProjectileView ProjectileView;
    public ProjectileView DynamiteView;

    [Header("Tower Starting Values")]
    public float TowerStartingAttackDamage = 1;

    public float TowerStartingAttackCooldown = 1;
    public int TowerStartingAttackTargets = 1;
    public float TowerStartingTargetingRange = 2;
    public float BaseMaxHealth = 50;
    public float BaseHealthRegeneration;

    [Header("Misc"),HideInInspector]
    public float EnemySpawnRadius = 6;

    public float InitialEnemySpawnDelay = 0.5f;
}