# Android Build Size Report - 2026-07-10

Build inspected:

- `C:\Users\tente\Desktop\TowerBuikd\build.aab`
- AAB size: `69.51 MB`
- AAB compressed entry sum: `69.07 MB`
- AAB uncompressed entry sum: `267.55 MB`
- Unity build report complete build size: `453.8 MB`
- Unity user assets: `13.7 MB`

## AAB Breakdown

| Group | Uncompressed | Compressed |
| --- | ---: | ---: |
| `BUNDLE-METADATA/com.android.tools.build.obfuscation` | 120.99 MB | 12.58 MB |
| `base/dex` | 58.30 MB | 21.86 MB |
| `base/lib` | 57.82 MB | 20.97 MB |
| `base/assets` | 22.04 MB | 10.19 MB |
| `base/res` | 5.61 MB | 2.55 MB |

The biggest local AAB entry is `proguard.map`. It increases the uploaded `.aab` by about `12.6 MB`, but it is bundle metadata, not game content delivered as runtime assets.

## Unity Asset Report

Unity reports only `13.7 MB` of user assets:

| Category | Size |
| --- | ---: |
| Textures | 8.2 MB |
| Sounds | 1.8 MB |
| Shaders | 2.1 MB |
| Other assets | 1.1 MB |
| Animations | 204.8 KB |

Top included user assets:

- `Assets/_IdleTowerDefense/Sound/Themes/a-robust-crew.mp3` - `1.0 MB`
- `Assets/_IdleTowerDefense/PixelPacket/tiny_swords/Buildings/Wood_Tower/Wood_Tower_Purple.aseprite` - `1.0 MB`
- `Assets/_IdleTowerDefense/Fonts/PatrickHandSC-Regular SDF.asset` - `1.0 MB`
- `Assets/_IdleTowerDefense/Sound/Themes/Killing master 2.ogg` - `752.6 KB`
- `Assets/_IdleTowerDefense/Sprites/Logo.png` - `483.1 KB`

## Main Cause

The build is not large because of 2D art. The main size is Android code:

- Yodo1 MAS pulls a broad mediation set: AdMob, AppLovin, ironSource, BidMachine, Bigo, Facebook, Fyber, InMobi, Vungle, Mintegral, Moloco, Pangle, UnityAds, Yandex, YSO, and adapters.
- This explains the `8` dex files and much of the native/resource payload.
- IL2CPP/Unity native runtime is also significant and mostly expected: `libil2cpp.so` compressed `10.31 MB`, `libunity.so` compressed `9.36 MB`.

## Recommended Next Actions

1. Decide whether all Yodo1 mediation networks are needed. Removing unused networks is the only likely large win.
2. Keep `Minify Release` on. Disabling it may shrink/removes `proguard.map` from the AAB metadata, but runtime code delivery can get larger.
3. Rename or move `Assets/_IdleTowerDefense/PixelPacket/tiny_swords/Resources` if those demo resources are not used. This saves only about `0.6 MB`, but it is clean.
4. Reduce `PatrickHandSC-Regular SDF.asset` atlas size if text quality allows.
5. Keep texture work targeted. Total texture payload is only `8.2 MB`, so texture optimization will not solve the main AAB size.
6. Try `Managed Stripping Level: High` only after testing ES3, IAP, ads, and saves on device.
