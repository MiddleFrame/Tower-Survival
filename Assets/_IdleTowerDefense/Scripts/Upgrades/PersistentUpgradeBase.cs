using UnityEngine;

[CreateAssetMenu(fileName = "New Persistent Upgrade", menuName = "Idle Tower Defense/Persistent Upgrades/Persistent")]
public class PersistentUpgradeBase : ScriptableObject
{
    [Header("Base Values")]
    public string Title = "Default Title";

    [Header("Upgrade Specific Values")]
    [SerializeField] private float baseCost = 1;
    [SerializeField] private float upgradeCostExponent = 1.1f;
    
    public int maxUpgradeCount;  
    public void Init() {}
    

    public int GetCost()
    {
        int upgradeCount = PersistentUpgradeManager.Instance.PersistentUpgradeCounts[Title];
        return (int)(baseCost * Mathf.Pow(upgradeCostExponent, upgradeCount));
    }

    public StatusItem CanUpgrade()
    {
        return PersistentUpgradeManager.Instance.PersistentUpgradeCounts[Title] == maxUpgradeCount? StatusItem.Completed :
            PersistentUpgradeManager.Instance.RemainingOre >= GetCost()?StatusItem.None:StatusItem.Locked;
    }

}