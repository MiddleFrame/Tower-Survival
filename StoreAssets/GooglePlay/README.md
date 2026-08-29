# Google Play screenshots

Localized phone screenshots are stored in `screenshots/<locale>/` and numbered in
their intended display order. Every output is a 1080×1920 PNG (9:16).

- `01.png` — tower upgrades
- `02.png` — challenge selection
- `03.png` — mine income
- `04.png` — village overview

The promotional ribbon is localized. Text that belongs to the captured in-game UI
is intentionally left unchanged; Google Play permits this, while promotional text
overlays should be localized.

Regenerate all 40 files with:

```powershell
C:\Users\tente\.cache\codex-runtimes\codex-primary-runtime\dependencies\python\python.exe Tools\GenerateGooglePlayScreenshots.py
```
