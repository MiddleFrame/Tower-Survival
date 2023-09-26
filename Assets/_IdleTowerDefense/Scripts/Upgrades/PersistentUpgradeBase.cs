using UnityEngine;

[CreateAssetMenu(fileName = "New Persistent Upgrade", menuName = "Idle Tower Defense/Persistent Upgrades/Persistent")]
public class PersistentUpgradeBase : ScriptableObject
{
    [Header("Base Values")]
    public string Title = "Default Title";

    public int openingStage;

    public int window;
    
    [Header("Upgrade Specific Values")]
    [SerializeField] private float baseCost = 1;
    [SerializeField] private float upgradeCostExponent = 1.1f;
    [SerializeField] private float upgradeCostAdditional = 1f;
    
    public int maxUpgradeCount;  
    public void Init() {}
    

    public int GetCost()
    {
        int upgradeCount = PersistentUpgradeManager.PersistentUpgradeCounts[Title];
        return (int)(baseCost * Mathf.Pow(upgradeCostExponent, upgradeCount) + upgradeCostAdditional*upgradeCount);
    }

    public StatusItem CanUpgrade()
    {
        return PersistentUpgradeManager.PersistentUpgradeCounts[Title] == maxUpgradeCount? StatusItem.Completed :
            DataController.Currency[CurrencyTypes.Ore].value >= GetCost()?StatusItem.None:StatusItem.Locked;
    }

}