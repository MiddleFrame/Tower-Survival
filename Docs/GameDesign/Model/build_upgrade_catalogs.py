"""Expand individually authored upgrade schedules into reviewable per-level files.

This is a design exporter, not Unity balance or a player/retention simulation.
Each branch supplies its own level count, price/time anchors and effects.
The owner's discussion section survives regeneration verbatim.
"""
from collections import Counter
from decimal import Decimal, ROUND_CEILING
import json
from pathlib import Path
import re

BASE = Path(__file__).resolve().parents[1] / 'Catalogs'
DATA = BASE / 'Data'
LEVELS = BASE / 'Levels'
SOURCES = ['laboratory', 'buildings', 'tower', 'passives', 'actives', 'cards']
MATERIALS = ['CU', 'FE', 'AG', 'AU', 'MY', 'AS']
RESOURCE_DATA = json.loads((DATA/'resources.json').read_text(encoding='utf-8'))
RESOURCES = set(RESOURCE_DATA['resources'])
FEEDBACK = '## Предложения и исправления владельца'
FEEDBACK_BODY = '''

Запись здесь — предложение для обсуждения и пересчёта, не обязательное указание внедрить изменение. Можно оспорить эффект, показать влияние на баланс и предложить альтернативу. Реализация начинается только после согласования результата обсуждения.

| ID замечания | Уровень / диапазон | Что изменить или добавить | Почему | Предлагаемые числа | Статус / ответ после расчёта |
|---|---|---|---|---|---|
| — | — | — | — | — | На обсуждении |
'''


def write_preserving_feedback(path, text):
    tail = FEEDBACK_BODY
    if path.exists():
        previous = path.read_text(encoding='utf-8')
        if FEEDBACK in previous:
            tail = previous.split(FEEDBACK, 1)[1]
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(text.rstrip() + '\n\n' + FEEDBACK + tail, encoding='utf-8')


def cell(value):
    return str(value).replace('|', '\\|').replace('\n', ' ')


def number(value):
    return f'{value:,.6f}'.rstrip('0').rstrip('.').replace(',', ' ')


def price(cost, prefix=''):
    parts = []
    for key, value in cost.items():
        resource = RESOURCE_DATA['resources'].get(key)
        label = resource['name'] if resource else 'Дубликат ' + key.removeprefix('CARD_')
        parts.append(f'{value:,} [{label} ({key})]({prefix}08_Resources.md#{key})'.replace(',', ' '))
    return ' + '.join(parts) or '0 — бесплатное открытие'


def production(cost):
    inputs, work = Counter(), 0
    for key, quantity in cost.items():
        recipe = RESOURCE_DATA['recipes'].get(key)
        if recipe:
            assert recipe['output'] == {key: 1}
            inputs.update({k: v*quantity for k, v in recipe['input'].items()})
            work += quantity*recipe['minutes']
    return dict(inputs), work


def linked(value, by_id, level=False):
    def replacement(match):
        key = match.group(0)
        if key in by_id:
            return f'[{key}]({"" if level else "Levels/"}{key}.md)'
        if key in RESOURCES:
            return f'[{RESOURCE_DATA["resources"][key]["name"]} ({key})]({"../" if level else ""}08_Resources.md#{key})'
        if re.fullmatch(r'G0[1-6]', key):
            return f'[{key}]({"../../" if level else "../"}10_ProgressionGates.md#{key})'
        if re.fullmatch(r'L0[1-6]', key):
            return f'[{key}]({"../" if level else ""}08_Resources.md#{key})'
        return key
    return re.sub(r'(?<![A-Z0-9_])[A-Z][A-Z0-9_]+(?![A-Z0-9_])', replacement, str(value))


def minutes_label(value):
    if value == 0:
        return 'Мгновенно'
    days, remainder = divmod(int(value), 1440)
    hours, minutes = divmod(remainder, 60)
    return ' '.join(f'{n} {unit}' for n, unit in [(days, 'сут'), (hours, 'ч'), (minutes, 'мин')] if n)


def interpolate(start, end, offset, span, integer=False):
    a, b = Decimal(str(start)), Decimal(str(end))
    result = a if span == 0 else a + (b-a)*offset/span
    return int(result.to_integral_value(rounding=ROUND_CEILING)) if integer else float(round(result, 6))


def expand(branch):
    required = ['id', 'name', 'max_level', 'availability', 'purpose', 'effect_description', 'effect_unit', 'stacking', 'segments']
    assert all(k in branch for k in required), f"Incomplete branch {branch.get('id')}"
    assert re.fullmatch(r'[A-Z][A-Z0-9_]*', branch['id']), branch['id']
    maximum = branch['max_level']
    assert type(maximum) is int and maximum > 0
    result = []
    for s in branch['segments']:
        lo, hi = s['from'], s['to']
        assert type(lo) is int and type(hi) is int and lo == len(result)+1 and hi >= lo
        assert hi <= maximum
        if maximum <= 5:
            assert lo == hi, f"Discrete branch {branch['id']} must author every level"
        assert s['cost_start'].keys() == s['cost_end'].keys()
        for field in ['cost_start', 'cost_end']:
            for resource, amount in s[field].items():
                assert resource in RESOURCES or re.fullmatch(r'CARD_(P0[1-4]|A(0[1-9]|1[0-2]))', resource), resource
                assert type(amount) is int and amount > 0, (branch['id'], resource, amount)
        for field in ['minutes_start', 'minutes_end', 'effect_start', 'effect_end']:
            assert type(s[field]) in (int, float), (branch['id'], field)
        assert s['minutes_start'] >= 0 and s['minutes_end'] >= 0
        assert s['requires'].strip()
        for n in range(lo, hi+1):
            result.append(dict(id=branch['id'], level=n,
                cost={k: interpolate(v, s['cost_end'][k], n-lo, hi-lo, True) for k, v in s['cost_start'].items()},
                minutes=interpolate(s['minutes_start'], s['minutes_end'], n-lo, hi-lo, True),
                effect=interpolate(s['effect_start'], s['effect_end'], n-lo, hi-lo), requires=s['requires']))
    assert len(result) == maximum
    return result


def check_semantics(by_id, levels):
    for key in ['R_GATE02', 'R_GATE04', 'R_GATE06', 'LAB_CHARGES']:
        assert all(row['effect'] == 0 for row in levels[key]), key
    for key, rows in levels.items():
        material_rows = [r for r in rows if any(k.startswith(('RAW_', 'INGOT_')) for k in r['cost'])]
        late = [r for r in material_rows if any(RESOURCE_DATA['resources'][k]['tier'] >= 5 for k in r['cost'] if k in RESOURCES)]
        for row in late:
            assert any(0 < RESOURCE_DATA['resources'][k]['tier'] <= 3 for k in row['cost'] if k in RESOURCES), (key, row['level'], 'late price lost earlier tier')


def write_resources():
    lines = ['# Ресурсы: названия, глубина, источники и переплавка', '',
        'Актуальные проектные значения из [resources.json](Data/resources.json). Обозначения RAW — сырьё, INGOT — готовый материал. Тир материала означает глубину открытия; сложность повторного прохождения биома — отдельная шкала.', '',
        '[Каталоги прокачки](00_Index.md) · [Правила экономики](../02_EconomyModel.md) · [Рубежи](../10_ProgressionGates.md)', '',
        '## Источники сырья', '',
        'Доход ниже — математическое ожидание активной реальной минуты боя ×1 на базовом безопасном маршруте. Размер пачки равномерный. Добыча разных руд требует разных маршрутов; ни один доход не распределяется свободно между ними. Враг даёт руду ИЛИ уголь ИЛИ ничего. Призванные враги не создают повторного дропа.', '',
        '| Биом / глубина | Сырьё и источник | Доступ | Убийств/мин | Шанс руды / пачка | Руды/мин | Угля/мин | Шахта, сырья/ч ×1 |',
        '|---|---|---|---:|---|---:|---:|---:|']
    for metal in MATERIALS:
        key = 'RAW_'+metal; r = RESOURCE_DATA['resources'][key]
        unlock = 'Со старта' if r['unlock'] == 'START' else f"После [{r['unlock']}](../10_ProgressionGates.md#{r['unlock']})"
        lines.append(f"| [{r['biome']}](#{r['biome']}) / тир {r['tier']} | [{r['name']}](#{key}), {r['location']} | {unlock} | {r['kills_per_minute']} | {number(r['drop_chance']*100)}% / {r['min_drop']}–{r['max_drop']} | {r['expected_per_minute']} | {r['coal_per_minute']} | {r['mine_base_per_hour']} |")
    lines += ['', 'Угольный шанс для L01–L06: 30 /28 /25 /25 /22 /20%; пачка 2–4. Остальная вероятность — пустая добыча. Показатели шахты означают ОДИН выбранный уже открытый источник, а не одновременную добычу всех шести строк. Доход шахты — отдельный проектный параметр, ещё не проверенный по полной траектории.', '',
              '## Карточки материалов', '',
              'Готовые материалы производятся только в [кузнице](Levels/BLD02.md); сырьевой источник должен быть открыт, кузница построена. Слитки не продаются за кристаллы, рекламу, жетоны или деньги. Покупка сырья не завершает переплавку. Все рецепты ниже дают ровно одну единицу готового материала.', '']
    for metal in MATERIALS:
        raw, ingot = 'RAW_'+metal, 'INGOT_'+metal
        r = RESOURCE_DATA['resources'][raw]; p = RESOURCE_DATA['recipes'][ingot]
        lines += [f'## {r["biome"]}', '', f'**{r["location"]} / тир {r["tier"]}**', '', f'### {raw}', '', f'**{r["name"]}**', '',
            f"Тир **{r['tier']}**, [{r['biome']} / {r['location']}](#{r['biome']}). Доступ: " + ('со старта.' if r['unlock']=='START' else f"после [{r['unlock']}](../10_ProgressionGates.md#{r['unlock']})."), '',
            f"Базовая добыча: **{r['expected_per_minute']} единиц/активную минуту**. Покупка разрешается только после открытия источника, в пределах [магазинных лимитов](../05_Monetization.md). Используется напрямую в числовой прокачке и в производстве [{RESOURCE_DATA['resources'][ingot]['name']}](#{ingot}). Поздняя цена может снова требовать это сырьё вместе с более глубоким материалом.", '',
            f'### {ingot}', '', f'**{RESOURCE_DATA["resources"][ingot]["name"]}**', '',
            f"Тот же тир {r['tier']}; требуется открытый [{raw}](#{raw}) и построенная кузница. Рецепт: {price(p['input'])} → **1 {RESOURCE_DATA['resources'][ingot]['name']}**. Работа печи ×1: **{minutes_label(p['minutes'])}**. Скорость не меняет число единиц в рецепте.", '',
            'Назначение: здания, технологические допуски, новые функции, отдельные сложные ступени прокачки. В таблице уровней это самостоятельный ингредиент, который должен уже находиться на складе.', '']
    lines += ['### COAL', '', '**Уголь**', '',
        'Топливо для переплавки всех руд; также стартовая постройка кузницы. Выпадает на любом открытом маршруте, отдельный режим шахты предлагается в [зданиях](02_Buildings.md). Не заменяет отсутствующую руду. Покупки и рекламные награды ограничены [магазином](../05_Monetization.md).', '',
        '### CRYSTAL', '', '**Кристаллы**', '',
        'Единая универсальная валюта наград и покупок. Розыгрыши/ранги карт, пропуск исследований, предложения магазина. Не открывает закрытый ресурс и не покупает слитки. [Карты и расходы](06_Cards.md) · [Монетизация](../05_Monetization.md).', '',
        '### AD_TOKEN', '', '**Рекламные жетоны**', '',
        '1 жетон за подтверждённую добровольную рекламную награду, расход в таверне. Каталог товаров и дневные ограничения — в [монетизации](../05_Monetization.md).', '',
        '## Дубликаты карт', '',
        'Это предметы конкретной способности, а не новые взаимозаменяемые валюты. Для ранга требуются дубликаты именно указанной карты и кристаллы. Уровни за сырьё независимы от ранга карты.', '']
    for ability in [f'P{i:02}' for i in range(1,5)] + [f'A{i:02}' for i in range(1,13)]:
        lines += [f'### CARD_{ability}', '', f'Дубликат {ability}; [его ранги и цены](Levels/CARD_{ability}.md).', '']
    lines += ['', '## Кузница и единицы времени', '',
        'Каждый слот производит одну последовательность партий. Предел: 4 слота, ×1,6 от здания и ×1,25 от лаборатории, всего **×2** на слот. Базовые минуты работы всех рецептов делятся на 8 только для нижней границы при сразу полностью доступных слотах/скорости. Ранняя ёмкость очереди, разное открытие рецептов, дефицит угля и фактические посещения увеличивают календарное ожидание. Точные ступени — [кузница](02_Buildings.md) и [лаборатория](01_Laboratory.md).']
    write_preserving_feedback(BASE/'08_Resources.md', '\n'.join(lines))


def main():
    write_resources()
    branches, systems = [], {}
    for system in SOURCES:
        data = json.loads((DATA / (system+'.json')).read_text(encoding='utf-8'))
        assert data['system'] == system
        for branch in data['branches']:
            assert branch['id'] not in systems, f"Duplicate ID {branch['id']}"
            systems[branch['id']] = system
            branches.append(branch)
    by_id = {b['id']: b for b in branches}
    expanded = {b['id']: expand(b) for b in branches}
    check_semantics(by_id, expanded)
    assert sum(b['id'].startswith('TW') for b in branches) == 20
    stats, summaries = {}, []
    for system in SOURCES:
        own = [b for b in branches if systems[b['id']] == system]
        costs, work, jobs, chain = Counter(), 0, 0, 0
        for b in own:
            rows = expanded[b['id']]
            branch_work = sum(r['minutes'] for r in rows)
            branch_costs = Counter()
            for r in rows:
                branch_costs.update(r['cost'])
            costs.update(branch_costs); work += branch_work; jobs += len(rows); chain = max(chain, branch_work)
            forge_inputs, forge_work = production(branch_costs)
            summaries.append(dict(id=b['id'], system=system, name=b['name'], max_level=b['max_level'],
                                  total_minutes=branch_work, total_cost=dict(branch_costs), forge_inputs=forge_inputs, forge_base_minutes=forge_work))
            lines = [f"# {b['id']} — {b['name']}", '',
                'Предложенный каталог для обсуждения. Таблица раскрыта из индивидуально заданных цен и интервалов; это не проверенный игровой баланс.', '',
                f"- Уровней: **{b['max_level']}**. Уровень здесь — номер покупки этой ветки; итоговый ранг/слот уточняется эффектом.",
                f"- Доступ: {linked(b['availability'], by_id, True)}", f"- Назначение: {linked(b['purpose'], by_id, True)}",
                f"- Эффект: {linked(b['effect_description'], by_id, True)}", f"- Единица результата: {b['effect_unit']}",
                f"- Совместное действие: {linked(b['stacking'], by_id, True)}",
                f"- Сумма прямых цен: {price(dict(branch_costs), '../')}.",
                (f"- Для производства указанных в цене слитков дополнительно потребуется: {price(forge_inputs, '../')}; {minutes_label(forge_work)} работы одной печи ×1 по базовым рецептам. Это расшифровка производства, а не повторная оплата слитков." if forge_work else '- Готовые материалы в прямой цене этой ветки не требуются.'),
                (f"- Сумма работы этой последовательной ветки: {minutes_label(branch_work)} при скорости ×1. Материалы prerequisites и время кузницы считаются отдельно." if branch_work else
                 '- Все покупки этой ветки мгновенные после оплаты. Время накопления ресурсов, производства слитков и выполнения требований считается отдельно.'), '',
                '[Вернуться к каталогу](../00_Index.md). Табличный результат накопительный, не ещё одна прибавка за каждый предыдущий уровень.', '',
                '| Покупка уровня | Точная прямая цена | Время ×1 | Накопленный результат | Требования до покупки |',
                '|---:|---|---:|---:|---|']
            for r in rows:
                lines.append(f"| {r['level']} | {price(r['cost'], '../')} | {minutes_label(r['minutes'])} | {number(r['effect'])} | {cell(linked(r['requires'], by_id, True))} |")
            write_preserving_feedback(LEVELS/(b['id']+'.md'), '\n'.join(lines))
        forge_inputs, forge_work = production(costs)
        own_rows = [r for b in own for r in expanded[b['id']]]
        stats[system] = dict(branches=len(own), levels=jobs, base_minutes=work, longest_branch_minutes=chain, direct_cost=dict(costs), forge_inputs=forge_inputs, forge_base_minutes=forge_work,
                            multi_material_levels=sum(sum(k.startswith(('RAW_', 'INGOT_')) for k in r['cost']) >= 2 for r in own_rows))
    lab = stats['laboratory']
    load_days = lab['base_minutes']/1440/6/4
    chain_days = lab['longest_branch_minutes']/1440/4
    lab['work_lower_bound_days'] = load_days
    lab['chain_lower_bound_days'] = chain_days
    lab['calendar_lower_bound_years'] = max(load_days, chain_days)/365
    lab['ten_year_target_proven_by_work'] = lab['calendar_lower_bound_years'] > 10
    report = dict(version='2026-09-07-current', systems=stats, branches=summaries,
                  rows=expanded, scope='Individually authored schedules; no full prerequisite DAG, combat enumeration, retention or paid trajectory simulation.')
    (DATA/'expanded_catalog.json').write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding='utf-8')
    titles = dict(laboratory='Лаборатория', buildings='Здания', tower='Башня', passives='Пассивные', actives='Активные', cards='Карточки')
    lines = ['# Проверка индивидуальных каталогов', '',
        'Суммы ниже получены из всех опубликованных поуровневых цен и времён. Они проверяют полноту ведомости, но не доказывают доступность оплаты или интерес игрока.', '',
        '| Каталог | Ветвей / функций | Покупок уровней | Базовых минут работы |', '|---|---:|---:|---:|']
    for key, value in stats.items():
        lines.append(f"| {titles[key]} | {value['branches']} | {value['levels']} | {number(value['base_minutes'])} |")
    lines += ['', f"Всего **{len(branches)} ветвей/функций**, **{sum(s['levels'] for s in stats.values())} строк уровней**. Бесплатные функциональные открытия включены и явно стоят 0.", '',
        '## Лаборатория', '',
        f"Сумма реальной ведомости: {number(lab['base_minutes']/1440)} базовых слот-дней. При сразу максимальных 6 слотах и ×4 нижняя граница загрузки: {number(load_days)} суток. Самая длинная последовательная ветка при ×4: {number(chain_days)} суток. Более сильная из этих нижних границ: **{number(lab['calendar_lower_bound_years'])} года**.", '',
        ('Эта нижняя граница уже превышает 10 лет; доступность материалов и DAG ещё требуют отдельной проверки.' if lab['ten_year_target_proven_by_work'] else
        'Десятилетняя цель текущим объёмом работы НЕ подтверждена. Не домножать все таймеры автоматически; рассмотреть содержательные поздние исследования, реальные цепочки допуска или изменение целевого объёма после обсуждения.'), '',
        'Платный пропуск, скорость до её улучшения, простой слотов, время добычи и переплавки не входят в эти нижние границы. Сумма цен — вектор разных ресурсов, без обменного курса; стоимость слитков не списана повторно как прямая цена.', '',
        '## Что проверено и что ещё требуется', '',
        '- У каждой ветви есть все уровни без пропусков, конкретные положительные целые цены, время, эффект и условия открытия. Малые ветви до пяти уровней заданы поштучно.',
        '- Каждая цена с материалом тира 5–6 содержит также материал тира 1–3. Карты оплачиваются конкретными дубликатами и кристаллами; руды им не добавляются искусственно.',
        '- R_GATE02/04/06 открывают числовые ветви с нулевым эффектом. LAB_CHARGES разрешает частные улучшения заряда, не даёт отдельный суммируемый заряд.',
        '- Условия доступа пока читаемый авторский текст. Полная проверка DAG требует переноса их в типизированные ссылки на узлы и проверки достижимости каждого ингредиента.',
        '- Первые 10–20 дней, год покупателя и долгий бесплатный путь требуют отдельного событийного моделирования с этим каталогом. Эти суммы не являются прогнозом retention.', '',
        '## Открытый вопрос полезности добывающих улучшений', '',
        'При cap добычи +35% постоянные TW15 +10% и LAB_YIELD_CU +12% занимают22 п.п.; уже базовая P02 +20% либо A02 +15% насыщает оставшийся запас. Поздние P02_BOUNTY/CARD_P02/A02_YIELD на таком маршруте теряют дополнительный эффект. Их полезность ещё требует перераспределения бюджета или обсуждения другого эффекта; новый cap автоматически не принят. Подробности отмечены в [пассивках](04_Passives.md), [активках](05_Actives.md) и [картах](06_Cards.md).', '',
        '## Ведомость прямых расходов по системам', '']
    for key, value in stats.items():
        lines += [f"### {titles[key]}", '', 'Прямая цена: ' + price(value['direct_cost']), '',
                  f"Покупок с несколькими различными материальными ID: {value['multi_material_levels']}.", '',
                  ('На производство этих слитков: ' + price(value['forge_inputs']) + f". Работа: {minutes_label(value['forge_base_minutes'])} одной печи ×1. Условная нижняя граница загрузки при сразу 4 печах ×2: {number(value['forge_base_minutes']/8/1440)} суток. Ранняя очередь, доступ слотов, маршруты добычи, эффективность рецептов и порядок покупок здесь не моделируются." if value['forge_base_minutes'] else 'Прямая цена не требует работы кузницы.'), '']
    write_preserving_feedback(BASE/'07_CalculationReview.md', '\n'.join(lines))
    print(json.dumps(dict(branches=len(branches), levels=sum(s['levels'] for s in stats.values()), systems={k:v['branches'] for k,v in stats.items()}, lab_years_lower_bound=lab['calendar_lower_bound_years']), ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()
