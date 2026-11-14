# LAB_SECONDARY — Рикошетная камора

Предложенный каталог для обсуждения. Таблица раскрыта из индивидуально заданных цен и интервалов; это не проверенный игровой баланс.

- Уровней: **36**. Уровень здесь — номер покупки этой ветки; итоговый ранг/слот уточняется эффектом.
- Доступ: [G03](../../10_ProgressionGates.md#G03); [BLD06_L2](BLD06_L2.md)
- Назначение: Открывает рикошетную ось, затем постепенно повышает долю урона её единственной вторичной цели.
- Эффект: Покупка 1 за слитки только открывает настройку рикошета с долей 0%. Покупки 2–36 добавляют по 1 п.п. доли первичного урона единственной вторичной цели; максимум 35%. Открытие само не добавляет урон.
- Единица результата: проценты урона единственной вторичной цели; на покупке 1 — 0
- Совместное действие: Рикошет активен только с выбранной рикошетной настройкой и положительной купленной долей. Рикошет не создаёт следующий рикошет; не действует одновременно с [LAB_RESONANT](LAB_RESONANT.md). Первая покупка есть открытие оси, последующие 35 — её числовые уровни.
- Сумма прямых цен: 12 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) + 20 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) + 30 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) + 67 004 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 99 007 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 82 504 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 248 500 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 32 004 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 52 500 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS).
- Для производства указанных в цене слитков дополнительно потребуется: 384 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 596 [Уголь (COAL)](../08_Resources.md#COAL) + 440 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 360 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU); 13 ч 40 мин работы одной печи ×1 по базовым рецептам. Это расшифровка производства, а не повторная оплата слитков.
- Сумма работы этой последовательной ветки: 167 сут 23 ч 33 мин при скорости ×1. Материалы prerequisites и время кузницы считаются отдельно.

[Вернуться к каталогу](../00_Index.md). Табличный результат накопительный, не ещё одна прибавка за каждый предыдущий уровень.

| Покупка уровня | Точная прямая цена | Время ×1 | Накопленный результат | Требования до покупки |
|---:|---|---:|---:|---|
| 1 | 12 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) + 20 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) + 30 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) | 1 сут | 0 | [G03](../../10_ProgressionGates.md#G03); [BLD06_L2](BLD06_L2.md) |
| 2 | 120 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 200 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 30 мин | 1 | [G03](../../10_ProgressionGates.md#G03); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 3 | 160 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 267 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 47 мин | 2 | [G03](../../10_ProgressionGates.md#G03); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 4 | 200 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 334 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 1 ч 4 мин | 3 | [G03](../../10_ProgressionGates.md#G03); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 5 | 240 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 400 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 1 ч 20 мин | 4 | [G03](../../10_ProgressionGates.md#G03); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 6 | 280 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 467 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 1 ч 37 мин | 5 | [G03](../../10_ProgressionGates.md#G03); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 7 | 320 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 534 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 1 ч 54 мин | 6 | [G03](../../10_ProgressionGates.md#G03); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 8 | 360 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 600 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 2 ч 10 мин | 7 | [G03](../../10_ProgressionGates.md#G03); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 9 | 400 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 667 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 2 ч 27 мин | 8 | [G03](../../10_ProgressionGates.md#G03); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 10 | 440 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 734 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 2 ч 44 мин | 9 | [G03](../../10_ProgressionGates.md#G03); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 11 | 480 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 800 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 3 ч | 10 | [G03](../../10_ProgressionGates.md#G03); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 12 | 500 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 1 800 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 6 ч | 11 | [G04](../../10_ProgressionGates.md#G04); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 13 | 612 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 2 200 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 8 ч | 12 | [G04](../../10_ProgressionGates.md#G04); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 14 | 723 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 2 600 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 10 ч | 13 | [G04](../../10_ProgressionGates.md#G04); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 15 | 834 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 3 000 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 12 ч | 14 | [G04](../../10_ProgressionGates.md#G04); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 16 | 945 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 3 400 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 14 ч | 15 | [G04](../../10_ProgressionGates.md#G04); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 17 | 1 056 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 3 800 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 16 ч | 16 | [G04](../../10_ProgressionGates.md#G04); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 18 | 1 167 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 4 200 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 18 ч | 17 | [G04](../../10_ProgressionGates.md#G04); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 19 | 1 278 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 4 600 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 20 ч | 18 | [G04](../../10_ProgressionGates.md#G04); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 20 | 1 389 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 5 000 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 22 ч | 19 | [G04](../../10_ProgressionGates.md#G04); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 21 | 1 500 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 5 400 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 1 сут | 20 | [G04](../../10_ProgressionGates.md#G04); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 22 | 1 600 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 3 200 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 4 800 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 3 сут | 21 | [G05](../../10_ProgressionGates.md#G05); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 23 | 1 956 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 3 912 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 5 823 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 3 сут 10 ч 40 мин | 22 | [G05](../../10_ProgressionGates.md#G05); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 24 | 2 312 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 4 623 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 6 845 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 3 сут 21 ч 20 мин | 23 | [G05](../../10_ProgressionGates.md#G05); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 25 | 2 667 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 5 334 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 7 867 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 4 сут 8 ч | 24 | [G05](../../10_ProgressionGates.md#G05); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 26 | 3 023 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 6 045 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 8 889 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 4 сут 18 ч 40 мин | 25 | [G05](../../10_ProgressionGates.md#G05); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 27 | 3 378 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 6 756 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 9 912 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 5 сут 5 ч 20 мин | 26 | [G05](../../10_ProgressionGates.md#G05); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 28 | 3 734 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 7 467 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 10 934 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 5 сут 16 ч | 27 | [G05](../../10_ProgressionGates.md#G05); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 29 | 4 089 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 8 178 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 11 956 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 6 сут 2 ч 40 мин | 28 | [G05](../../10_ProgressionGates.md#G05); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 30 | 4 445 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 8 889 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 12 978 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 6 сут 13 ч 20 мин | 29 | [G05](../../10_ProgressionGates.md#G05); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 31 | 4 800 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 9 600 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 14 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | 7 сут | 30 | [G05](../../10_ProgressionGates.md#G05); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 32 | 5 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 7 000 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 20 000 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 14 сут | 31 | [G06](../../10_ProgressionGates.md#G06); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 33 | 7 750 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 10 750 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 31 250 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 18 сут | 32 | [G06](../../10_ProgressionGates.md#G06); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 34 | 10 500 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 14 500 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 42 500 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 22 сут | 33 | [G06](../../10_ProgressionGates.md#G06); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 35 | 13 250 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 18 250 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 53 750 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 26 сут | 34 | [G06](../../10_ProgressionGates.md#G06); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |
| 36 | 16 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 22 000 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 65 000 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | 30 сут | 35 | [G06](../../10_ProgressionGates.md#G06); [LAB_SECONDARY](LAB_SECONDARY.md) 1 |

## Предложения и исправления владельца

Запись здесь — предложение для обсуждения и пересчёта, не обязательное указание внедрить изменение. Можно оспорить эффект, показать влияние на баланс и предложить альтернативу. Реализация начинается только после согласования результата обсуждения.

| ID замечания | Уровень / диапазон | Что изменить или добавить | Почему | Предлагаемые числа | Статус / ответ после расчёта |
|---|---|---|---|---|---|
| — | — | — | — | — | На обсуждении |
