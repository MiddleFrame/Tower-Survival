using System.Collections;
using System.Collections.Generic;
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


    public void OpenLoseMenu(bool isNewHighScore, int enemiesKilled, float earnedOre, float earnedGold)
    {
        
        OpenAnim();
        EnableHighScore(isNewHighScore);
        SetKilledEnemy(enemiesKilled);
        SetOreAndGold(earnedOre, earnedGold);
        SetTier();
    }

    private void OpenAnim()
    {
        _animator.SetTrigger(openMenu);
    }   
    public void Close()
    {
        _animator.Play($"Close");
    }

    public void Getx2()
    {
        AddManager.ShowRewarded(1);
        x2Button.SetActive(false);
    }

   

    private void EnableHighScore(bool isNewHighScore)
    {
        _highScore.SetActive(isNewHighScore);
    }

    private void SetKilledEnemy(int enemiesKilled)
    {
        _enemyKilled.text = $"You killed {enemiesKilled} enemies";
    }

    private void SetOreAndGold(float earnedOre,float earnedGold)
    {
        _oreAndGold.text = $"And earn {earnedOre} Ore" + (earnedGold>0?$" and {earnedGold} Gold.":"");
    }

    private void SetTier()
    {
        _tier.text = "Tier 1";
    }
}
