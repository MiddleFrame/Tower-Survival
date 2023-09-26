using TMPro;
using UnityEngine;

public class CurrencyDisplayElement : MonoBehaviour
{
    public TextMeshProUGUI TextObject;
    public CurrencyTypes currencyType;

    private void Start()
    {
        TextObject.text = DataController.Currency[currencyType].value.ToString("N0");
        DataController.currencyText[currencyType] = TextObject;
    }
}
