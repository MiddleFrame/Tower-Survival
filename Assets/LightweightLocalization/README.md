# Lightweight Localization

Small project-local runtime localization without Addressables or third-party dependencies.

## Data

Translations live in `Assets/Resources/Localization/strings.txt` as UTF-8 TSV:

```text
key    en    ru    pt-BR    es-419    de    fr    tr    id    pl    it
menu.play    Play    Играть    Jogar    Jugar    Spielen    Jouer    Oyna    Main    Graj    Gioca
```

- Keep keys stable after release.
- English is the fallback and is also used to find existing serialized TMP text.
- Use `\\n` for a line break inside a cell. Do not put literal tab characters inside text.

## Runtime API

```csharp
LightweightLocalization.Get("menu.play");
LightweightLocalization.Bind(label, "game.tier", tier + 1);
LightweightLocalization.BindSource(label, upgrade.Title);
LightweightLocalization.SetLanguage(GameLanguage.Russian);
```

`Bind` refreshes dynamic text when the language changes. Static TMP text in loaded scenes is translated automatically by matching its English source text.

The first Unity import creates a dynamic `Neucha SDF` fallback for the Latin and Cyrillic glyphs used by the supported languages. Neucha is distributed under the SIL Open Font License; its license is stored in this package folder.
