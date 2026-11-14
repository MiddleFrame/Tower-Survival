"""Verify current design ledgers and gradual effects, not Unity combat or retention."""
from collections import Counter
import copy
import json
import math
from build_upgrade_catalogs import DATA, RESOURCE_DATA, SOURCES, expand, production, check_semantics


def pay(wallet, cost, accessible):
    # All validation precedes mutation, including a closed component in a mixed bill.
    if any(type(amount) is not int or amount <= 0 for amount in cost.values()):
        return False
    if any(key not in accessible or wallet.get(key, 0) < amount for key, amount in cost.items()):
        return False
    for key, amount in cost.items():
        wallet[key] -= amount
    return True


def tower_transmission(tower_fraction, research_percent, armor=.60):
    return 1-max(0, armor-tower_fraction-research_percent/100)


def main():
    branches = [b for source in SOURCES for b in json.loads((DATA/(source+'.json')).read_text(encoding='utf-8'))['branches']]
    by_id = {b['id']: b for b in branches}
    rows = {key: expand(b) for key, b in by_id.items()}
    check_semantics(by_id, rows)
    for raw in [k for k in RESOURCE_DATA['resources'] if k.startswith('RAW_')]:
        r = RESOURCE_DATA['resources'][raw]
        assert math.isclose(r['kills_per_minute']*r['drop_chance']*(r['min_drop']+r['max_drop'])/2, r['expected_per_minute'])
        coal_chance = r['coal_per_minute']/r['kills_per_minute']/3
        assert r['drop_chance']+coal_chance <= 1
    for resource, recipe in RESOURCE_DATA['recipes'].items():
        assert not RESOURCE_DATA['resources'][resource]['purchasable']
        assert recipe['output'] == {resource: 1}
        assert all(type(v) is int and v > 0 for v in recipe['input'].values())
        assert recipe['minutes'] > 0
    package = rows['BLD04'][:1]+rows['R_GATE02']+rows['TW06'][:20]+rows['LAB_PIERCING'][:10]
    direct = Counter()
    for row in package:
        direct.update(row['cost'])
        assert all(RESOURCE_DATA['resources'][key]['unlock'] in ['START', 'G01'] for key in row['cost'])
    ingredients, forge_minutes = production(direct)
    total = Counter({k:v for k,v in direct.items() if not k.startswith('INGOT_')})
    total.update(ingredients)
    assert dict(total) == {'RAW_CU': 1307, 'RAW_FE': 1962, 'COAL': 274}, total
    assert forge_minutes == 326
    assert sum(r['minutes'] for r in package) == 285
    before = tower_transmission(0, 0)
    # Research unlock is a permission; it contributes no penetration.
    assert rows['R_GATE02'][0]['effect'] == 0
    assert tower_transmission(rows['R_GATE02'][0]['effect'], 0) == before
    previous = 0
    for row in rows['TW06'][:20]:
        assert math.isclose(row['effect']-previous, .01)
        previous = row['effect']
    previous = 0
    for row in rows['LAB_PIERCING'][:10]:
        assert math.isclose(row['effect']-previous, .6)
        previous = row['effect']
    after = tower_transmission(rows['TW06'][19]['effect'], rows['LAB_PIERCING'][9]['effect'])
    assert math.isclose(after, .66) and math.isclose(after/before, 1.65)
    mixed_ratio = (.5*after+.5)/(.5*before+.5)
    assert math.isclose(mixed_ratio, 1.1857142857142857)
    assert tower_transmission(.9, 100) == 1  # Penetration never turns armor into a damage amplifier.
    # Large-hit protection affects only the excess over 25% max HP.
    burst = rows['TW13'][14]['effect']+rows['LAB_BURST'][9]['effect']/100
    assert math.isclose(burst, .25)
    def hit(damage, hp):
        threshold = .25*hp
        return min(damage, threshold)+max(0, damage-threshold)*(1-burst)
    assert hit(20, 100) == 20 and hit(60, 100) == 51.25
    allowed = {key for key, r in RESOURCE_DATA['resources'].items() if r['unlock'] in ['START', 'G01']}
    cost = {'RAW_CU': 10, 'RAW_FE': 20, 'RAW_AG': 1}
    wallet = {'RAW_CU': 10**9, 'RAW_FE': 100, 'RAW_AG': 100}
    original = copy.deepcopy(wallet)
    assert not pay(wallet, cost, allowed) and wallet == original
    for invalid in [{'RAW_CU': -1}, {'RAW_CU': 1.5}, {'RAW_FE': 101}]:
        assert not pay(wallet, invalid, allowed) and wallet == original
    assert pay(wallet, {'RAW_CU': 10, 'RAW_FE': 20}, allowed)
    assert wallet == {'RAW_CU': 10**9-10, 'RAW_FE': 80, 'RAW_AG': 100}
    farm_minutes = sum(total[key]/RESOURCE_DATA['resources'][key]['expected_per_minute'] for key in ['RAW_CU', 'RAW_FE'])
    coal_expected = sum(total[key]/RESOURCE_DATA['resources'][key]['expected_per_minute']*RESOURCE_DATA['resources'][key]['coal_per_minute'] for key in ['RAW_CU', 'RAW_FE'])
    assert coal_expected > total['COAL']
    print(json.dumps(dict(g02_direct=dict(direct), production_inputs=ingredients, total_raw_and_coal=dict(total), forge_base_minutes=forge_minutes,
        build_and_research_minutes=sum(r['minutes'] for r in package), raw_farm_expected_minutes=round(farm_minutes, 4),
        tower_transmission_before=before, tower_transmission_after=after, equal_base_tower_spell_damage_ratio=mixed_ratio,
        checks='Resource rates, no paid ingots, old-tier recurrence, G02 source access, production ledger, small penetration steps, burst excess, atomic mixed payments. No full graph or gameplay simulation.'), ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()
