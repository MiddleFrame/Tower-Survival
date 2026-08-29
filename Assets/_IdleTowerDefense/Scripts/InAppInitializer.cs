using System;
using System.Collections.Generic;
using System.Linq;
using Unity.Services.Core;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Purchasing;

namespace Managers
{
    public class InAppInitializer : MonoBehaviour
    {
        // Google Play product IDs. Keep these in sync with the Play Console catalog.
        private const string BigGold = "big_gold";
        private const string MediumGold = "medium_gold";
        private const string SmallGold = "small_gold";
        private const string StarterPack = "started_pack";
        private const string RemoveAdsProduct = "remove_ads";

        private static readonly List<ProductDefinition> ProductDefinitions = new()
        {
            new ProductDefinition(BigGold, ProductType.Consumable),
            new ProductDefinition(MediumGold, ProductType.Consumable),
            new ProductDefinition(SmallGold, ProductType.Consumable),
            new ProductDefinition(RemoveAdsProduct, ProductType.NonConsumable),
            new ProductDefinition(StarterPack, ProductType.NonConsumable)
        };

        private static readonly HashSet<string> OwnedNonConsumables = new();

        private static InAppInitializer instance;
        private static StoreController storeController;
        private static UnityEvent pendingPurchaseAction;
        private static string pendingProductId;
        private static bool productsLoaded;
        private static bool purchasesLoaded;

        public static bool isRemoveAds;
        public static bool isBuyGameSpeed;
        public static event Action RemoveAdsActivated;

        private async void Awake()
        {
            if (instance != null && instance != this)
            {
                Destroy(gameObject);
                return;
            }

            instance = this;
            DontDestroyOnLoad(gameObject);
            Screen.sleepTimeout = SleepTimeout.NeverSleep;

            // Previously confirmed non-consumables are available immediately while
            // Google Play restores the authoritative purchase state in the background.
            isRemoveAds = ES3.Load(SaveKeys.RemoveAds, false);
            isBuyGameSpeed = ES3.Load(SaveKeys.BuyGameSpeed, false);

            try
            {
                await UnityServices.InitializeAsync();
                InitializeIap();
                await storeController.Connect();
            }
            catch (Exception exception)
            {
                Debug.LogError($"IAP initialization failed: {exception}");
                purchasesLoaded = true;
            }
        }

        private void InitializeIap()
        {
            Debug.Log("Begin IAP 5 initialization");

            OwnedNonConsumables.Clear();
            productsLoaded = false;
            purchasesLoaded = false;
            storeController = UnityIAPServices.StoreController();

            // Every success and failure callback is registered before Connect so no store event is missed.
            storeController.OnStoreConnected += OnStoreConnected;
            storeController.OnStoreDisconnected += failure =>
                Debug.LogError($"IAP store disconnected: {failure.Message}");
            storeController.OnAuthAccountChanged += OnAuthAccountChanged;
            storeController.OnProductsFetched += OnProductsFetched;
            storeController.OnProductsFetchFailed += OnProductsFetchFailed;
            storeController.OnPurchasesFetched += OnPurchasesFetched;
            storeController.OnPurchasesFetchFailed += OnPurchasesFetchFailed;
            storeController.OnPurchasePending += OnPurchasePending;
            storeController.OnPurchaseConfirmed += OnPurchaseConfirmed;
            storeController.OnPurchaseFailed += OnPurchaseFailed;
            storeController.OnPurchaseDeferred += order =>
                Debug.Log($"IAP purchase deferred: {GetProductId(order)}");
        }

        private static void OnStoreConnected()
        {
            Debug.Log("IAP store connected; fetching products");
            storeController.FetchProducts(ProductDefinitions);
        }

        private static void OnProductsFetched(List<Product> products)
        {
            productsLoaded = true;
            Debug.Log($"IAP products loaded: {products.Count}");
            storeController.FetchPurchases();
        }

        private static void OnAuthAccountChanged()
        {
            OwnedNonConsumables.Clear();
            productsLoaded = false;
            purchasesLoaded = false;
            storeController.FetchProducts(ProductDefinitions);
        }

        private static void OnProductsFetchFailed(ProductFetchFailed failure)
        {
            Debug.LogError($"IAP product fetch failed: {failure.FailureReason}");
            productsLoaded = false;
            purchasesLoaded = true;
        }

        private static void OnPurchasesFetched(Orders orders)
        {
            foreach (ConfirmedOrder order in orders.ConfirmedOrders)
                RegisterOwnedProducts(order);

            // Pending orders are delivered through OnPurchasePending and confirmed there.
            purchasesLoaded = true;
            ApplyOwnedBenefits();
            Debug.Log($"IAP purchases loaded: {orders.ConfirmedOrders.Count} confirmed, {orders.PendingOrders.Count} pending");
        }

        private static void OnPurchasesFetchFailed(PurchasesFetchFailureDescription failure)
        {
            Debug.LogError($"IAP purchase fetch failed: {failure.FailureReason} - {failure.Message}");
            purchasesLoaded = true;
        }

        private static void OnPurchasePending(PendingOrder order)
        {
            string productId = GetProductId(order);
            if (string.IsNullOrEmpty(productId))
            {
                Debug.LogError("IAP pending order did not contain a product");
                ClearPendingPurchase();
                return;
            }

            try
            {
                // Register ownership first so UnityEvent listeners such as ShopProduct.CheckStatus
                // observe the new non-consumable state while the reward event is running.
                RegisterOwnedProducts(order);
                ApplyOwnedBenefits();

                if (productId == pendingProductId && pendingPurchaseAction != null)
                    pendingPurchaseAction.Invoke();
                else
                    GrantRecoveredPurchase(productId);

                storeController.ConfirmPurchase(order);
            }
            catch (Exception exception)
            {
                // Do not confirm: the store will redeliver this order so the reward is not lost.
                OwnedNonConsumables.Remove(productId);
                Debug.LogError($"Failed to grant IAP product '{productId}': {exception}");
            }
            finally
            {
                ClearPendingPurchase();
            }
        }

        private static void OnPurchaseConfirmed(Order order)
        {
            if (order is ConfirmedOrder confirmedOrder)
            {
                RegisterOwnedProducts(confirmedOrder);
                ApplyOwnedBenefits();
                Debug.Log($"IAP purchase confirmed: {GetProductId(confirmedOrder)}");
                return;
            }

            if (order is FailedOrder failedOrder)
                Debug.LogError($"IAP confirmation failed: {failedOrder.FailureReason} - {failedOrder.Details}");
        }

        private static void OnPurchaseFailed(FailedOrder order)
        {
            Debug.LogError($"IAP purchase failed: {order.FailureReason} - {order.Details}");
            ClearPendingPurchase();
        }

        private static void RegisterOwnedProducts(Order order)
        {
            foreach (CartItem item in order.CartOrdered.Items())
            {
                if (item.Product.definition.type == ProductType.NonConsumable)
                    OwnedNonConsumables.Add(item.Product.definition.id);
            }
        }

        private static string GetProductId(Order order)
        {
            return order.CartOrdered.Items().FirstOrDefault()?.Product.definition.id;
        }

        private static void GrantRecoveredPurchase(string productId)
        {
            // This path handles an unconfirmed purchase restored after the app was interrupted.
            switch (productId)
            {
                case BigGold:
                    instance.BuyBigGold();
                    break;
                case MediumGold:
                    instance.BuyMediumGold();
                    break;
                case SmallGold:
                    instance.BuySmallGold();
                    break;
                case StarterPack:
                    instance.BuyStartedPack();
                    break;
                case RemoveAdsProduct:
                    instance.RemoveAds();
                    break;
                default:
                    throw new InvalidOperationException($"Unknown IAP product: {productId}");
            }
        }

        private static void ApplyOwnedBenefits()
        {
            if (OwnedNonConsumables.Contains(RemoveAdsProduct))
                instance?.RemoveAds();
            if (OwnedNonConsumables.Contains(StarterPack))
                instance?.AddSpeed();
        }

        private static void ClearPendingPurchase()
        {
            pendingPurchaseAction = null;
            pendingProductId = null;
        }

        public static bool IsIAPInitialized()
        {
            return storeController != null && productsLoaded && purchasesLoaded;
        }

        public void RemoveAds()
        {
            bool wasAlreadyActive = isRemoveAds;
            isRemoveAds = true;
            ES3.Save(SaveKeys.RemoveAds, true);

            if (!wasAlreadyActive)
                RemoveAdsActivated?.Invoke();
        }

        private void AddSpeed()
        {
            isBuyGameSpeed = true;
            ES3.Save(SaveKeys.BuyGameSpeed, true);
        }

        public void BuyStartedPack()
        {
            DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, 1000));
            AddSpeed();
            ES3.Save(SaveKeys.Gold, DataController.Currency[CurrencyTypes.Gold].value);
        }

        public void BuyBigGold()
        {
            AddGold(5000);
        }

        public void BuyMediumGold()
        {
            AddGold(2000);
        }

        public void BuySmallGold()
        {
            AddGold(500);
        }

        private static void AddGold(int amount)
        {
            DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, amount));
            ES3.Save(SaveKeys.Gold, DataController.Currency[CurrencyTypes.Gold].value);
        }

        public static bool CheckBuyState(string id)
        {
            return OwnedNonConsumables.Contains(id);
        }

        public static void BuyProductID(string productId, UnityEvent action)
        {
            if (!IsIAPInitialized())
            {
                Debug.LogWarning($"Cannot buy '{productId}': IAP is not ready");
                return;
            }

            Product product = storeController.GetProductById(productId);
            if (product == null || !product.availableToPurchase)
            {
                Debug.LogWarning($"Cannot buy '{productId}': product is unavailable");
                return;
            }

            pendingProductId = productId;
            pendingPurchaseAction = action;
            storeController.PurchaseProduct(product);
        }

        public static string GetPriceForId(string id)
        {
            Product product = storeController?.GetProductById(id);
            return product?.metadata?.localizedPriceString ?? string.Empty;
        }
    }
}
