using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Game Settings", menuName = "Idle Tower Defense/Game Settings")]
public class GameSettings : ScriptableObject
{

    public List<Currency> currencies;
    
    [Header("Settings")]
    public EnemySpawnSettings[] EnemySpawnSettings;

    public UpgradeSettings UpgradeSettings;

    [Header("Prefabs")]
    public GameObject tower;

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

    public AudioClip shootingSound;
}