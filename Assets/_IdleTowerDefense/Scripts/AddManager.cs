using System;
using Managers;
using UnityEngine;
using Yodo1.MAS;


public class AddManager : MonoBehaviour
{
    private static AddManager instance;
    private static bool _isRewardAdBusy;

    public static event Action<bool> RewardedAvailabilityChanged;

    [SerializeField]
    private GameObject _loadingAnim;


    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(gameObject);
            return;
        }

        DontDestroyOnLoad(gameObject);
        instance = this;
    }

    void Start()
    {
        Yodo1U3dMas.SetAutoPauseGame(false);
        Yodo1U3dRewardAd.GetInstance().autoDelayIfLoadFail = true;
        Yodo1U3dMas.SetCCPA(false);
        Yodo1U3dMas.SetGDPR(true);
        Yodo1U3dMas.SetCOPPA(false);
        Yodo1U3dMasCallback.OnSdkInitializedEvent += (success, error) =>
        {
            Debug.Log("[Yodo1 Mas] OnSdkInitializedEvent, success:" + success + ", error: " + error.ToString());
            if (success)
            {
                InitializeRewardedAds();
                Yodo1U3dRewardAd.GetInstance().LoadAd();
                Debug.Log("[Yodo1 Mas] The initialization has succeeded");
            }
            else
            {
                Debug.Log("[Yodo1 Mas] The initialization has failed");
            }
        };
        Yodo1U3dMas.InitializeMasSdk();
    }

    private static int rewardId;

    public static bool IsRewardedAvailable
    {
        get
        {
            if (InAppInitializer.isRemoveAds)
                return true;

            return instance != null &&
                   !_isRewardAdBusy &&
                   Yodo1U3dRewardAd.GetInstance().IsLoaded();
        }
    }

    public static bool ShowRewarded(int rewardID)
    {
        if (InAppInitializer.isRemoveAds)
        {
            OnRewardAdEarnedEvent(rewardID);
            return true;
        }

        if (instance == null || _isRewardAdBusy)
        {
            Debug.Log("[Yodo1 Mas] Reward ad request ignored: another request is already active");
            return false;
        }

        Yodo1U3dRewardAd rewardAd = Yodo1U3dRewardAd.GetInstance();
        if (!rewardAd.IsLoaded())
        {
            Debug.Log("[Yodo1 Mas] Reward ad is not loaded yet");
            NotifyRewardedAvailability(false);
            rewardAd.LoadAd();
            return false;
        }

        rewardId = rewardID;
        _isRewardAdBusy = true;
        NotifyRewardedAvailability(false);
        rewardAd.ShowAd();
        return true;
    }

    private void InitializeRewardedAds()
    {
        // Instantiate
        Yodo1U3dRewardAd.GetInstance();

        // Ad Events
        Yodo1U3dRewardAd.GetInstance().OnAdLoadedEvent += OnRewardAdLoadedEvent;
        Yodo1U3dRewardAd.GetInstance().OnAdLoadFailedEvent += OnRewardAdLoadFailedEvent;
        Yodo1U3dRewardAd.GetInstance().OnAdOpenFailedEvent += OnRewardAdOpenFailedEvent;
        Yodo1U3dRewardAd.GetInstance().OnAdClosedEvent += OnRewardAdClosedEvent;
        Yodo1U3dRewardAd.GetInstance().OnAdEarnedEvent += OnRewardAdEarnedEvent;
    }

    private void OnRewardAdLoadedEvent(Yodo1U3dRewardAd ad)
    {
        if (_loadingAnim != null)
            _loadingAnim.SetActive(false);
        NotifyRewardedAvailability(true);
        Debug.Log("[Yodo1 Mas] OnRewardAdLoadedEvent event received");
    }

    private void OnRewardAdLoadFailedEvent(Yodo1U3dRewardAd ad, Yodo1U3dAdError adError)
    {
        _isRewardAdBusy = false;
        NotifyRewardedAvailability(false);
        Debug.Log("[Yodo1 Mas] OnRewardAdLoadFailedEvent event received with error: " + adError);
    }

    private void OnRewardAdOpenFailedEvent(Yodo1U3dRewardAd ad, Yodo1U3dAdError adError)
    {
        _isRewardAdBusy = false;
        NotifyRewardedAvailability(false);
        Debug.Log("[Yodo1 Mas] OnRewardAdOpenFailedEvent event received with error: " + adError.ToString());
        // Load the next ad
        Yodo1U3dRewardAd.GetInstance().LoadAd();
    }

    private void OnRewardAdClosedEvent(Yodo1U3dRewardAd ad)
    {
        _isRewardAdBusy = false;
        NotifyRewardedAvailability(false);
        Debug.Log("[Yodo1 Mas] OnRewardAdClosedEvent event received");
        // Load the next ad
        Yodo1U3dRewardAd.GetInstance().LoadAd();
    }

    private void OnRewardAdEarnedEvent(Yodo1U3dRewardAd ad)
    {
        Debug.Log("[Yodo1 Mas] OnRewardAdEarnedEvent event received");
        Debug.Log("Reward id " + rewardId);
        // Add your reward code here
        switch (rewardId)
        {
            case 0:
                HorizontalSelector.rewardedSpeed = true;
                PlayMenu.Play();
                break;
            case 1:
                DataController.Instance.OnRewardx2();
                break;
        }
    }

    private static void OnRewardAdEarnedEvent(int ad)
    {
        Debug.Log("[Yodo1 Mas] OnRewardAdEarnedEvent event received");
        Debug.Log("Reward id " + rewardId);
        // Add your reward code here
        switch (ad)
        {
            case 0:
                HorizontalSelector.rewardedSpeed = true;
                PlayMenu.Play();
                break;
            case 1:
                DataController.Instance.OnRewardx2();
                break;
        }
    }

    private static void NotifyRewardedAvailability(bool isAvailable)
    {
        RewardedAvailabilityChanged?.Invoke(
            InAppInitializer.isRemoveAds || (isAvailable && !_isRewardAdBusy));
    }
}
