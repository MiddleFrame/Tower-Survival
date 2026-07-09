using UnityEngine;

public class HorizontalSelectorIndicator : MonoBehaviour
{
    [SerializeField]
    private GameObject onState;

    [SerializeField]
    private GameObject offState;

    public void SetActiveState(bool isActive)
    {
        if (onState != null)
            onState.SetActive(isActive);

        if (offState != null)
            offState.SetActive(!isActive);
    }
}
