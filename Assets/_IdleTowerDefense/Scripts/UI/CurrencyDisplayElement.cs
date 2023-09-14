using TMPro;
using UnityEngine;

public class CurrencyDisplayElement : MonoBehaviour
{
    public TextMeshProUGUI TextObject;
    public CurrencyTypes currencyType;

    private void Start()
    {
        TextObject.text = GameManager.Currency[currencyType].ToString("N0");
        GameManager.currencyText[currencyType] = TextObject;
    }
}
