"""Mechanical extraction of ImageGen sheets; never draws/reconstructs anatomy.

One scale per clip, translated onto a common ground anchor. Material-constrained
master palette. Effects use an explicit luminance cutoff to remove generated bloom.
"""
from pathlib import Path
import hashlib
import json
import math
import numpy as np
from PIL import Image, ImageDraw

ROOT = Path(__file__).resolve().parent
MASTER = ROOT.parent / 'UpdateTrial-20260909'
CLIPS = json.loads((ROOT / 'clips.json').read_text(encoding='utf-8-sig'))
PALETTE = json.loads((MASTER / 'qa.json').read_text())['palette_by_material']
RAMPS = {k: np.array([list(bytes.fromhex(x[1:])) for x in v], dtype=np.int32)
         for k, v in PALETTE.items()}
for folder in ['Atlases', 'Frames', 'Previews']:
    (ROOT / folder).mkdir(exist_ok=True)


def foreground(rgb, effect=False):
    if effect:
        # Sources have a black backdrop and unwanted soft bloom. Keep solid core.
        return (rgb[..., 1] >= 115) & (rgb[..., 2] >= 105)
    r, g, b = rgb.astype(np.int32).transpose(2, 0, 1)
    return ~((r > 180) & (b > 180) & (g < 110))


def materials(rgb, visible, effect=False):
    r, g, b = rgb.astype(float).transpose(2, 0, 1)
    groups = np.full(visible.shape, -1, dtype=int)
    groups[visible] = 2
    groups[visible & (r > g * 1.28)] = 3
    groups[visible & (b >= r * .98) & (r > g * 1.05)] = 1
    groups[visible & (g > r * 1.2) & (b > r * 1.2) & (g >= b * .85) & (g > 75)] = 4
    groups[visible & ((rgb.max(axis=2) < 90) | ((r < 70) & (g < 85) & (b < 120)))] = 0
    if effect:
        groups[visible] = 4
    return groups


def sample(rgb, size, effect=False):
    h, w = rgb.shape[:2]
    # Interior 3x3 median sampling avoids averaging silhouette with chroma key.
    ys = np.clip(((np.arange(size) + .5) * h / size).astype(int), 1, h - 2)
    xs = np.clip(((np.arange(size) + .5) * w / size).astype(int), 1, w - 2)
    patches = np.stack([rgb[(ys + dy)[:, None], (xs + dx)[None, :]]
                        for dy in [-1, 0, 1] for dx in [-1, 0, 1]])
    reduced = np.median(patches, axis=0).astype(np.uint8)
    visible = foreground(reduced, effect)
    groups = materials(reduced, visible, effect)
    out = np.zeros((size, size, 4), dtype=np.uint8)
    out[..., 3][visible] = 255
    for group, name in enumerate(['outline', 'cloth', 'bone', 'wood', 'crystal']):
        mask = groups == group
        colors = reduced[mask].astype(np.int32)
        distances = ((colors[:, None] - RAMPS[name][None]) ** 2).sum(axis=2)
        out[..., :3][mask] = RAMPS[name][distances.argmin(axis=1)]
    return Image.fromarray(out), groups


def foot_anchor(groups):
    bone = groups == 2
    ys, xs = np.where(bone)
    if not len(ys):
        raise ValueError('Missing skeleton bone pixels')
    bottom = int(ys.max())
    feet = bone & (np.indices(bone.shape)[0] >= bottom - 2)
    fx = np.where(feet)[1]
    return round((int(fx.min()) + int(fx.max())) / 2), bottom


def palette_gif(frame):
    # Explicit shared indexed palette prevents GIF per-frame color changes.
    colors = [tuple(c) for ramp in RAMPS.values() for c in ramp.tolist()]
    out = np.zeros((frame.height, frame.width), dtype=np.uint8)
    rgba = np.asarray(frame)
    for index, color in enumerate(colors, 1):
        out[(rgba[..., :3] == color).all(axis=2) & (rgba[..., 3] > 0)] = index
    indexed = Image.fromarray(out, mode='P')
    values = [0, 0, 0] + [v for color in colors for v in color]
    indexed.putpalette(values + [0] * (768 - len(values)))
    indexed.info['transparency'] = 0
    return indexed


report = []
manifest = {'status': 'art_trial_not_imported', 'pixel_palette': PALETTE,
            'coordinate_origin': 'top_left', 'frame_order': 'row_major',
            'unity_imported': False, 'clips': []}
for clip in CLIPS:
    name, count, cols, cell = [clip[k] for k in ['name', 'frames', 'cols', 'cell']]
    source = ROOT / 'Sources' / (name + '.png')
    if not source.exists():
        continue
    effect = name.startswith('magic-')
    rows = math.ceil(count / cols)
    rgb = np.asarray(Image.open(source).convert('RGB'))
    height, width = rgb.shape[:2]
    patches = [rgb[round(i // cols * height / rows):round((i // cols + 1) * height / rows),
                   round(i % cols * width / cols):round((i % cols + 1) * width / cols)]
               for i in range(count)]
    ys = np.where(foreground(patches[0], effect))[0]
    native_size = cell if effect else round((height / rows) * 88 / (ys.max() - ys.min() + 1))
    sampled = [sample(p, native_size, effect) for p in patches]
    ground = cell // 2 + 44
    anchor_x = cell // 2 - 3
    first_anchor = None if effect else foot_anchor(sampled[0][1])
    def hood_center(groups):
        ys, xs = np.where((groups == 1) & (np.indices(groups.shape)[0] < native_size * .4))
        return (int(xs.min()) + int(xs.max())) // 2
    first_hood = hood_center(sampled[0][1]) if name.startswith('walk') else None
    frames, qa_frames, frame_info = [], [], []
    frame_dir = ROOT / 'Frames' / name
    frame_dir.mkdir(exist_ok=True)
    for i, (small, groups) in enumerate(sampled):
        if effect:
            dx = dy = 0
        else:
            footx, footy = foot_anchor(groups)
            # Death keeps horizontal debris travel; standing clips use foot-center
            # translation only. No frame is independently stretched or redrawn.
            if name.startswith('death'):
                footx = first_anchor[0]
            elif name.startswith('walk'):
                # An alternating support foot is not a stable horizontal anchor.
                footx = first_anchor[0] + hood_center(groups) - first_hood
            dx, dy = anchor_x - footx, ground - footy
        frame = Image.new('RGBA', (cell, cell))
        frame.paste(small, (dx, dy))
        pixels = np.asarray(frame)
        opaque = pixels[..., 3] > 0
        lost_pixels = int((np.asarray(small)[..., 3] > 0).sum() - opaque.sum())
        assert lost_pixels == 0, (name, i, 'clipped pixels', lost_pixels)
        assert set(np.unique(pixels[..., 3])).issubset({0, 255})
        assert not ((pixels[..., 0] > 180) & (pixels[..., 2] > 180) &
                    (pixels[..., 1] < 110) & opaque).any()
        frame.save(frame_dir / f'{name}-{i:02}.png')
        frames.append(frame)
        crystal = ((pixels[..., 1].astype(int) > pixels[..., 0].astype(int) * 1.2) &
                   (pixels[..., 2].astype(int) > pixels[..., 0].astype(int) * 1.2) &
                   (pixels[..., 1] > 70) & opaque)
        cy, cx = np.where(crystal)
        socket = [round(float(cx.mean()), 2), round(float(cy.mean()), 2)] if len(cx) and not effect else None
        frame_info.append({'index': i, 'rect': [(i % cols) * cell, (i // cols) * cell, cell, cell],
                           'staff_crystal_center_px': socket})
        qa_frames.append({'frame': i, 'bbox': list(frame.getbbox()), 'translation': [dx, dy],
                          'opaque_pixels': int(opaque.sum()), 'clipped_pixels': lost_pixels,
                          'sha256': hashlib.sha256(frame.tobytes()).hexdigest()})
    atlas = Image.new('RGBA', (cols * cell, rows * cell))
    for i, frame in enumerate(frames):
        atlas.paste(frame, ((i % cols) * cell, (i // cols) * cell))
    atlas.save(ROOT / 'Atlases' / (name + '.png'))
    zoom = 3 if cell <= 128 else 2
    contact = Image.new('RGB', (cols * cell * zoom, rows * (cell * zoom + 20)), '#303947')
    draw = ImageDraw.Draw(contact)
    for i, frame in enumerate(frames):
        x, y = i % cols * cell * zoom, i // cols * (cell * zoom + 20)
        large = frame.resize((cell * zoom, cell * zoom), Image.Resampling.NEAREST)
        contact.paste(large, (x, y + 20), large)
        draw.text((x + 6, y + 3), f'{name} | {i + 1}/{count}', fill='white')
    contact.save(ROOT / 'Previews' / (name + '-frames.png'))
    gifframes = [palette_gif(f.resize((cell * 3, cell * 3), Image.Resampling.NEAREST)) for f in frames]
    durations = [clip['ms']] * count
    if not clip['loop']:
        durations[-1] = 900  # Preview holds final pose, asset timing stays unchanged.
    gifframes[0].save(ROOT / 'Previews' / (name + '.gif'), save_all=True,
                      append_images=gifframes[1:], duration=durations, loop=0,
                      transparency=0, disposal=2, optimize=False)
    rgba = np.asarray(atlas)
    color_count = len(np.unique(rgba[..., :3][rgba[..., 3] > 0], axis=0))
    report.append({'name': name, 'source_size': [width, height],
                   'source_sha256': hashlib.sha256(source.read_bytes()).hexdigest(),
                   'native_sampling_cell': native_size, 'atlas_size': list(atlas.size),
                   'opaque_colors': color_count, 'alpha_values': [0, 255],
                   'unique_frames': len({x['sha256'] for x in qa_frames}), 'frames': qa_frames})
    manifest['clips'].append({'name': name, 'atlas': 'Atlases/' + name + '.png',
                             'cell_size': cell, 'columns': cols, 'frame_count': count,
                             'frame_duration_ms': clip['ms'], 'loop': clip['loop'],
                             'pivot_normalized': [.5, .5],
                             'suggested_release_frame_index': 4 if name.startswith('cast-') else None,
                             'frames': frame_info})
(ROOT / 'qa.json').write_text(json.dumps(report, indent=2) + '\n')
(ROOT / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
print(json.dumps([{k: v for k, v in q.items() if k != 'frames'} for q in report], indent=2))
