using System;
using System.Linq;
using UnityEngine;

[Serializable]
public class EnemyListChance
{
    public int enemiesKilledToStartStage;
    [Range(0, 1)]
    public float[] _enemyChances;

    public EnemyListChance(int size)
    {
        _enemyChances = new float[size];
    }
    public void NormalizeEntries()
    {
        Debug.Log($"{nameof(EnemySpawnSettings)}.{nameof(NormalizeEntries)}()");
        float sum = _enemyChances.Sum();

        float[] newList = _enemyChances.Select(enemySpawnEntry => enemySpawnEntry / sum).ToArray();

        _enemyChances = newList;
    }
}