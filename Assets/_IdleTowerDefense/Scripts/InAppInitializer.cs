using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.Services.Core;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Extension;

namespace Managers
{
    public class InAppInitializer : MonoBehaviour, IDetailedStoreListener
    {
        // Use only small letters, use underscores as separators
        private static string _bigGold = "big_gold";
        private static string _mediumGold = "medium_gold";
        private static string _smallGold = "small_gold";
        private static string _startedPack = "started_pack";
        private static string _removeAds = "remove_ads";

        private static UnityEvent purchased;

        public static bool isRemoveAds = false;
        public static bool isBuyGameSpeed = false;

        private static InAppInitializer instance;
        private static IStoreController StoreController { get; set; }

        private static IExtensionProvider _storeExtensionProvider;


        private void Awake()
        {
            if (instance != null && instance != this)
            {
                Destroy(gameObject);
                return;
            }
            IAPInitialization();
            DontDestroyOnLoad(gameObject);
            Screen.sleepTimeout = SleepTimeout.NeverSleep;
            instance = this;
        }
        

        private void IAPInitialization()
        {
            Debug.Log("Begin init IAP");

            ConfigurationBuilder builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
            builder.AddProduct(_bigGold, ProductType.Consumable)
                .AddProduct(_mediumGold, ProductType.Consumable)
                .AddProduct(_smallGold, ProductType.Consumable)
                .AddProduct(_removeAds, ProductType.NonConsumable)
                .AddProduct(_startedPack, ProductType.NonConsumable);

            Debug.Log("Builder added products");
            UnityServices.InitializeAsync().ContinueWith(task => UnityPurchasing.Initialize(this, builder),TaskScheduler.FromCurrentSynchronizationContext());
            
            Debug.Log("UnityPurchasing successful Initialize");
        }

        public static bool IsIAPInitialized()
        {
            return StoreController != null && _storeExtensionProvider != null;
        }

        public void OnInitializeFailed(InitializationFailureReason error)
        {
        }

        public void OnInitializeFailed(InitializationFailureReason error, string message)
        {
        }

        public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs purchaseEvent)
        {
            purchased?.Invoke();
            purchased = null;
            return PurchaseProcessingResult.Complete;
        }

        public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
        {
            purchased = null;
        }


        public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
        {
            StoreController = controller;
            _storeExtensionProvider = extensions;
            if (CheckBuyState(_removeAds))
                RemoveAds();
            if (CheckBuyState(_startedPack))
                AddSpeed();
        }

        public void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription)
        {
            purchased = null;
        }

        public void BuyRemoveAds()
        {
            UnityEvent @event = new UnityEvent();
            @event.AddListener(RemoveAds);
            BuyProductID(_removeAds, @event);
        }

        public void RemoveAds()
        {
            isRemoveAds = true;
        }

        private void AddSpeed()
        {
            isBuyGameSpeed = true;
        }

        public void BuyStartedPack()
        {
            DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, 1000));
            AddSpeed();
        }

        public void BuyBigGold()
        {
            DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, 5000));
            ES3.Save(SaveKeys.Gold, DataController.Currency[CurrencyTypes.Gold]);
        }

        public void BuyMediumGold()
        {
            DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, 2000));    ES3.Save(SaveKeys.Gold, DataController.Currency[CurrencyTypes.Gold]);
        }

        public void BuySmallGold()
        {
            DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, 500));    ES3.Save(SaveKeys.Gold, DataController.Currency[CurrencyTypes.Gold]);
        }

        private static bool CheckBuyState(string id)
        {
            Product product = StoreController.products.WithID(id);
            return product.hasReceipt;
        }

        public static void BuyProductID(string productId, UnityEvent action)
        {
            Debug.Log("Try to buy: " + productId);

            if (!IsIAPInitialized()) return;
            purchased = action;
            Product product = StoreController.products.WithID(productId);
            if (product is {availableToPurchase: true})
            {
                StoreController.InitiatePurchase(product);
            }
        }


        public static string GetPriceForId(string id)
        {
            return StoreController.products.WithStoreSpecificID(id).metadata.localizedPriceString;
        }
    }
}