using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UIElements;

public class TemporaryUpgradeManager : Singleton<TemporaryUpgradeManager>
{
    [SerializeField]
    private GameSettings gameSettings;

    [SerializeField]
    private TemporaryUpgradeButton temporaryUpgradeButtonPrefab;

    [SerializeField]
    private RectTransform attackContainer;
    [SerializeField]
    private RectTransform defenceContainer;
    [SerializeField]
    private RectTransform utilityContainer;

    [SerializeField]
    private UnityEngine.UI.ScrollRect _scrollView;

    [SerializeField]
    private float autoUpgradeInterval = 0.5f;

    // String = Upgrade.Title, int = upgrade level
    public Dictionary<string, int> TemporaryUpgradeCounts = new();
    public bool MenuOpen { get; private set; }

    private bool _autoUpgrading;
    private float _autoUpgradeTimeRemaining;
    private Camera _camera;

    private void Awake()
    {
        _camera = Camera.main;
        gameSettings.UpgradeSettings.InitTemporaryUpgrades();
        int[] stages =  ES3.Load(SaveKeys.Stage, new int[3]);
        
        foreach (var upgrade in gameSettings.UpgradeSettings.TemporaryUpgrades.Where(upgrade => upgrade.openingStage <= stages[upgrade.window ]))
        {

            TemporaryUpgradeCounts.Add(upgrade.Title, 0);

            Transform buttonContainer = upgrade.window switch
            {
                0 => attackContainer,
                1 => defenceContainer,
                2 => utilityContainer,
                _ => attackContainer
            };
            // Setup UpgradeButton values
            TemporaryUpgradeButton temporaryUpgradeButton = Instantiate(temporaryUpgradeButtonPrefab, buttonContainer);
            temporaryUpgradeButton.targetTemporaryUpgrade = upgrade;

            temporaryUpgradeButton.titleObj.text = upgrade.Title.ToUpper();
            temporaryUpgradeButton.targetTemporaryUpgrade.onUpgrade +=
                x => temporaryUpgradeButton.currentValue.text = "Value: "+x.ToString("N1");
            temporaryUpgradeButton.targetTemporaryUpgrade.onUpgrade += _ =>
                temporaryUpgradeButton.cost.text =
                    temporaryUpgradeButton.targetTemporaryUpgrade.GetCost().Value +" exp";
            
            temporaryUpgradeButton.targetTemporaryUpgrade.UpdateStartValue();

            temporaryUpgradeButton.Button.onClick.AddListener(
                () =>
                {
                    if (upgrade.CanUpgrade() ==
                        StatusItem.None)
                    {
                        upgrade.Upgrade();
                    }
                }
            );
        }

    }

 

    private void Update()
    {
        _autoUpgradeTimeRemaining -= Time.deltaTime;
        if (_autoUpgrading && _autoUpgradeTimeRemaining <= 0)
        {
            _autoUpgradeTimeRemaining = autoUpgradeInterval;
            foreach (TemporaryUpgradeBase upgrade in gameSettings.UpgradeSettings.TemporaryUpgrades.Where(upgrade =>
                         upgrade.CanUpgrade() == StatusItem.None))
            {
                upgrade.Upgrade();
                Debug.Log($"{nameof(TemporaryUpgradeManager)}.{nameof(Update)}() - Upgrading {upgrade.Title}");
            }
        }
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
    
    public void UpdateEnemySpawnRange(float radius)
    {
        gameSettings.EnemySpawnRadius = radius * 1.2f + 5f;
        _camera!.orthographicSize = radius * 1.2f + 5;
    }
    public void SetMenuOpen(bool value)
    {
        StartCoroutine(value ? nameof(ApproachCamera) : nameof(PullBackCamera));

        MenuOpen = value;
    }

    private IEnumerator PullBackCamera()
    {
        const int cameraSpeed = 5;
        const int cameraSpeedSlowly = 1;

        while (_camera.transform.position.y <= 1.5f)
        {
            yield return null;
            _camera.transform.position += new Vector3(0, cameraSpeedSlowly * Time.deltaTime, 0);
        }

        while (_camera.transform.position.y <= 3.5f)
        {
            yield return null;
            _camera.transform.position += new Vector3(0, cameraSpeed * Time.deltaTime, 0);
        }
    }

    private IEnumerator ApproachCamera()
    {
        const int cameraSpeed = 5;
        const int cameraSpeedSlowly = 1;
        while (_camera.transform.position.y >= 1.5f)
        {
            yield return null;
            _camera.transform.position -= new Vector3(0, cameraSpeed * Time.deltaTime, 0);
        }

        while (_camera.transform.position.y >= 1f)
        {
            yield return null;
            _camera.transform.position -= new Vector3(0, cameraSpeedSlowly * Time.deltaTime, 0);
        }
    }

    public void ToggleAutoUpgrade(bool inputValue)
    {
        _autoUpgrading = inputValue;
        Debug.Log($"{nameof(TemporaryUpgradeManager)}.{nameof(ToggleAutoUpgrade)}() - AutoUpgrading: {_autoUpgrading}");
    }
}