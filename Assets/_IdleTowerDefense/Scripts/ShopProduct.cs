using System.Collections;
using Managers;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class ShopProduct : MonoBehaviour
{

    [SerializeField]
    private TextMeshProUGUI _price;

    [SerializeField]
    private string _storeId;

    [SerializeField]
    private UnityEvent action;

    private IEnumerator Start()
    {
        while (!InAppInitializer.IsIAPInitialized())
            yield return null;
        _price.text = InAppInitializer.GetPriceForId(_storeId);
        GetComponentInChildren<Button>()?.onClick.AddListener(BuyProduct);
    }

    private void BuyProduct()
    {
        InAppInitializer.BuyProductID(_storeId, action);
    }
}