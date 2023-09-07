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

    public void InitTemporaryUpgrades()
    {
        foreach (var upgrade in TemporaryUpgrades)
        {
            TemporaryUpgradeManager.Instance.TemporaryUpgradeCounts[upgrade.Title]= PersistentUpgradeManager.Instance.PersistentUpgradeCounts[upgrade.Title];
            upgrade.Init();
        }
    }
}