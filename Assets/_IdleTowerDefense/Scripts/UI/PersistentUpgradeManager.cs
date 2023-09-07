using System.Collections.Generic;
using UnityEngine;

public class PersistentUpgradeManager : Singleton<PersistentUpgradeManager>
{
    public Dictionary<string, int> PersistentUpgradeCounts = new();
    public GameSettings GameSettings;

    [SerializeField]
    private PersistentUpgradeButton persistentUpgradeButtonPrefab;

    [SerializeField]
    private Transform buttonContainer;

    [HideInInspector]
    public int RemainingOre;

    private readonly List<PersistentUpgradeButton> _buttons = new();

    private void Start()
    {
        InitSaveData();
        InitMenu();
    }

    private void InitSaveData()
    {
        // Init default empty dictionary
        Dictionary<string, int> defaultValues = new Dictionary<string, int>();
        foreach (var upgrade in GameSettings.UpgradeSettings.PersistentUpgrades)
        {
            defaultValues.Add(upgrade.Title, 0);
        }

        RemainingOre = ES3.Load(SaveKeys.Ore, 0);
        // Load saved upgrade counts and Scrap count
        PersistentUpgradeCounts = ES3.Load(SaveKeys.PersistentUpgradeCounts, defaultValues);
    }

    private void InitMenu()
    {
        foreach (var upgrade in GameSettings.UpgradeSettings.PersistentUpgrades)
        {
            PersistentUpgradeButton currentButton = Instantiate(persistentUpgradeButtonPrefab, buttonContainer);
            _buttons.Add(currentButton);
            currentButton.TargetUpgrade = upgrade;
            currentButton.TitleText.text = upgrade.Title;
            currentButton.CostText.text = $"{upgrade.GetCost():N1}";
            currentButton.UpgradeAmountText.text = $"LEVEL: {PersistentUpgradeCounts[upgrade.Title].ToString()}";
            currentButton.Button.onClick.AddListener(
                () =>
                {
                    RemainingOre -= upgrade.GetCost();
                    PersistentUpgradeCounts[upgrade.Title]++;
                    ES3.Save(SaveKeys.Ore, RemainingOre);
                    ES3.Save(SaveKeys.PersistentUpgradeCounts, PersistentUpgradeCounts);
                    currentButton.CostText.text = $"{upgrade.GetCost():N1}";
                    currentButton.UpgradeAmountText.text =
                        $"LEVEL: {PersistentUpgradeCounts[upgrade.Title].ToString()}";
                    currentButton.UpdateButtonInteractable(upgrade.CanUpgrade());
                }
            );
            currentButton.UpdateButtonInteractable(upgrade.CanUpgrade());
        }
    }


    public void ClearSaveData()
    {
        ES3.DeleteFile();
        InitSaveData();
        // Clear menu and re-initialize it
        for (int i = _buttons.Count - 1; i >= 0; i--)
        {
            Destroy(_buttons[i].gameObject);
        }

        InitMenu();
    }
}