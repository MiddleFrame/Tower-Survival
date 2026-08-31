using System.Collections;
using System.Collections.Generic;
using Managers;
using TMPro;
using UnityEngine;

public class LoseMenu : MonoBehaviour
{

    [SerializeField]
    private Animator _animator;

    [SerializeField]
    private GameObject _highScore;

    [SerializeField]
    private GameObject x2Button;
    
    [SerializeField]
    private TextMeshProUGUI _enemyKilled;
    [SerializeField]
    private TextMeshProUGUI _oreAndGold;
    [SerializeField]
    private TextMeshProUGUI _tier;

    private static readonly int openMenu = Animator.StringToHash("OpenMenu");
    private bool _isOpen;
    private bool _isTutorialPlaceholder;

    private void OnEnable()
    {
        InAppInitializer.RemoveAdsActivated += GrantRemoveAdsBonus;
    }

    private void OnDisable()
    {
        InAppInitializer.RemoveAdsActivated -= GrantRemoveAdsBonus;
    }


    public void OpenLoseMenu(bool isNewHighScore, int enemiesKilled, float earnedCrystals, float earnedGold)
    {
        _isOpen = true;
        _isTutorialPlaceholder = false;
        SetStandardContentVisible(true);
        OpenAnim();
        EnableHighScore(isNewHighScore);
        SetKilledEnemy(enemiesKilled);
        SetCrystalsAndGold(earnedCrystals, earnedGold);
        SetTier();
        LocalizeDoubleRewardButton();

        bool shouldGrantAutomatically = InAppInitializer.isRemoveAds;
        x2Button.SetActive(!shouldGrantAutomatically);
        if (shouldGrantAutomatically)
            DataController.Instance.OnRewardx2();
    }

    public void OpenTutorialCompletionPlaceholder()
    {
        _isOpen = true;
        _isTutorialPlaceholder = true;
        SetStandardContentVisible(false);
        x2Button.SetActive(false);
        OpenAnim();
    }

    private void OpenAnim()
    {
        _animator.SetTrigger(openMenu);
    }   
    public void Close()
    {
        _isOpen = false;
        _isTutorialPlaceholder = false;
        SetStandardContentVisible(true);
        _animator.Play($"Close");
    }

    public void Getx2()
    {
        if (AddManager.ShowRewarded(1))
            x2Button.SetActive(false);
    }

    public void ApplyDoubleReward(int enemiesKilled, float earnedCrystals, float earnedGold)
    {
        x2Button.SetActive(false);
        SetKilledEnemy(enemiesKilled);
        SetCrystalsAndGold(earnedCrystals, earnedGold);
    }

    private void GrantRemoveAdsBonus()
    {
        if (!_isOpen || _isTutorialPlaceholder)
            return;

        x2Button.SetActive(false);
        DataController.Instance.OnRewardx2();
    }

   

    private void EnableHighScore(bool isNewHighScore)
    {
        _highScore.SetActive(isNewHighScore);
    }

    private void SetKilledEnemy(int enemiesKilled)
    {
        LightweightLocalization.Bind(_enemyKilled, "game.you_killed", enemiesKilled);
    }

    private void SetCrystalsAndGold(float earnedCrystals, float earnedGold)
    {
        if (earnedGold > 0)
            LightweightLocalization.Bind(_oreAndGold, "game.earned_crystals_gold", earnedCrystals, earnedGold);
        else
            LightweightLocalization.Bind(_oreAndGold, "game.earned_crystals", earnedCrystals);
    }

    private void SetTier()
    {
        LightweightLocalization.Bind(_tier, "game.tier", 1);
    }

    private void LocalizeDoubleRewardButton()
    {
        if (x2Button == null)
            return;

        TMP_Text label = x2Button.GetComponentInChildren<TMP_Text>(true);
        LightweightLocalization.Bind(label, "game.double_ore");
    }

    private void SetStandardContentVisible(bool visible)
    {
        if (_enemyKilled != null && _enemyKilled.transform.parent != null)
            _enemyKilled.transform.parent.gameObject.SetActive(visible);
    }
}
