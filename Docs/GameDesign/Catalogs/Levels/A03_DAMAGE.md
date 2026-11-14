# A03_DAMAGE — Сила небесного удара

Предложенный каталог для обсуждения. Таблица раскрыта из индивидуально заданных цен и интервалов; это не проверенный игровой баланс.

- Уровней: **60**. Уровень здесь — номер покупки этой ветки; итоговый ранг/слот уточняется эффектом.
- Доступ: A03; цепочка доB01
- Назначение: Длинная ветвь массового урона с отдельной базой против босса.
- Эффект: Личный множитель 1→2; босс сохраняет базу 2D, обычная цель 6D.
- Единица результата: множитель базовых 6D /2D
- Совместное действие: Урон = baseDamage × min(3, ownMultiplier + cardFraction + labFraction), где baseDamage = 6D обычной цели либо 2D боссу. Значение личной ветви — множитель с уже включённой единицей; cardFraction берётся прямо из CARD_ID как доля 0…0.72. labFraction = min(0.28, [LAB_SPELL_POWER](LAB_SPELL_POWER.md) / 100 + selectedProtocolBonusPercent / 100): [LAB_SPELL_POWER](LAB_SPELL_POWER.md) хранит 0…16 процентов, выбранный допустимый протокол даёт 0…12 процентов. [LAB_INTERACTION](LAB_INTERACTION.md) хранит число открытых протоколов, не процент бонуса. Множитель урона = min(3, ownMultiplier + cardFraction + labFraction). Не удаляет неуязвимость или фазовый переход.
- Сумма прямых цен: 24 583 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 342 662 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 71 660 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 33 508 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 73 503 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 290 004 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS).
- Готовые материалы в прямой цене этой ветки не требуются.
- Все покупки этой ветки мгновенные после оплаты. Время накопления ресурсов, производства слитков и выполнения требований считается отдельно.

[Вернуться к каталогу](../00_Index.md). Табличный результат накопительный, не ещё одна прибавка за каждый предыдущий уровень.

| Покупка уровня | Точная прямая цена | Время ×1 | Накопленный результат | Требования до покупки |
|---:|---|---:|---:|---|
| 1 | 30 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.016667 | старт |
| 2 | 38 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.033334 | старт |
| 3 | 46 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.05 | старт |
| 4 | 54 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.066667 | старт |
| 5 | 62 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.083334 | старт |
| 6 | 69 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.1 | старт |
| 7 | 77 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.116667 | старт |
| 8 | 85 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.133334 | старт |
| 9 | 93 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.15 | старт |
| 10 | 100 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.166667 | старт |
| 11 | 90 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 65 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.183333 | [G01](../../10_ProgressionGates.md#G01) |
| 12 | 115 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 83 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.2 | [G01](../../10_ProgressionGates.md#G01) |
| 13 | 139 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 100 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.216666 | [G01](../../10_ProgressionGates.md#G01) |
| 14 | 164 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 117 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.233333 | [G01](../../10_ProgressionGates.md#G01) |
| 15 | 188 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 134 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.25 | [G01](../../10_ProgressionGates.md#G01) |
| 16 | 213 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 152 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.266666 | [G01](../../10_ProgressionGates.md#G01) |
| 17 | 237 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 169 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.283333 | [G01](../../10_ProgressionGates.md#G01) |
| 18 | 262 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 186 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.3 | [G01](../../10_ProgressionGates.md#G01) |
| 19 | 286 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 203 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.316666 | [G01](../../10_ProgressionGates.md#G01) |
| 20 | 310 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 220 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.333333 | [G01](../../10_ProgressionGates.md#G01) |
| 21 | 250 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 130 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.35 | [G02](../../10_ProgressionGates.md#G02) |
| 22 | 328 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 172 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.366667 | [G02](../../10_ProgressionGates.md#G02) |
| 23 | 406 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 213 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.383333 | [G02](../../10_ProgressionGates.md#G02) |
| 24 | 484 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 254 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.4 | [G02](../../10_ProgressionGates.md#G02) |
| 25 | 562 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 295 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.416667 | [G02](../../10_ProgressionGates.md#G02) |
| 26 | 639 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 336 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.433333 | [G02](../../10_ProgressionGates.md#G02) |
| 27 | 717 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 377 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.45 | [G02](../../10_ProgressionGates.md#G02) |
| 28 | 795 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 418 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.466667 | [G02](../../10_ProgressionGates.md#G02) |
| 29 | 873 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 459 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.483333 | [G02](../../10_ProgressionGates.md#G02) |
| 30 | 950 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 500 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.5 | [G02](../../10_ProgressionGates.md#G02) |
| 31 | 800 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 900 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 180 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.516667 | [G03](../../10_ProgressionGates.md#G03) |
| 32 | 1 078 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 1 200 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 244 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.533334 | [G03](../../10_ProgressionGates.md#G03) |
| 33 | 1 356 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 1 500 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 307 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.55 | [G03](../../10_ProgressionGates.md#G03) |
| 34 | 1 634 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 1 800 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 370 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.566667 | [G03](../../10_ProgressionGates.md#G03) |
| 35 | 1 912 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 2 100 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 434 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.583334 | [G03](../../10_ProgressionGates.md#G03) |
| 36 | 2 189 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 2 400 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 497 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.6 | [G03](../../10_ProgressionGates.md#G03) |
| 37 | 2 467 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 2 700 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 560 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.616667 | [G03](../../10_ProgressionGates.md#G03) |
| 38 | 2 745 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 3 000 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 624 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.633334 | [G03](../../10_ProgressionGates.md#G03) |
| 39 | 3 023 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 3 300 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 687 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.65 | [G03](../../10_ProgressionGates.md#G03) |
| 40 | 3 300 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 3 600 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 750 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.666667 | [G03](../../10_ProgressionGates.md#G03) |
| 41 | 2 700 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 2 500 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 500 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.683333 | [G04](../../10_ProgressionGates.md#G04) |
| 42 | 3 734 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 3 445 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 678 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.7 | [G04](../../10_ProgressionGates.md#G04) |
| 43 | 4 767 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 4 389 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 856 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.716666 | [G04](../../10_ProgressionGates.md#G04) |
| 44 | 5 800 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 5 334 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 034 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.733333 | [G04](../../10_ProgressionGates.md#G04) |
| 45 | 6 834 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 6 278 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 212 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.75 | [G04](../../10_ProgressionGates.md#G04) |
| 46 | 7 867 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 7 223 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 389 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.766666 | [G04](../../10_ProgressionGates.md#G04) |
| 47 | 8 900 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 8 167 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 567 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.783333 | [G04](../../10_ProgressionGates.md#G04) |
| 48 | 9 934 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 9 112 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 745 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.8 | [G04](../../10_ProgressionGates.md#G04) |
| 49 | 10 967 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 10 056 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 923 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.816666 | [G04](../../10_ProgressionGates.md#G04) |
| 50 | 12 000 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 11 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 100 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.833333 | [G04](../../10_ProgressionGates.md#G04) |
| 51 | 10 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 9 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 200 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.85 | [G05](../../10_ProgressionGates.md#G05) |
| 52 | 14 223 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 13 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 067 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.866667 | [G05](../../10_ProgressionGates.md#G05) |
| 53 | 18 445 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 17 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 934 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.883333 | [G05](../../10_ProgressionGates.md#G05) |
| 54 | 22 667 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 21 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 4 800 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.9 | [G05](../../10_ProgressionGates.md#G05) |
| 55 | 26 889 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 25 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 5 667 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.916667 | [G05](../../10_ProgressionGates.md#G05) |
| 56 | 31 112 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 29 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 6 534 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.933333 | [G05](../../10_ProgressionGates.md#G05) |
| 57 | 35 334 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 33 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 7 400 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.95 | [G05](../../10_ProgressionGates.md#G05) |
| 58 | 39 556 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 37 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 8 267 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.966667 | [G05](../../10_ProgressionGates.md#G05) |
| 59 | 43 778 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 41 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 9 134 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.983333 | [G05](../../10_ProgressionGates.md#G05) |
| 60 | 48 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 45 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 10 000 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 2 | [G05](../../10_ProgressionGates.md#G05) |

## Предложения и исправления владельца

Запись здесь — предложение для обсуждения и пересчёта, не обязательное указание внедрить изменение. Можно оспорить эффект, показать влияние на баланс и предложить альтернативу. Реализация начинается только после согласования результата обсуждения.

| ID замечания | Уровень / диапазон | Что изменить или добавить | Почему | Предлагаемые числа | Статус / ответ после расчёта |
|---|---|---|---|---|---|
| — | — | — | — | — | На обсуждении |
