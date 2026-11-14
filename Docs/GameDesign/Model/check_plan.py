"""Validate the current planning package and its crosslinks; no Unity tests."""
from pathlib import Path
import json
import re
from urllib.parse import unquote

ROOT = Path(__file__).resolve().parents[3]
DOCS = ROOT/'Docs'/'GameDesign'
files = [ROOT/'GAME_DESIGN.md', ROOT/'README.md', *DOCS.glob('*.md'), *sorted((DOCS/'Catalogs').rglob('*.md'))]
errors = []
cache = {}

def anchors(path):
    if path not in cache:
        text = path.read_text(encoding='utf-8')
        values = set(re.findall(r'<a\s+id="([^"]+)"', text))
        for title in re.findall(r'^#{1,6}\s+(.+?)\s*#*$', text, re.M):
            title = re.sub(r'\[([^]]+)\]\([^)]+\)', r'\1', title).replace('`', '').replace('*', '')
            values.add(title)
            values.add(re.sub(r'[^\w\- ]', '', title.lower()).replace(' ', '-'))
        cache[path] = {v.casefold() for v in values}
    return cache[path]

for path in files:
    content = path.read_text(encoding='utf-8')
    if 'Catalogs' in path.parts and content.count('## Предложения и исправления владельца') != 1:
        errors.append(f'{path.name}: expected one owner discussion section')
    if '\ufffd' in content:
        errors.append(f'{path.name}: replacement character')
    if sum(line.strip().startswith('```') for line in content.splitlines()) % 2:
        errors.append(f'{path.name}: unmatched code fence')
    for destination in re.findall(r'\]\(([^)]+)\)', content):
        if re.match(r'^(https?://|mailto:|codex:)', destination):
            continue
        decoded = unquote(destination.strip('<>'))
        name, separator, fragment = decoded.partition('#')
        target = (path.parent/name).resolve() if name else path.resolve()
        if not target.exists():
            errors.append(f'{path.relative_to(ROOT)}: missing {destination}')
        elif separator and fragment and target.suffix.lower() == '.md' and fragment.casefold() not in anchors(target):
            errors.append(f'{path.relative_to(ROOT)}: missing heading {destination}')
    previous = None
    for number, line in enumerate(content.splitlines(), 1):
        if line.startswith('|') and '`' not in line and '\\|' not in line:
            count = line.count('|')
            if previous is not None and previous != count:
                errors.append(f'{path.name}:{number}: inconsistent table columns')
            previous = count
        else:
            previous = None

tasks = re.findall(r'^\| (T\d{2}) \|', (DOCS/'07_TechnicalRoadmap.md').read_text(encoding='utf-8'), re.M)
questions = re.findall(r'^\| (Q\d{2}) \|', (DOCS/'09_OpenQuestions.md').read_text(encoding='utf-8'), re.M)
assert len(tasks) == len(set(tasks)) == 40
assert len(questions) == len(set(questions)) == 43
catalog = json.loads((DOCS/'Catalogs'/'Data'/'expanded_catalog.json').read_text(encoding='utf-8'))
assert len(catalog['branches']) == sum(s['branches'] for s in catalog['systems'].values())
assert sum(len(r) for r in catalog['rows'].values()) == sum(s['levels'] for s in catalog['systems'].values())
assert {p.stem for p in (DOCS/'Catalogs'/'Levels').glob('*.md')} == set(catalog['rows'])
assert catalog['systems']['tower']['branches'] == 20 and catalog['systems']['cards']['branches'] == 16
for system in catalog['systems']:
    source = json.loads((DOCS/'Catalogs'/'Data'/(system+'.json')).read_text(encoding='utf-8'))
    assert sum(b['max_level'] for b in source['branches']) == catalog['systems'][system]['levels']
    for b in source['branches']:
        assert len(catalog['rows'][b['id']]) == b['max_level']
if errors:
    raise SystemExit('\n'.join(errors))
print(f'Checked {len(files)} Markdown files, file/heading links, tables, 40 tasks, 43 questions and current catalogs.')
