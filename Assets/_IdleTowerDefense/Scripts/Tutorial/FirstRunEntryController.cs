using UnityEngine;
using UnityEngine.SceneManagement;

public sealed class FirstRunEntryController : MonoBehaviour
{
    private void Start()
    {
        if (!TutorialProgress.BeginFirstRun())
            return;

        DataController.tier = 0;
        Time.timeScale = 1f;
        if (SceneTransitionController.Instance != null)
            SceneTransitionController.Instance.LoadScene("Game");
        else
            SceneManager.LoadScene("Game");
    }
}
