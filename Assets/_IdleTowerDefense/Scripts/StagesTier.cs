using System;
using System.Linq;
using UnityEngine;

[Serializable]
public class StagesTier
{
    public int enemiesKilledToStartStage;
    public float enemySpawnRate;
    public int enemySpawnCount;
    [Range(0, 1)]
    public float[] _enemyChances;

    public StagesTier(int size)
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