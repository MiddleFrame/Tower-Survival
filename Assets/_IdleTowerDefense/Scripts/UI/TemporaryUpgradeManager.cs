using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class TemporaryUpgradeManager : Singleton<TemporaryUpgradeManager>
{
    [SerializeField]
    private GameSettings gameSettings;

    [SerializeField]
    private TemporaryUpgradeButton temporaryUpgradeButtonPrefab;

    [SerializeField]
    private Transform attackContainer;
    [SerializeField]
    private Transform defenceContainer;
    [SerializeField]
    private Transform utilityContainer;


    [SerializeField]
    private float autoUpgradeInterval = 0.5f;

    // String = Upgrade.Title, int = upgrade level
    public Dictionary<string, int> TemporaryUpgradeCounts = new Dictionary<string, int>();
    public bool MenuOpen => menuOpen;
    private bool menuOpen = false;
    private bool autoUpgrading = false;
    private float autoUpgradeTimeRemaining = 0;
    private Camera _camera;

    private void Awake()
    {
        _camera = Camera.main;
        gameSettings.UpgradeSettings.InitTemporaryUpgrades();
        for (int i = 0; i < gameSettings.UpgradeSettings.TemporaryUpgrades.Count; i++)
        {
            // Capture i to avoid closure issues
            int index = i;

            // Init dictionary element for the upgrade
            TemporaryUpgradeCounts.Add(gameSettings.UpgradeSettings.TemporaryUpgrades[i].Title, 0);

            Transform buttonContainer = gameSettings.UpgradeSettings.TemporaryUpgrades[i].window switch
            {
                0 => attackContainer,
                1 => defenceContainer,
                2 => utilityContainer,
                _ => attackContainer
            };
            // Setup UpgradeButton values
            TemporaryUpgradeButton temporaryUpgradeButton = Instantiate(temporaryUpgradeButtonPrefab, buttonContainer);
            temporaryUpgradeButton.targetTemporaryUpgrade = gameSettings.UpgradeSettings.TemporaryUpgrades[i];

            temporaryUpgradeButton.titleObj.text = gameSettings.UpgradeSettings.TemporaryUpgrades[i].Title.ToUpper();
            temporaryUpgradeButton.targetTemporaryUpgrade.onUpgrade +=
                x => temporaryUpgradeButton.currentValue.text = "Value: "+x.ToString("N1");
            temporaryUpgradeButton.targetTemporaryUpgrade.onUpgrade += _ =>
                temporaryUpgradeButton.cost.text =
                    temporaryUpgradeButton.targetTemporaryUpgrade.GetCost().Value +" exp";
            
            temporaryUpgradeButton.targetTemporaryUpgrade.UpdateStartValue();

            temporaryUpgradeButton.Button.onClick.AddListener(
                () =>
                {
                    if (gameSettings.UpgradeSettings.TemporaryUpgrades[index].CanUpgrade() ==
                        StatusItem.None)
                    {
                        gameSettings.UpgradeSettings.TemporaryUpgrades[index].Upgrade();
                    }
                }
            );
        }
    }

 

    private void Update()
    {
        autoUpgradeTimeRemaining -= Time.deltaTime;
        if (autoUpgrading && autoUpgradeTimeRemaining <= 0)
        {
            autoUpgradeTimeRemaining = autoUpgradeInterval;
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
        attackContainer.gameObject.SetActive(true);
        defenceContainer.gameObject.SetActive(false);
        utilityContainer.gameObject.SetActive(false);
    }
    public void OpenDefenceMenu()
    {
        attackContainer.gameObject.SetActive(false);
        defenceContainer.gameObject.SetActive(true);
        utilityContainer.gameObject.SetActive(false);
    }
    public void OpenUtilityMenu()
    {
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

        menuOpen = value;
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
        autoUpgrading = inputValue;
        Debug.Log($"{nameof(TemporaryUpgradeManager)}.{nameof(ToggleAutoUpgrade)}() - AutoUpgrading: {autoUpgrading}");
    }
}