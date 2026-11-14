"""Checks for exact prices and preservation of future owner review notes."""
import copy
import json
from pathlib import Path
import tempfile
from build_upgrade_catalogs import DATA, FEEDBACK, expand, interpolate, write_preserving_feedback


def main():
    # The generated portion can change; the owner's complete tail must not.
    with tempfile.TemporaryDirectory(prefix='tower_catalog_review_') as folder:
        target = Path(folder) / 'review.md'
        note = '\n\n| V-01 | 2 | Дорого: хочу обсудить 15 часов | На обсуждении |\n\nМой дополнительный текст.\n'
        target.write_text('# Old\n\n' + FEEDBACK + note, encoding='utf-8')
        for new in ['# New\n\nNew table.', '# Regenerated\n\nAnother table.']:
            write_preserving_feedback(target, new)
            result = target.read_text(encoding='utf-8')
            assert result.startswith(new) and result.split(FEEDBACK, 1)[1] == note
            assert result.count(FEEDBACK) == 1
    # Prices use exact rounding up, including a non-integral intermediate value.
    assert interpolate(20, 80, 1, 19, True) == 24
    assert interpolate(20, 80, 19, 19, True) == 80
    fixture = json.loads((DATA/'laboratory.json').read_text(encoding='utf-8'))['branches'][0]
    rows = expand(fixture)
    assert rows[0]['cost'] == {'RAW_CU': 20} and rows[0]['minutes'] == 1
    assert rows[1]['cost'] == {'RAW_CU': 24} and rows[1]['minutes'] == 2
    assert len(rows) == 100 and rows[-1]['effect'] == 10
    invalid = []
    for key, value in [('from', 2), ('cost_start', {'RAW_CU': -2}), ('minutes_start', -1)]:
        branch = copy.deepcopy(fixture); branch['segments'][0][key] = value; invalid.append(branch)
    branch = copy.deepcopy(fixture)
    branch['segments'][0]['cost_start'] = {'RAW_UNKNOWN': 20}
    branch['segments'][0]['cost_end'] = {'RAW_UNKNOWN': 80}
    invalid.append(branch)
    for branch in invalid:
        try:
            expand(branch)
        except AssertionError:
            continue
        raise AssertionError('Invalid authored schedule accepted')
    print('Owner notes preserved across two regenerations; exact rounding and four invalid schedules checked.')


if __name__ == '__main__':
    main()
