using UnityEngine;
using UnityEngine.Rendering.Universal;

[RequireComponent(typeof(Light2D))]
public class LocalLightController : MonoBehaviour
{
    public float baseIntensity = 0f;

    [SerializeField]
    private Light2D light2D;

    [SerializeField]
    private DayNightController dayNightController;

    private float currentMultiplier = 1f;

    private void Awake()
    {
        if (!ValidateReferences())
            return;
        
        if (baseIntensity <= 0f)
        {
            baseIntensity = light2D.intensity;
        }
    }

    private void Start()
    {
        SubscribeToDayNightController();
    }

    private void UpdateMultiplier(float multiplier)
    {
        currentMultiplier = multiplier;
        if (light2D != null)
        {
            light2D.intensity = baseIntensity * currentMultiplier;
        }
    }

    private void OnDestroy()
    {
        if (dayNightController != null)
        {
            dayNightController.OnLocalLightsMultiplierChanged -= UpdateMultiplier;
        }
    }

    public void SetBaseIntensity(float newBaseIntensity)
    {
        baseIntensity = newBaseIntensity;
        if (dayNightController != null && light2D != null)
        {
            light2D.intensity = baseIntensity * currentMultiplier;
        }
    }

    public void SetDayNightController(DayNightController newDayNightController)
    {
        if (dayNightController == newDayNightController)
            return;

        if (dayNightController != null)
            dayNightController.OnLocalLightsMultiplierChanged -= UpdateMultiplier;

        dayNightController = newDayNightController;
        SubscribeToDayNightController();
    }

#if UNITY_EDITOR
    private void Reset()
    {
        TryGetComponent(out light2D);
    }

    private void OnValidate()
    {
        if (light2D == null)
            TryGetComponent(out light2D);
    }
#endif

    private bool ValidateReferences()
    {
        if (light2D != null)
            return true;

        Debug.LogError($"{nameof(LocalLightController)} on {name} has no Light2D reference.", this);
        enabled = false;
        return false;
    }

    private void SubscribeToDayNightController()
    {
        if (dayNightController == null)
        {
            Debug.LogWarning($"{nameof(LocalLightController)} on {name} has no DayNightController reference.", this);
            return;
        }

        dayNightController.OnLocalLightsMultiplierChanged -= UpdateMultiplier;
        dayNightController.OnLocalLightsMultiplierChanged += UpdateMultiplier;
        UpdateMultiplier(dayNightController.GetCurrentLocalMultiplier());
    }
}
