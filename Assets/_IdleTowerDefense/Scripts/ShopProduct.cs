using System;
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

    [SerializeField]
    private Button _buyButton;

    [SerializeField]
    private bool _isNonConsumable;

    private IEnumerator Start()
    {
        while (!InAppInitializer.IsIAPInitialized())
            yield return null;
        if (_isNonConsumable)
        {
            action.AddListener(CheckStatus);
            if (InAppInitializer.CheckBuyState(_storeId))
            {
                gameObject.SetActive(false);
                yield break;
            }
        }

        if (_price != null)
            _price.text = InAppInitializer.GetPriceForId(_storeId);
        _buyButton.interactable = true;
        _buyButton.onClick.AddListener(BuyProduct);
    }

    private void BuyProduct()
    {
        InAppInitializer.BuyProductID(_storeId, action);
    }


    private void CheckStatus()
    {
        if (_isNonConsumable && InAppInitializer.CheckBuyState(_storeId))
        {
            gameObject.SetActive(false);
            return;
        }
    }
}