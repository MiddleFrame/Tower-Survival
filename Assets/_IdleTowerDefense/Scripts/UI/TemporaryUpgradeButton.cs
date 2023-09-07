using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// Modified from Michsky's ChapterButton
/// </summary>
public partial class TemporaryUpgradeButton : MonoBehaviour
{
    [Header("Resources")]
    public Button Button;
    public TextMeshProUGUI titleObj;
    public TextMeshProUGUI currentValue;
    public TextMeshProUGUI cost;
    public GameObject locked;
    public GameObject completed;

    [HideInInspector]
    public TemporaryUpgradeBase targetTemporaryUpgrade;

    [Header("Status")]
    public StatusItem statusItem;
    public float UpdateInterval = 0.5f;
    private float _timeSinceLastUpdate = 0;


    void Awake()
    {
        UpdateStatus();
    }

   

    private void Update()
    {
        _timeSinceLastUpdate += Time.deltaTime;
        if (_timeSinceLastUpdate < UpdateInterval) return;
        if (!TemporaryUpgradeManager.Instance.MenuOpen) return;

        statusItem = targetTemporaryUpgrade.CanUpgrade();
        UpdateStatus();
    }

    private void UpdateStatus()
    {
        if (statusItem == StatusItem.None)
        {
            locked.gameObject.SetActive(false);
            completed.gameObject.SetActive(false);
            Button.interactable = true;
        }

        else if (statusItem == StatusItem.Locked)
        {
            locked.gameObject.SetActive(true);
            completed.gameObject.SetActive(false);
            Button.interactable = false;
        }

        else if (statusItem == StatusItem.Completed)
        {
            locked.gameObject.SetActive(false);
            completed.gameObject.SetActive(true);
        }
    }
}