using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

[Serializable]
public class VolumeSettings 
{
    public float postExposure = 0f;
    public float contrast = 0f;
    public float saturation = 0f;
    public Color colorFilter = Color.white;

    public float vignetteIntensity = 0f;
    public float vignetteSmoothness = 0f;
    public Color vignetteColor = Color.black;
}

[Serializable]
public class TimeOfDayPreset
{
    public float globalLightIntensity = 1f;
    public Color globalLightColor = Color.white;
    [Range(0f, 2f)] public float localLightsMultiplier = 1f;
    public VolumeSettings volumeSettings;
}

public class DayNightController : MonoBehaviour
{
    [Header("References")]
    public Light2D globalLight;
    public Volume postProcessVolume;

    [Header("Time Settings")]
    public float cycleDuration = 120f;
    [Range(0f, 1f)] public float currentTime = 0.5f;
    public bool autoUpdate = true;

    [Header("Presets")]
    public TimeOfDayPreset nightPreset;
    public TimeOfDayPreset dawnPreset;
    public TimeOfDayPreset dayPreset;
    public TimeOfDayPreset duskPreset;

    // Событие для локальных источников
    public event Action<float> OnLocalLightsMultiplierChanged;

    private float[] keyTimes = { 0f, 0.25f, 0.5f, 0.75f, 1f };
    private TimeOfDayPreset[] presets;
    private float currentLocalMultiplier = 1f; // текущее значение множителя

    private ColorAdjustments colorAdjustments;
    private Vignette vignette;

    private void Start()
    {
        presets = new TimeOfDayPreset[] { nightPreset, dawnPreset, dayPreset, duskPreset, nightPreset };

        if (postProcessVolume != null && postProcessVolume.profile != null)
        {
            postProcessVolume.profile.TryGet(out colorAdjustments);
            postProcessVolume.profile.TryGet(out vignette);
        }

        ApplyTime(currentTime);
    }

    private void Update()
    {
        if (autoUpdate)
        {
            currentTime += Time.deltaTime / cycleDuration;
            if (currentTime > 1f)
                currentTime -= 1f;
        }
        ApplyTime(currentTime);
    }

    public void SetTime(float time)
    {
        currentTime = Mathf.Repeat(time, 1f);
        ApplyTime(currentTime);
    }

    public float GetCurrentLocalMultiplier()
    {
        return currentLocalMultiplier;
    }

    private void ApplyTime(float t)
    {
        int index1 = 0;
        for (int i = 0; i < keyTimes.Length - 1; i++)
        {
            if (t >= keyTimes[i] && t <= keyTimes[i + 1])
            {
                index1 = i;
                break;
            }
        }
        int index2 = index1 + 1;
        float time1 = keyTimes[index1];
        float time2 = keyTimes[index2];
        float lerpFactor = (t - time1) / (time2 - time1);

        TimeOfDayPreset p1 = presets[index1];
        TimeOfDayPreset p2 = presets[index2];

        if (globalLight != null)
        {
            globalLight.intensity = Mathf.Lerp(p1.globalLightIntensity, p2.globalLightIntensity, lerpFactor);
            globalLight.color = Color.Lerp(p1.globalLightColor, p2.globalLightColor, lerpFactor);
        }

        float newMultiplier = Mathf.Lerp(p1.localLightsMultiplier, p2.localLightsMultiplier, lerpFactor);
        
        if (Mathf.Abs(newMultiplier - currentLocalMultiplier) > 0.0001f)
        {
            currentLocalMultiplier = newMultiplier;
            OnLocalLightsMultiplierChanged?.Invoke(currentLocalMultiplier);
        }

        ApplyVolumeSettings(p1.volumeSettings, p2.volumeSettings, lerpFactor);
    }

    private void ApplyVolumeSettings(VolumeSettings a, VolumeSettings b, float t)
    {
        if (postProcessVolume == null) return;

        if (colorAdjustments != null)
        {
            colorAdjustments.postExposure.value = Mathf.Lerp(a.postExposure, b.postExposure, t);
            colorAdjustments.contrast.value = Mathf.Lerp(a.contrast, b.contrast, t);
            colorAdjustments.saturation.value = Mathf.Lerp(a.saturation, b.saturation, t);
            colorAdjustments.colorFilter.value = Color.Lerp(a.colorFilter, b.colorFilter, t);
        }

        if (vignette != null)
        {
            vignette.intensity.value = Mathf.Lerp(a.vignetteIntensity, b.vignetteIntensity, t);
            vignette.smoothness.value = Mathf.Lerp(a.vignetteSmoothness, b.vignetteSmoothness, t);
            vignette.color.value = Color.Lerp(a.vignetteColor, b.vignetteColor, t);
        }
    }
}