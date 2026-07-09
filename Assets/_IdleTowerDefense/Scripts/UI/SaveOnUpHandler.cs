using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class SaveOnUpHandler : MonoBehaviour, IPointerUpHandler
{
    [SerializeField]
    private Slider slider;

    public event EndSliderDragEventHandler EndDrag;

    private float SliderValue => slider.value;

    public void OnPointerUp (PointerEventData data)
    {
        if (slider == null)
        {
            Debug.LogError($"{nameof(SaveOnUpHandler)} on {name} has no Slider reference.", this);
            return;
        }

        if (EndDrag != null) 
        {
            EndDrag(SliderValue);
        }
    } 

#if UNITY_EDITOR
    private void Reset()
    {
        TryGetComponent(out slider);
    }

    private void OnValidate()
    {
        if (slider == null)
            TryGetComponent(out slider);
    }
#endif
}

public delegate void EndSliderDragEventHandler (float val);
