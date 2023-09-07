using System.Linq;
using UnityEngine;
using Random = UnityEngine.Random;

[CreateAssetMenu(fileName = "New Enemy Spawn Settings", menuName = "Idle Tower Defense/Enemy Spawn Settings")]
public class EnemySpawnSettings : ScriptableObject
{
    public float EnemySpawnDelayMultiplier = 0.95f;
    public float EnemyHealthMultiplier = 1.01f;
    public float EnemyDamageMultiplier = 1.01f;

    public float OreMultiplier;
    public int RecordToOpen;
    public EnemyList _enemyList;

    public EnemyListChance[] _enemyListChanceStages;
    public EnemyStartStats[] _stats;

    private void Awake()
    {
        Debug.Log("Create Enemy Spawn Setting");
        _enemyListChanceStages = new EnemyListChance[1];
        _enemyListChanceStages[0] = new EnemyListChance(_enemyList.EnemySpawns.Count);
        _stats = new EnemyStartStats[_enemyList.EnemySpawns.Count];
    }
   

    public EnemyView GetRandomEnemy(int stage)
    {
        float rand = Random.value;
        for (int i = 0; i < _enemyList.EnemySpawns.Count; i++)
        {
            rand -= _enemyListChanceStages[stage]._enemyChances[i];
            if (rand <= 0)
            {
                return _enemyList.EnemySpawns[i];
            }
        }

        // We should only reach this point if a floating point issue occured, I think, so return the last entry
        return _enemyList.EnemySpawns[^1];
    }

}