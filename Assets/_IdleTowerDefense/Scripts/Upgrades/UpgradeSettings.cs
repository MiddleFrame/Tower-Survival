using System.Collections;
using System.Collections.Generic;
using Leopotam.EcsLite;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "New Upgrade Settings", menuName = "Idle Tower Defense/Upgrade Settings")]
public class UpgradeSettings : ScriptableObject
{
    public List<TemporaryUpgradeBase> TemporaryUpgrades = new List<TemporaryUpgradeBase>();
    public List<PersistentUpgradeBase> PersistentUpgrades = new List<PersistentUpgradeBase>();
    public List<NextGrade> NextGrades = new List<NextGrade>();

    public void InitTemporaryUpgrades(IEcsSystems system)
    {
        foreach (var upgrade in TemporaryUpgrades)
        {
            upgrade.Init(system);
        }
    }
}