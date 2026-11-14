from pathlib import Path
import hashlib
import json
import re
import subprocess
import numpy as np
from PIL import Image, ImageSequence

root = Path(__file__).resolve().parent
manifest = json.loads((root / 'manifest.json').read_text())
allowed = {tuple(bytes.fromhex(c[1:])) for ramp in manifest['pixel_palette'].values() for c in ramp}
results = []
for clip in manifest['clips']:
    name, cell = clip['name'], clip['cell_size']
    atlas = np.asarray(Image.open(root / clip['atlas']).convert('RGBA'))
    assert set(np.unique(atlas[..., 3])) <= {0, 255}
    assert all(tuple(c) in allowed for c in np.unique(atlas[..., :3][atlas[..., 3] > 0], axis=0))
    assert (atlas[..., :3][atlas[..., 3] == 0] == 0).all()
    gif = Image.open(root / 'Previews' / (name + '.gif'))
    assert gif.n_frames == clip['frame_count']
    for i, gif_frame in enumerate(ImageSequence.Iterator(gif)):
        png = Image.open(root / 'Frames' / name / f'{name}-{i:02}.png').convert('RGBA')
        expected = np.asarray(png.resize((cell * 3, cell * 3), Image.Resampling.NEAREST))
        actual = np.asarray(gif_frame.convert('RGBA'))
        assert np.array_equal(expected[..., 3], actual[..., 3])
        assert np.array_equal(expected[expected[..., 3] > 0], actual[actual[..., 3] > 0])
    if name == 'death-side':
        assert (atlas[192:, 576:, 3] == 0).all()
    results.append({'clip': name, 'frames': clip['frame_count'], 'png_checks': 'passed',
                    'gif_decoded_frames_match_png': 'passed'})
master = root.parent / 'UpdateTrial-20260909' / 'skeleton-mage-idle-96.png'
sha = hashlib.sha256(master.read_bytes()).hexdigest()
assert sha == 'e96cbf79b24eb270f3dbccb1688ca7e598dedc21c3fc358081aef32ddde247b3'
script = re.search(r'<script>(.*?)</script>', (root / 'preview.html').read_text(encoding='utf-8'), re.S).group(1)
check = subprocess.run(['node', '--check', '--input-type=commonjs'], input=script,
                       text=True, encoding='utf-8', capture_output=True)
assert check.returncode == 0, check.stderr
report = {'clips': results, 'total_frames': sum(c['frame_count'] for c in manifest['clips']),
          'master_sha256_unchanged': sha, 'viewer_js_syntax': 'passed',
          'viewer_browser_test': 'blocked_by_browser_local_url_policy',
          'unity_validation': 'not_performed_no_import'}
(root / 'verification.json').write_text(json.dumps(report, indent=2) + '\n')
print(f"Validated {len(results)} clips, {report['total_frames']} frames; master unchanged; JS syntax passed.")
