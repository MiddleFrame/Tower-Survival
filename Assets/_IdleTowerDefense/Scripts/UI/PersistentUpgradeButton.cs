using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PersistentUpgradeButton : MonoBehaviour
{
    public Button Button;
    public TextMeshProUGUI TitleText;
    public TextMeshProUGUI UpgradeAmountText;
    public TextMeshProUGUI CostText;

    [SerializeField]
    private GameObject locked;

    [SerializeField]
    private GameObject completed;

    [HideInInspector]
    public PersistentUpgradeBase TargetUpgrade;

    public void UpdateButtonInteractable(StatusItem statusItem)
    {
        if (statusItem == StatusItem.None)
        {
            locked.SetActive(false);
            completed.SetActive(false);
            Button.interactable = true;
        }

        else if (statusItem == StatusItem.Locked)
        {
            locked.SetActive(true);
            completed.SetActive(false);
            Button.interactable = false;
        }

        else if (statusItem == StatusItem.Completed)
        {
            locked.SetActive(false);
            completed.SetActive(true);
        }
    }
}