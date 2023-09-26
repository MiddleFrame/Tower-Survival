using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class PersistentUpgradeManager : MonoBehaviour
{
    public static Dictionary<string, int> PersistentUpgradeCounts = new();
    public GameSettings GameSettings;

    [SerializeField]
    private PersistentUpgradeButton persistentUpgradeButtonPrefab;

    [SerializeField]
    private NextGradeWindow nextGradeWindow;

    [SerializeField]
    private RectTransform attackContainer;

    [SerializeField]
    private RectTransform defenceContainer;

    [SerializeField]
    private RectTransform utilityContainer;

    [SerializeField]
    private UnityEngine.UI.ScrollRect _scrollView;

    private readonly List<PersistentUpgradeButton> _buttons = new();

    private void Start()
    {
        InitSaveData();
        InitMenu();
    }

    private void InitSaveData()
    {
        // Init default empty dictionary
        var defaultValues = GameSettings.UpgradeSettings.PersistentUpgrades.ToDictionary(upgrade => upgrade.Title, _ => 0);

        // Load saved upgrade counts and Scrap count
        PersistentUpgradeCounts = ES3.Load(SaveKeys.PersistentUpgradeCounts, defaultValues); 
        foreach (var upgrade in GameSettings.UpgradeSettings.PersistentUpgrades.Where(upgrade => !PersistentUpgradeCounts.ContainsKey(upgrade.Title)))
        {
            PersistentUpgradeCounts.Add(upgrade.Title,0);
        }
    }

    private void InitMenu()
    {
        int[] stages = ES3.Load(SaveKeys.Stage, new int[3]);
        foreach (var upgrade in GameSettings.UpgradeSettings.PersistentUpgrades)
        {
            if (upgrade.openingStage > stages[upgrade.window]) continue;
            Transform buttonContainer = upgrade.window switch
            {
                0 => attackContainer,
                1 => defenceContainer,
                2 => utilityContainer,
                _ => attackContainer
            };
            PersistentUpgradeButton currentButton = Instantiate(persistentUpgradeButtonPrefab, buttonContainer);
            _buttons.Add(currentButton);
            currentButton.TargetUpgrade = upgrade;
            currentButton.TitleText.text = upgrade.Title;
            currentButton.CostText.text = $"{upgrade.GetCost():N0}";
            currentButton.UpgradeAmountText.text = $"LEVEL: {PersistentUpgradeCounts[upgrade.Title].ToString()}";
            currentButton.Button.onClick.AddListener(
                () =>
                {
                    DataController.Currency.SubtractValues(
                        new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Ore, upgrade.GetCost()));
                    PersistentUpgradeCounts[upgrade.Title]++;
                    ES3.Save(SaveKeys.Ore, DataController.Currency[CurrencyTypes.Ore].value);
                    ES3.Save(SaveKeys.PersistentUpgradeCounts, PersistentUpgradeCounts);
                    currentButton.CostText.text = $"{upgrade.GetCost():N0}";
                    currentButton.UpgradeAmountText.text =
                        $"LEVEL: {PersistentUpgradeCounts[upgrade.Title].ToString()}";
                    foreach (var button in _buttons)
                    {
                        button.UpdateButtonInteractable(button.TargetUpgrade.CanUpgrade());
                    }
                }
            );
            currentButton.UpdateButtonInteractable(upgrade.CanUpgrade());
        }


        CreateNewWindow(0, stages);
        CreateNewWindow(1, stages);
        CreateNewWindow(2, stages);
    }

    private void CreateNewWindow(int window, int[] stages)
    {
        if (GameSettings.UpgradeSettings.NextGrades[window].cost.Length <= stages[window]) return;
        Transform buttonContainer = window switch
        {
            0 => attackContainer,
            1 => defenceContainer,
            2 => utilityContainer,
            _ => attackContainer
        };

        NextGradeWindow instantiate = Instantiate(nextGradeWindow, buttonContainer);
        instantiate.cost.text = GameSettings.UpgradeSettings.NextGrades[window].cost[stages[window]].ToString();

        instantiate.button.onClick.AddListener(() =>
        {
            if(DataController.Currency[CurrencyTypes.Gold].value < GameSettings.UpgradeSettings.NextGrades[window].cost[stages[window]]) return;
            DataController.Currency.SubtractValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold,
                GameSettings.UpgradeSettings.NextGrades[window].cost[stages[window]]));
            ES3.Save(SaveKeys.Gold, DataController.Currency[CurrencyTypes.Gold].value);
            stages[window]++;
            ES3.Save(SaveKeys.Stage, stages);
            


            foreach (var upgrade in GameSettings.UpgradeSettings.PersistentUpgrades)
            {
                if (upgrade.window != window || upgrade.openingStage != stages[window]) continue;
                Transform container = window switch
                {
                    0 => attackContainer,
                    1 => defenceContainer,
                    2 => utilityContainer,
                    _ => attackContainer
                };
                PersistentUpgradeButton currentButton = Instantiate(persistentUpgradeButtonPrefab, container);
                _buttons.Add(currentButton);
                currentButton.TargetUpgrade = upgrade;
                currentButton.TitleText.text = upgrade.Title;
                currentButton.CostText.text = $"{upgrade.GetCost():N0}";
                currentButton.UpgradeAmountText.text = $"LEVEL: {PersistentUpgradeCounts[upgrade.Title].ToString()}";
                currentButton.Button.onClick.AddListener(
                    () =>
                    {
                        DataController.Currency.SubtractValues(
                            new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Ore, upgrade.GetCost()));
                        PersistentUpgradeCounts[upgrade.Title]++;
                        ES3.Save(SaveKeys.Ore, DataController.Currency[CurrencyTypes.Ore].value);
                        ES3.Save(SaveKeys.PersistentUpgradeCounts, PersistentUpgradeCounts);
                        currentButton.CostText.text = $"{upgrade.GetCost():N0}";
                        currentButton.UpgradeAmountText.text =
                            $"LEVEL: {PersistentUpgradeCounts[upgrade.Title].ToString()}";
                        foreach (var button in _buttons)
                        {
                            button.UpdateButtonInteractable(button.TargetUpgrade.CanUpgrade());
                        }
                    }
                );
                currentButton.UpdateButtonInteractable(upgrade.CanUpgrade());
            }

            CreateNewWindow(window, stages);
            Destroy(instantiate.gameObject);
        });
    }

    public void OpenAttackMenu()
    {
        _scrollView.content = attackContainer;
        attackContainer.gameObject.SetActive(true);
        defenceContainer.gameObject.SetActive(false);
        utilityContainer.gameObject.SetActive(false);
    }

    public void OpenDefenceMenu()
    {
        _scrollView.content = defenceContainer;
        attackContainer.gameObject.SetActive(false);
        defenceContainer.gameObject.SetActive(true);
        utilityContainer.gameObject.SetActive(false);
    }

    public void OpenUtilityMenu()
    {
        _scrollView.content = utilityContainer;
        attackContainer.gameObject.SetActive(false);
        defenceContainer.gameObject.SetActive(false);
        utilityContainer.gameObject.SetActive(true);
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