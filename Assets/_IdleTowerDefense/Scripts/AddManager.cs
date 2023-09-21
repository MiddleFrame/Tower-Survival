using System.Collections;
using System.Collections.Generic;
using Managers;
using UnityEngine;
using Yodo1.MAS;


public class AddManager : MonoBehaviour
{
    private static AddManager instance;

    [SerializeField]
    private GameObject _loadingAnim;

    private int age;

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

    public static void ShowRewarded(int rewardID)
    {
        if (InAppInitializer.isRemoveAds) OnRewardAdEarnedEvent(rewardID);
        bool isLoaded = Yodo1U3dRewardAd.GetInstance().IsLoaded();
        rewardId = rewardID;
        if (isLoaded) Yodo1U3dRewardAd.GetInstance().ShowAd();
        else
        {
            instance.StartCoroutine(TryShowReward(rewardID));
        }
    }

    private static IEnumerator TryShowReward(int rewardID)
    {
        Debug.Log("Try to load add");
        for (int i = 0; i < 3; i++)
        {
            Yodo1U3dRewardAd.GetInstance().LoadAd();
            yield return new WaitForSeconds(1f);
            rewardId = rewardID;
            if (Yodo1U3dRewardAd.GetInstance().IsLoaded()) Yodo1U3dRewardAd.GetInstance().ShowAd();
        }
    }

    private void InitializeRewardedAds()
    {
        // Instantiate
        Yodo1U3dRewardAd.GetInstance();

        // Ad Events
        Yodo1U3dRewardAd.GetInstance().OnAdLoadedEvent += OnRewardAdLoadedEvent;
        Yodo1U3dRewardAd.GetInstance().OnAdOpenFailedEvent += OnRewardAdOpenFailedEvent;
        Yodo1U3dRewardAd.GetInstance().OnAdClosedEvent += OnRewardAdClosedEvent;
        Yodo1U3dRewardAd.GetInstance().OnAdEarnedEvent += OnRewardAdEarnedEvent;
    }

    private void OnRewardAdLoadedEvent(Yodo1U3dRewardAd ad)
    {
        if (_loadingAnim != null)
            _loadingAnim.SetActive(false);
        Debug.Log("[Yodo1 Mas] OnRewardAdLoadedEvent event received");
    }


    private void OnRewardAdOpenFailedEvent(Yodo1U3dRewardAd ad, Yodo1U3dAdError adError)
    {
        Debug.Log("[Yodo1 Mas] OnRewardAdOpenFailedEvent event received with error: " + adError.ToString());
        // Load the next ad
        Yodo1U3dRewardAd.GetInstance().LoadAd();
    }

    private void OnRewardAdClosedEvent(Yodo1U3dRewardAd ad)
    {
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
                GameManager.Instance.OnRewardx2();
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
                GameManager.Instance.OnRewardx2();
                break;
        }
    }
}