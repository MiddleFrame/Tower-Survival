from pathlib import Path
from PIL import Image, ImageDraw, ImageFont
import shutil


PROJECT = Path(__file__).resolve().parents[1]
DOWNLOADS = Path.home() / "Downloads"
OUTPUT = PROJECT / "StoreAssets" / "GooglePlay" / "screenshots"
FONT = Path(r"C:\Windows\Fonts\LatoWeb-Bold.ttf")

SOURCES = [
    DOWNLOADS / "unnamed (1).png",
    DOWNLOADS / "unnamed (2).png",
    DOWNLOADS / "unnamed (3).png",
]
CITY_SOURCE = Path.home() / "AppData" / "Local" / "Temp" / "codex-clipboard-261a6683-2cbc-47e0-b237-e2a091155516.png"

CAPTIONS = {
    "en-US": ["UPGRADE THE TOWER\nAND PROTECT IT FROM ENEMIES", "PICK A CHALLENGE!", "COLLECT GOLD FROM THE MINE!"],
    "ru-RU": ["УЛУЧШАЙ БАШНЮ\nИ ЗАЩИЩАЙ ЕЁ ОТ ВРАГОВ", "ВЫБЕРИ ИСПЫТАНИЕ!", "СОБИРАЙ ЗОЛОТО В ШАХТЕ!"],
    "pt-BR": ["MELHORE A TORRE\nE PROTEJA-A DOS INIMIGOS", "ESCOLHA UM DESAFIO!", "COLETE OURO NA MINA!"],
    "es-419": ["MEJORA LA TORRE\nY PROTÉGELA DE LOS ENEMIGOS", "¡ELIGE UN DESAFÍO!", "¡RECOGE ORO DE LA MINA!"],
    "de-DE": ["VERBESSERE DEN TURM\nUND SCHÜTZE IHN VOR FEINDEN", "WÄHLE EINE HERAUSFORDERUNG!", "SAMMLE GOLD AUS DER MINE!"],
    "fr-FR": ["AMÉLIOREZ LA TOUR\nET PROTÉGEZ-LA DES ENNEMIS", "CHOISISSEZ UN DÉFI !", "RÉCOLTEZ L’OR DE LA MINE !"],
    "tr-TR": ["KULEYİ GELİŞTİR\nVE DÜŞMANLARDAN KORU", "BİR MEYDAN OKUMA SEÇ!", "MADENDEN ALTIN TOPLA!"],
    "id": ["TINGKATKAN MENARA\nDAN LINDUNGI DARI MUSUH", "PILIH TANTANGAN!", "KUMPULKAN EMAS DARI TAMBANG!"],
    "pl-PL": ["ULEPSZAJ WIEŻĘ\nI CHROŃ JĄ PRZED WROGAMI", "WYBIERZ WYZWANIE!", "ZBIERAJ ZŁOTO Z KOPALNI!"],
    "it-IT": ["POTENZIA LA TORRE\nE PROTEGGILA DAI NEMICI", "SCEGLI UNA SFIDA!", "RACCOGLI L’ORO DALLA MINIERA!"],
}


def clean_ribbon(image: Image.Image) -> None:
    """Remove the old caption while preserving the ribbon border and tails."""
    draw = ImageDraw.Draw(image)
    # The center of the ribbon is intentionally flat so translated copy remains
    # readable at thumbnail size. Its original shaded border and tails stay intact.
    draw.rectangle((32, 24, image.width - 32, 62), fill=(64, 143, 156))


def fitted_font(draw: ImageDraw.ImageDraw, text: str, max_width: int, max_height: int) -> ImageFont.FreeTypeFont:
    for size in range(20, 7, -1):
        font = ImageFont.truetype(FONT, size)
        box = draw.multiline_textbbox((0, 0), text, font=font, spacing=1, align="center")
        width = box[2] - box[0]
        height = box[3] - box[1]
        if width <= max_width and height <= max_height:
            return font
    raise RuntimeError("Caption does not fit")


def localize(source: Path, caption: str) -> Image.Image:
    image = Image.open(source).convert("RGB")
    clean_ribbon(image)
    draw = ImageDraw.Draw(image)
    font = fitted_font(draw, caption, image.width - 76, 27)
    draw.multiline_text(
        (image.width / 2, 43), caption, font=font,
        fill=(248, 250, 238), anchor="mm", align="center", spacing=1)
    return image.resize((1080, 1920), Image.Resampling.NEAREST)


def city_9_by_16() -> Image.Image:
    image = Image.open(CITY_SOURCE).convert("RGB")
    target_ratio = 9 / 16
    current_ratio = image.width / image.height
    if current_ratio > target_ratio:
        target_width = round(image.height * target_ratio)
        left = (image.width - target_width) // 2
        image = image.crop((left, 0, left + target_width, image.height))
    elif current_ratio < target_ratio:
        target_height = round(image.width / target_ratio)
        top = (image.height - target_height) // 2
        image = image.crop((0, top, image.width, top + target_height))
    return image.resize((1080, 1920), Image.Resampling.NEAREST)


def main() -> None:
    missing = [path for path in [*SOURCES, CITY_SOURCE, FONT] if not path.exists()]
    if missing:
        raise FileNotFoundError("Missing input: " + ", ".join(map(str, missing)))

    city = city_9_by_16()
    for locale, captions in CAPTIONS.items():
        locale_dir = OUTPUT / locale
        locale_dir.mkdir(parents=True, exist_ok=True)
        for index, (source, caption) in enumerate(zip(SOURCES, captions), start=1):
            localize(source, caption).save(locale_dir / f"{index:02d}.png", optimize=True)
        city.save(locale_dir / "04.png", optimize=True)

    print(f"Generated {len(CAPTIONS) * 4} screenshots in {OUTPUT}")


if __name__ == "__main__":
    main()
