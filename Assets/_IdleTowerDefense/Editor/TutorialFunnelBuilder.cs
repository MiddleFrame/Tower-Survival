#if UNITY_EDITOR
using System;
using System.IO;
using System.Linq;
using TMPro;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public static class TutorialFunnelBuilder
{
    private const string TutorialSpriteFolder = "Assets/_IdleTowerDefense/Sprites/Tutorial";
    private const string TutorialPrefabFolder = "Assets/_IdleTowerDefense/Prefabs/Tutorial";
    private const string TutorialSpellFolder = "Assets/_IdleTowerDefense/ScriptableObjects/Spells";
    private const string GameScenePath = "Assets/_IdleTowerDefense/Scenes/Game.unity";
    private const string MenuScenePath = "Assets/_IdleTowerDefense/Scenes/Menu.unity";

    [MenuItem("Tools/Idle Tower Defense/Tutorial/Build Tutorial Funnel")]
    public static void Build()
    {
        if (EditorApplication.isPlayingOrWillChangePlaymode)
        {
            Debug.LogError("Exit Play Mode before building the tutorial funnel.");
            return;
        }

        Scene currentScene = SceneManager.GetActiveScene();
        if (currentScene.IsValid() && currentScene.isDirty)
        {
            Debug.LogError("Tutorial build stopped because the active scene has unsaved changes.");
            return;
        }

        string returnScenePath = currentScene.path;
        Directory.CreateDirectory(TutorialPrefabFolder);
        ImportTutorialSprites();
        AssetDatabase.Refresh(ImportAssetOptions.ForceSynchronousImport);

        Sprite finger = LoadSprite("TutorialFinger.png");
        Sprite skull = LoadSprite("PurgeSkull.png");
        Sprite arcaneEchoIcon = LoadSprite("ArcaneEcho.png");
        Sprite dagger = LoadSprite("FallingDagger.png");
        Sprite shield = LoadSprite("InvulnerabilityShield.png");

        CreateOrUpdateArcaneEcho(arcaneEchoIcon);
        UpdateExistingSpellAssets(skull);
        CreateDaggerEffectPrefab(dagger);
        CreateOverlayPrefab(finger);
        UpdateCombatSpellHudPrefab();
        UpdateMetaDropPrefab(finger);
        UpdateTowerPrefab(shield);

        ConfigureGameScene();
        ConfigureMenuScene();

        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
        if (!string.IsNullOrEmpty(returnScenePath))
            EditorSceneManager.OpenScene(returnScenePath, OpenSceneMode.Single);

        Debug.Log("Tutorial funnel assets, prefabs, and scenes built successfully.");
    }

    private static void ImportTutorialSprites()
    {
        foreach (string path in Directory.GetFiles(TutorialSpriteFolder, "*.png"))
        {
            string assetPath = path.Replace('\\', '/');
            AssetDatabase.ImportAsset(assetPath, ImportAssetOptions.ForceSynchronousImport);
            if (AssetImporter.GetAtPath(assetPath) is not TextureImporter importer)
                continue;

            importer.textureType = TextureImporterType.Sprite;
            importer.spriteImportMode = SpriteImportMode.Single;
            importer.spritePixelsPerUnit = 32f;
            importer.filterMode = FilterMode.Point;
            importer.mipmapEnabled = false;
            importer.alphaIsTransparency = true;
            importer.textureCompression = TextureImporterCompression.Uncompressed;
            importer.wrapMode = TextureWrapMode.Clamp;
            importer.SaveAndReimport();
        }
    }

    private static CombatSpellDefinition CreateOrUpdateArcaneEcho(Sprite icon)
    {
        string path = $"{TutorialSpellFolder}/Arcane Echo.asset";
        CombatSpellDefinition definition = AssetDatabase.LoadAssetAtPath<CombatSpellDefinition>(path);
        if (definition == null)
        {
            definition = ScriptableObject.CreateInstance<CombatSpellDefinition>();
            AssetDatabase.CreateAsset(definition, path);
        }

        SerializedObject serialized = new(definition);
        Set(serialized, "_spellId", "arcane_echo");
        Set(serialized, "_category", (int)CombatSpellCategory.Passive);
        Set(serialized, "_activeEffect", (int)ActiveSpellEffect.None);
        Set(serialized, "_passiveEffect", (int)PassiveSpellEffect.ArcaneEcho);
        Set(serialized, "_titleKey", "spell.arcane_echo.title");
        Set(serialized, "_descriptionKey", "spell.arcane_echo.description");
        Set(serialized, "_icon", icon);
        Set(serialized, "_baseUses", 1);
        Set(serialized, "_durationSeconds", 0f);
        Set(serialized, "_magnitude", 1f);
        Set(serialized, "_cooldownSeconds", 0.5f);
        Set(serialized, "_tutorialHintKey", "tutorial.tap_screen");
        Set(serialized, "_tutorialTarget", (int)PassiveTutorialTarget.EmptyArea);
        serialized.ApplyModifiedPropertiesWithoutUndo();
        EditorUtility.SetDirty(definition);
        return definition;
    }

    private static void UpdateExistingSpellAssets(Sprite purgeIcon)
    {
        CombatSpellDefinition purge = AssetDatabase.LoadAssetAtPath<CombatSpellDefinition>(
            $"{TutorialSpellFolder}/Purge Battlefield.asset");
        if (purge != null)
        {
            SerializedObject serialized = new(purge);
            Set(serialized, "_icon", purgeIcon);
            serialized.ApplyModifiedPropertiesWithoutUndo();
            EditorUtility.SetDirty(purge);
        }

        CombatSpellDefinition towerStrike = AssetDatabase.LoadAssetAtPath<CombatSpellDefinition>(
            $"{TutorialSpellFolder}/Tower Strike.asset");
        if (towerStrike != null)
        {
            SerializedObject serialized = new(towerStrike);
            Set(serialized, "_tutorialHintKey", "tutorial.tap_enemy");
            Set(serialized, "_tutorialTarget", (int)PassiveTutorialTarget.Enemy);
            serialized.ApplyModifiedPropertiesWithoutUndo();
            EditorUtility.SetDirty(towerStrike);
        }
    }

    private static FallingDaggerEffect CreateDaggerEffectPrefab(Sprite daggerSprite)
    {
        string materialPath = $"{TutorialPrefabFolder}/TutorialBloodPixel.mat";
        Material bloodMaterial = AssetDatabase.LoadAssetAtPath<Material>(materialPath);
        if (bloodMaterial == null)
        {
            bloodMaterial = new Material(Shader.Find("Sprites/Default"));
            AssetDatabase.CreateAsset(bloodMaterial, materialPath);
        }

        GameObject root = new("FallingDaggerEffect");
        FallingDaggerEffect effect = root.AddComponent<FallingDaggerEffect>();

        GameObject daggerObject = new("Dagger");
        daggerObject.transform.SetParent(root.transform, false);
        SpriteRenderer daggerRenderer = daggerObject.AddComponent<SpriteRenderer>();
        daggerRenderer.sprite = daggerSprite;
        daggerRenderer.sortingOrder = 70;
        daggerObject.transform.localScale = Vector3.one * 0.75f;

        GameObject bloodObject = new("BloodPixels");
        bloodObject.transform.SetParent(root.transform, false);
        ParticleSystem blood = bloodObject.AddComponent<ParticleSystem>();
        ParticleSystem.MainModule main = blood.main;
        main.loop = false;
        main.playOnAwake = false;
        main.duration = 0.12f;
        main.startLifetime = new ParticleSystem.MinMaxCurve(0.2f, 0.34f);
        main.startSpeed = new ParticleSystem.MinMaxCurve(0.45f, 0.9f);
        main.startSize = new ParticleSystem.MinMaxCurve(0.055f, 0.095f);
        main.startColor = new ParticleSystem.MinMaxGradient(
            new Color32(0x95, 0x2F, 0x3D, 0xFF), new Color32(0xC8, 0x43, 0x4E, 0xFF));
        main.gravityModifier = 0.55f;
        main.maxParticles = 4;
        main.simulationSpace = ParticleSystemSimulationSpace.World;
        ParticleSystem.EmissionModule emission = blood.emission;
        emission.rateOverTime = 0f;
        emission.SetBursts(new[] { new ParticleSystem.Burst(0f, 4) });
        ParticleSystem.ShapeModule shape = blood.shape;
        shape.shapeType = ParticleSystemShapeType.Cone;
        shape.angle = 58f;
        shape.radius = 0.02f;
        shape.rotation = new Vector3(-90f, 0f, 0f);
        ParticleSystemRenderer bloodRenderer = blood.GetComponent<ParticleSystemRenderer>();
        bloodRenderer.material = bloodMaterial;
        bloodRenderer.renderMode = ParticleSystemRenderMode.Billboard;
        bloodRenderer.sortingOrder = 69;

        SerializedObject serialized = new(effect);
        Set(serialized, "_dagger", daggerObject.transform);
        Set(serialized, "_bloodParticles", blood);
        serialized.ApplyModifiedPropertiesWithoutUndo();

        string prefabPath = $"{TutorialPrefabFolder}/FallingDaggerEffect.prefab";
        GameObject prefab = PrefabUtility.SaveAsPrefabAsset(root, prefabPath);
        UnityEngine.Object.DestroyImmediate(root);
        return prefab.GetComponent<FallingDaggerEffect>();
    }

    private static TutorialOverlayView CreateOverlayPrefab(Sprite fingerSprite)
    {
        GameObject root = UiObject("TutorialOverlay", null);
        TutorialOverlayView view = root.AddComponent<TutorialOverlayView>();

        Image dimmer = UiImage("Dimmer", root.transform, null, new Color(0.03f, 0.05f, 0.08f, 0.68f));
        Stretch(dimmer.rectTransform);
        dimmer.raycastTarget = false;

        Image dismissImage = UiImage("TapToContinue", root.transform, null, Color.clear);
        Stretch(dismissImage.rectTransform);
        Button dismiss = dismissImage.gameObject.AddComponent<Button>();
        dismiss.transition = Selectable.Transition.None;

        Image finger = UiImage("Finger", root.transform, fingerSprite, Color.white);
        finger.rectTransform.sizeDelta = new Vector2(64f, 64f);
        finger.raycastTarget = false;

        Image hintPanel = UiImage("HintPanel", root.transform,
            AssetDatabase.LoadAssetAtPath<Sprite>(
                "Assets/_IdleTowerDefense/PixelPacket/tiny_swords/UI/Buttons/Button_Blue_9Slides.png"),
            Color.white);
        hintPanel.type = Image.Type.Sliced;
        hintPanel.raycastTarget = false;
        RectTransform panelRect = hintPanel.rectTransform;
        panelRect.anchorMin = new Vector2(0.07f, 0.035f);
        panelRect.anchorMax = new Vector2(0.93f, 0.23f);
        panelRect.offsetMin = Vector2.zero;
        panelRect.offsetMax = Vector2.zero;

        GameObject textObject = UiObject("HintText", hintPanel.transform);
        TMP_Text hint = textObject.AddComponent<TextMeshProUGUI>();
        hint.font = AssetDatabase.LoadAssetAtPath<TMP_FontAsset>(
            "Assets/Resources/Localization/Neucha SDF.asset");
        hint.fontSize = 35f;
        hint.enableAutoSizing = true;
        hint.fontSizeMin = 23f;
        hint.fontSizeMax = 35f;
        hint.alignment = TextAlignmentOptions.Center;
        hint.color = new Color32(0xFF, 0xF0, 0x8A, 0xFF);
        hint.raycastTarget = false;
        RectTransform textRect = (RectTransform)textObject.transform;
        Stretch(textRect, new Vector2(24f, 14f), new Vector2(-24f, -14f));

        SerializedObject serialized = new(view);
        Set(serialized, "_dimmer", dimmer);
        Set(serialized, "_finger", finger);
        Set(serialized, "_hintPanel", panelRect);
        Set(serialized, "_hint", hint);
        Set(serialized, "_dismissButton", dismiss);
        serialized.ApplyModifiedPropertiesWithoutUndo();

        string prefabPath = $"{TutorialPrefabFolder}/TutorialOverlay.prefab";
        GameObject prefab = PrefabUtility.SaveAsPrefabAsset(root, prefabPath);
        UnityEngine.Object.DestroyImmediate(root);
        return prefab.GetComponent<TutorialOverlayView>();
    }

    private static void UpdateMetaDropPrefab(Sprite finger)
    {
        string path = "Assets/_IdleTowerDefense/Prefabs/Gameplay/MetaCurrencyDrop.prefab";
        GameObject root = PrefabUtility.LoadPrefabContents(path);
        try
        {
            Transform existing = root.transform.Find("CollectionHint");
            if (existing != null)
                UnityEngine.Object.DestroyImmediate(existing.gameObject);
            GameObject hint = new("CollectionHint", typeof(SpriteRenderer));
            hint.transform.SetParent(root.transform, false);
            hint.transform.localPosition = new Vector3(-0.62f, 0.68f, 0f);
            hint.transform.localScale = Vector3.one * 0.72f;
            SpriteRenderer renderer = hint.GetComponent<SpriteRenderer>();
            renderer.sprite = finger;
            SpriteRenderer dropRenderer = root.GetComponent<SpriteRenderer>();
            renderer.sortingLayerID = dropRenderer.sortingLayerID;
            renderer.sortingOrder = dropRenderer.sortingOrder + 2;
            hint.SetActive(false);

            SerializedObject serialized = new(root.GetComponent<MetaCurrencyDropView>());
            Set(serialized, "_collectionHint", hint);
            Set(serialized, "_collectionHintThreshold", 5f);
            serialized.ApplyModifiedPropertiesWithoutUndo();
            PrefabUtility.SaveAsPrefabAsset(root, path);
        }
        finally
        {
            PrefabUtility.UnloadPrefabContents(root);
        }
    }

    private static void UpdateCombatSpellHudPrefab()
    {
        const string path = "Assets/_IdleTowerDefense/Prefabs/UI/Spells/CombatSpellHud.prefab";
        GameObject root = PrefabUtility.LoadPrefabContents(path);
        try
        {
            CombatSpellHudView hud = root.GetComponent<CombatSpellHudView>();
            CanvasGroup visibility = root.GetComponent<CanvasGroup>();
            if (visibility == null)
                visibility = root.AddComponent<CanvasGroup>();

            SerializedObject serialized = new(hud);
            Set(serialized, "_tutorialVisibilityGroup", visibility);
            serialized.ApplyModifiedPropertiesWithoutUndo();
            PrefabUtility.SaveAsPrefabAsset(root, path);
        }
        finally
        {
            PrefabUtility.UnloadPrefabContents(root);
        }
    }

    private static void UpdateTowerPrefab(Sprite shield)
    {
        string path = "Assets/_IdleTowerDefense/Prefabs/Tower.prefab";
        GameObject root = PrefabUtility.LoadPrefabContents(path);
        try
        {
            TowerView tower = root.GetComponent<TowerView>();
            Transform existing = root.transform.Find("InvulnerabilityShield");
            if (existing != null)
                UnityEngine.Object.DestroyImmediate(existing.gameObject);
            GameObject visual = new("InvulnerabilityShield", typeof(SpriteRenderer));
            visual.transform.SetParent(root.transform, false);
            visual.transform.localPosition = new Vector3(0f, 1.22f, 0f);
            visual.transform.localScale = Vector3.one * 0.55f;
            SpriteRenderer renderer = visual.GetComponent<SpriteRenderer>();
            renderer.sprite = shield;
            renderer.sortingOrder = 80;
            visual.SetActive(false);

            SerializedObject serialized = new(tower);
            Set(serialized, "_invulnerabilityVisual", visual);
            serialized.ApplyModifiedPropertiesWithoutUndo();
            PrefabUtility.SaveAsPrefabAsset(root, path);
        }
        finally
        {
            PrefabUtility.UnloadPrefabContents(root);
        }
    }

    private static void ConfigureGameScene()
    {
        Scene scene = EditorSceneManager.OpenScene(GameScenePath, OpenSceneMode.Single);
        CombatSpellDefinition arcaneEcho = AssetDatabase.LoadAssetAtPath<CombatSpellDefinition>(
            $"{TutorialSpellFolder}/Arcane Echo.asset");
        GameObject daggerPrefabObject = AssetDatabase.LoadAssetAtPath<GameObject>(
            $"{TutorialPrefabFolder}/FallingDaggerEffect.prefab");
        FallingDaggerEffect daggerPrefab = daggerPrefabObject.GetComponent<FallingDaggerEffect>();
        GameObject overlayPrefabObject = AssetDatabase.LoadAssetAtPath<GameObject>(
            $"{TutorialPrefabFolder}/TutorialOverlay.prefab");
        Sprite shield = LoadSprite("InvulnerabilityShield.png");
        CombatSpellController spells = FindInScene<CombatSpellController>(scene);
        CombatSpellHudView hud = FindInScene<CombatSpellHudView>(scene);
        World world = FindInScene<World>(scene);
        Camera camera = FindInScene<Camera>(scene);
        HorizontalSelector speed = FindInScene<HorizontalSelector>(scene);
        GameObject surrender = FindByName(scene, "Surrender");
        Canvas canvas = FindInScene<Canvas>(scene);
        if (spells == null || hud == null || world == null || canvas == null)
            throw new InvalidOperationException("Game scene is missing required tutorial references.");

        TutorialOverlayView overlay = FindInScene<TutorialOverlayView>(scene);
        if (overlay == null)
        {
            GameObject overlayObject = PrefabUtility.InstantiatePrefab(
                overlayPrefabObject, canvas.transform) as GameObject;
            overlay = overlayObject.GetComponent<TutorialOverlayView>();
            overlay.name = "TutorialOverlay";
            Stretch((RectTransform)overlay.transform);
        }

        GameObject runtime = FindByName(scene, "TutorialRuntime") ?? new GameObject("TutorialRuntime");
        SceneManager.MoveGameObjectToScene(runtime, scene);
        TutorialRunController tutorial = runtime.GetComponent<TutorialRunController>()
                                         ?? runtime.AddComponent<TutorialRunController>();
        SerializedObject tutorialSerialized = new(tutorial);
        Set(tutorialSerialized, "_overlay", overlay);
        Set(tutorialSerialized, "_spellHud", hud);
        Set(tutorialSerialized, "_surrenderButton", surrender);
        Set(tutorialSerialized, "_speedSelector", speed);
        Set(tutorialSerialized, "_worldCamera", camera);
        tutorialSerialized.ApplyModifiedPropertiesWithoutUndo();

        Image healthIndicator = CreateHealthIndicator(world, shield);
        SerializedObject spellSerialized = new(spells);
        Set(spellSerialized, "_tutorialPassiveSpell", arcaneEcho);
        Set(spellSerialized, "_randomStrikeEffectPrefab", daggerPrefab);
        Set(spellSerialized, "_towerInvulnerabilityIndicator", healthIndicator);
        spellSerialized.ApplyModifiedPropertiesWithoutUndo();

        SerializedObject worldSerialized = new(world);
        Set(worldSerialized, "_tutorial", tutorial);
        worldSerialized.ApplyModifiedPropertiesWithoutUndo();
        EditorSceneManager.MarkSceneDirty(scene);
        EditorSceneManager.SaveScene(scene);
    }

    private static Image CreateHealthIndicator(World world, Sprite shield)
    {
        SerializedObject serialized = new(world);
        Slider healthSlider = serialized.FindProperty("_healthBarValue").objectReferenceValue as Slider;
        if (healthSlider == null)
            return null;

        Transform existing = healthSlider.transform.Find("InvulnerabilityIndicator");
        GameObject indicatorObject = existing != null
            ? existing.gameObject
            : UiObject("InvulnerabilityIndicator", healthSlider.transform);
        Image image = indicatorObject.GetComponent<Image>() ?? indicatorObject.AddComponent<Image>();
        image.sprite = shield;
        image.preserveAspect = true;
        image.raycastTarget = false;
        RectTransform rect = image.rectTransform;
        rect.anchorMin = rect.anchorMax = new Vector2(1f, 0.5f);
        rect.pivot = new Vector2(0.5f, 0.5f);
        rect.anchoredPosition = new Vector2(27f, 0f);
        rect.sizeDelta = new Vector2(46f, 46f);
        indicatorObject.SetActive(false);
        return image;
    }

    private static void ConfigureMenuScene()
    {
        Scene scene = EditorSceneManager.OpenScene(MenuScenePath, OpenSceneMode.Single);
        GameObject entry = FindByName(scene, "FirstRunEntry") ?? new GameObject("FirstRunEntry");
        SceneManager.MoveGameObjectToScene(entry, scene);
        if (entry.GetComponent<FirstRunEntryController>() == null)
            entry.AddComponent<FirstRunEntryController>();
        EditorSceneManager.MarkSceneDirty(scene);
        EditorSceneManager.SaveScene(scene);
    }

    private static Sprite LoadSprite(string fileName)
    {
        return AssetDatabase.LoadAssetAtPath<Sprite>($"{TutorialSpriteFolder}/{fileName}");
    }

    private static T FindInScene<T>(Scene scene) where T : Component
    {
        return scene.GetRootGameObjects()
            .SelectMany(root => root.GetComponentsInChildren<T>(true))
            .FirstOrDefault();
    }

    private static GameObject FindByName(Scene scene, string objectName)
    {
        return scene.GetRootGameObjects()
            .SelectMany(root => root.GetComponentsInChildren<Transform>(true))
            .FirstOrDefault(item => item.name == objectName)?.gameObject;
    }

    private static GameObject UiObject(string name, Transform parent)
    {
        GameObject gameObject = new(name, typeof(RectTransform));
        if (parent != null)
            gameObject.transform.SetParent(parent, false);
        return gameObject;
    }

    private static Image UiImage(string name, Transform parent, Sprite sprite, Color color)
    {
        GameObject gameObject = UiObject(name, parent);
        Image image = gameObject.AddComponent<Image>();
        image.sprite = sprite;
        image.color = color;
        return image;
    }

    private static void Stretch(RectTransform rect, Vector2? offsetMin = null, Vector2? offsetMax = null)
    {
        rect.anchorMin = Vector2.zero;
        rect.anchorMax = Vector2.one;
        rect.pivot = new Vector2(0.5f, 0.5f);
        rect.offsetMin = offsetMin ?? Vector2.zero;
        rect.offsetMax = offsetMax ?? Vector2.zero;
    }

    private static void Set(SerializedObject serialized, string property, UnityEngine.Object value)
    {
        serialized.FindProperty(property).objectReferenceValue = value;
    }

    private static void Set(SerializedObject serialized, string property, string value)
    {
        serialized.FindProperty(property).stringValue = value;
    }

    private static void Set(SerializedObject serialized, string property, int value)
    {
        serialized.FindProperty(property).intValue = value;
    }

    private static void Set(SerializedObject serialized, string property, float value)
    {
        serialized.FindProperty(property).floatValue = value;
    }
}
#endif
