"""Reduce the enlarged 96px mage and remove its explicitly requested chroma key.

Pillow + NumPy. No drawing, anatomy patches, generation calls, or Unity changes.
"""

import hashlib
import json
from pathlib import Path

import numpy as np
from PIL import Image, ImageDraw


ROOT = Path(__file__).resolve().parent
SOURCE = ROOT / "skeleton-mage-generated-source.png"
rgb = np.asarray(Image.open(SOURCE).convert("RGB"))
height, width = rgb.shape[:2]


def key(pixels):
    return (pixels[..., 0] > 190) & (pixels[..., 2] > 190) & (pixels[..., 1] < 100)


small = np.zeros((96, 96, 4), dtype=np.uint8)
for y in range(96):
    for x in range(96):
        cx = int((x + 0.5) * width / 96)
        cy = int((y + 0.5) * height / 96)
        # Sampling inside each logical cell avoids averaging the silhouette
        # with the magenta backdrop, which would create a colored fringe.
        patch = rgb[cy - 2:cy + 3, cx - 2:cx + 3].reshape(-1, 3)
        background = key(patch)
        if background.mean() < 0.5:
            small[y, x] = [*np.median(patch[~background], axis=0).astype(np.uint8), 255]

native = Image.fromarray(small)
native.save(ROOT / "skeleton-mage-sampled-96.png")

# Classify the source colors into material families before palette reduction.
# This prevents the global nearest-color substitution used in the rejected test.
samples = small[:, :, :3].astype(float)
r, g, b = samples.transpose(2, 0, 1)
visible = small[:, :, 3] != 0
groups = np.full((96, 96), -1, dtype=int)
groups[visible] = 2  # warm bone
groups[visible & (r > g * 1.28)] = 3  # brown wood/leather
groups[visible & (b >= r * 0.98) & (r > g * 1.05)] = 1  # purple cloth
groups[visible & (g > r * 1.2) & (b > r * 1.2)] = 4  # teal crystal
groups[visible & (samples.max(axis=2) < 70)] = 0  # dark outline

palette_by_material = {}
for group, name, count in [(0, "outline", 2), (1, "cloth", 4), (2, "bone", 5),
                           (3, "wood", 4), (4, "crystal", 4)]:
    mask = groups == group
    colors = small[:, :, :3][mask]
    if not len(colors):
        continue
    strip = Image.fromarray(colors.reshape(1, -1, 3))
    reduced = np.asarray(strip.quantize(colors=count, method=Image.Quantize.MEDIANCUT,
                                        dither=Image.Dither.NONE).convert("RGB")).reshape(-1, 3)
    small[:, :, :3][mask] = reduced
    palette_by_material[name] = ["#" + bytes(color).hex() for color in np.unique(reduced, axis=0)]

sprite = Image.fromarray(small)
target = ROOT / "skeleton-mage-idle-96.png"
sprite.save(target)
sprite.resize((576, 576), Image.Resampling.NEAREST).save(ROOT / "skeleton-mage-preview-6x.png")

proof = Image.new("RGB", (768, 768))
for index, color in enumerate(["#f7f7f7", "#151a28", "#40523f", "#75464d"]):
    tile = Image.new("RGBA", (96, 96), color)
    tile.alpha_composite(sprite)
    proof.paste(tile.convert("RGB").resize((384, 384), Image.Resampling.NEAREST),
                ((index % 2) * 384, (index // 2) * 384))
proof.save(ROOT / "skeleton-mage-alpha-proof-4x.png")

reference = Image.open(ROOT.parent.parent / "SkeletonHatchet" / "skeleton-hatchet-approved-96.png").convert("RGBA")
comparison = Image.new("RGB", (816, 432), "#40523f")
draw = ImageDraw.Draw(comparison)
for index, frame in enumerate((reference, sprite)):
    zoom = frame.resize((384, 384), Image.Resampling.NEAREST)
    comparison.paste(zoom, (12 + 408 * index, 36), zoom)
    draw.text((12 + 408 * index, 12), "Reference / 96 x 96" if index == 0 else "Mage / 96 x 96", fill="white")
comparison.save(ROOT / "skeleton-mage-comparison-4x.png")


def decode_cbor(buf, pos=0):
    lead = buf[pos]
    pos += 1
    major, info = lead >> 5, lead & 31
    if info < 24:
        n = info
    elif info in (24, 25, 26, 27):
        size = 1 << (info - 24)
        n = int.from_bytes(buf[pos:pos + size], "big")
        pos += size
    else:
        raise ValueError("Unsupported CBOR length in provenance")
    if major in (0, 1):
        return (n if major == 0 else -1 - n), pos
    if major in (2, 3):
        data = buf[pos:pos + n]
        return (data.decode("utf-8") if major == 3 else f"[bytes:{n}]"), pos + n
    if major == 4:
        result = []
        for _ in range(n):
            value, pos = decode_cbor(buf, pos)
            result.append(value)
        return result, pos
    if major == 5:
        result = {}
        for _ in range(n):
            field, pos = decode_cbor(buf, pos)
            value, pos = decode_cbor(buf, pos)
            result[field] = value
        return result, pos
    if major == 6:
        return decode_cbor(buf, pos)
    if major == 7:
        return {20: False, 21: True, 22: None}.get(info, n), pos
    raise ValueError("Unsupported CBOR value")


data = SOURCE.read_bytes()
pos = 8
provenance = None
while pos < len(data):
    length = int.from_bytes(data[pos:pos + 4], "big")
    if data[pos + 4:pos + 8] == b"caBX":
        block = data[pos + 8:pos + 8 + length]
        for mark in range(4, len(block) - 4):
            if block[mark:mark + 4] != b"cbor":
                continue
            box_size = int.from_bytes(block[mark - 4:mark], "big")
            payload = block[mark + 4:mark - 4 + box_size]
            if b"softwareAgent" in payload:
                provenance, _ = decode_cbor(payload)
    pos += length + 12

output = np.asarray(Image.open(target))
opaque = output[:, :, 3] == 255
assert output.shape == (96, 96, 4)
assert sorted(np.unique(output[:, :, 3]).tolist()) == [0, 255]
assert not key(output[:, :, :3][opaque]).any()
assert np.all(output[:, :, :3][~opaque] == 0)
teal_outside_crystal = np.argwhere((groups == 4) & ((np.indices((96, 96))[1] < 65) |
                                                   (np.indices((96, 96))[0] > 43)))
report = {
    "source_size": [width, height],
    "requested_logical_grid": [96, 96],
    "sample_cell_size": [width / 96, height / 96],
    "output_size": list(sprite.size),
    "visible_bounds": list(sprite.getbbox()),
    "alpha_values": [0, 255],
    "opaque_colors": len(np.unique(output[:, :, :3][opaque], axis=0)),
    "palette_by_material": palette_by_material,
    "teal_outside_crystal_yx": teal_outside_crystal.tolist(),
    "source_sha256": hashlib.sha256(data).hexdigest(),
    "output_sha256": hashlib.sha256(target.read_bytes()).hexdigest(),
    "source_c2pa_actions": provenance,
    "c2pa_signature_verified": False,
    "unity_imported": False,
}
(ROOT / "qa.json").write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
print(json.dumps(report, ensure_ascii=False, indent=2))
