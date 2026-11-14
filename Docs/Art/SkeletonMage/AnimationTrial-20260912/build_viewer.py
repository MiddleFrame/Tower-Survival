from pathlib import Path
import base64
import json

root = Path(__file__).resolve().parent
data = json.loads((root / 'manifest.json').read_text())
def uri(path):
    return 'data:image/png;base64,' + base64.b64encode(path.read_bytes()).decode('ascii')
data['images'] = {c['name']: uri(root / c['atlas']) for c in data['clips']}
data['master'] = uri(root.parent / 'UpdateTrial-20260909' / 'skeleton-mage-idle-96.png')
page = (root / 'viewer.template.html').read_text(encoding='utf-8')
(root / 'preview.html').write_text(page.replace('__DATA__', json.dumps(data, ensure_ascii=False)), encoding='utf-8')
print('Standalone preview.html created')
