# BLD03_ORE — Шахта: добывающий инструмент

Предложенный каталог для обсуждения. Таблица раскрыта из индивидуально заданных цен и интервалов; это не проверенный игровой баланс.

- Уровней: **20**. Уровень здесь — номер покупки этой ветки; итоговый ранг/слот уточняется эффектом.
- Доступ: [G01](../../10_ProgressionGates.md#G01); первая ступень MVP
- Назначение: Частые небольшие улучшения именно добычи руды шахтой
- Эффект: Накопительный бонус к базовой скорости выбранной руды +3%…+60%. Не влияет на боевой drop, квесты, уголь и слитки. Общий производственный коэффициент одного участка учитывает этот бонус один раз.
- Единица результата: накопительные процентные пункты скорости руды
- Совместное действие: Коэффициент 1 + [BLD03_ORE](BLD03_ORE.md)/100. Бонусы лаборатории шахте входят в тот же аддитивный процентный бюджет; предел требуется согласовать в общей экономике.
- Сумма прямых цен: 136 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) + 234 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) + 95 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) + 26 [Золотой слиток (INGOT_AU)](../08_Resources.md#INGOT_AU) + 114 [Мифрильный слиток (INGOT_MY)](../08_Resources.md#INGOT_MY) + 36 [Обработанный астралит (INGOT_AS)](../08_Resources.md#INGOT_AS).
- Для производства указанных в цене слитков дополнительно потребуется: 1 632 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 13 604 [Уголь (COAL)](../08_Resources.md#COAL) + 5 148 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 040 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 1 040 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 6 840 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 3 240 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS); 26 сут 18 ч 42 мин работы одной печи ×1 по базовым рецептам. Это расшифровка производства, а не повторная оплата слитков.
- Сумма работы этой последовательной ветки: 6 сут 2 ч 15 мин при скорости ×1. Материалы prerequisites и время кузницы считаются отдельно.

[Вернуться к каталогу](../00_Index.md). Табличный результат накопительный, не ещё одна прибавка за каждый предыдущий уровень.

| Покупка уровня | Точная прямая цена | Время ×1 | Накопленный результат | Требования до покупки |
|---:|---|---:|---:|---|
| 1 | 2 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) | 5 мин | 3 | [G01](../../10_ProgressionGates.md#G01) + [BLD03](BLD03.md) |
| 2 | 4 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) | 10 мин | 6 | [G01](../../10_ProgressionGates.md#G01) + [BLD03](BLD03.md) |
| 3 | 6 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) | 15 мин | 9 | [G01](../../10_ProgressionGates.md#G01) + [BLD03](BLD03.md) |
| 4 | 8 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) | 20 мин | 12 | [G01](../../10_ProgressionGates.md#G01) + [BLD03](BLD03.md) |
| 5 | 10 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) | 25 мин | 15 | [G01](../../10_ProgressionGates.md#G01) + [BLD03](BLD03.md) |
| 6 | 4 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) + 1 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) | 30 мин | 18 | [G02](../../10_ProgressionGates.md#G02) + [BLD03_ORE](BLD03_ORE.md):5 |
| 7 | 7 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) + 2 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) | 45 мин | 21 | [G02](../../10_ProgressionGates.md#G02) + [BLD03_ORE](BLD03_ORE.md):5 |
| 8 | 10 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) + 3 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) | 1 ч | 24 | [G02](../../10_ProgressionGates.md#G02) + [BLD03_ORE](BLD03_ORE.md):5 |
| 9 | 13 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) + 4 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) | 1 ч 15 мин | 27 | [G02](../../10_ProgressionGates.md#G02) + [BLD03_ORE](BLD03_ORE.md):5 |
| 10 | 16 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) + 5 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) | 1 ч 30 мин | 30 | [G02](../../10_ProgressionGates.md#G02) + [BLD03_ORE](BLD03_ORE.md):5 |
| 11 | 8 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) + 2 [Золотой слиток (INGOT_AU)](../08_Resources.md#INGOT_AU) + 10 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) | 2 ч | 33 | [G03](../../10_ProgressionGates.md#G03) + [BLD03_ORE](BLD03_ORE.md):10 |
| 12 | 12 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) + 4 [Золотой слиток (INGOT_AU)](../08_Resources.md#INGOT_AU) + 16 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) | 3 ч | 36 | [G03](../../10_ProgressionGates.md#G03) + [BLD03_ORE](BLD03_ORE.md):10 |
| 13 | 16 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) + 5 [Золотой слиток (INGOT_AU)](../08_Resources.md#INGOT_AU) + 21 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) | 4 ч | 39 | [G03](../../10_ProgressionGates.md#G03) + [BLD03_ORE](BLD03_ORE.md):10 |
| 14 | 20 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) + 7 [Золотой слиток (INGOT_AU)](../08_Resources.md#INGOT_AU) + 27 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) | 5 ч | 42 | [G03](../../10_ProgressionGates.md#G03) + [BLD03_ORE](BLD03_ORE.md):10 |
| 15 | 24 [Серебряный слиток (INGOT_AG)](../08_Resources.md#INGOT_AG) + 8 [Золотой слиток (INGOT_AU)](../08_Resources.md#INGOT_AU) + 32 [Медный слиток (INGOT_CU)](../08_Resources.md#INGOT_CU) | 6 ч | 45 | [G03](../../10_ProgressionGates.md#G03) + [BLD03_ORE](BLD03_ORE.md):10 |
| 16 | 10 [Мифрильный слиток (INGOT_MY)](../08_Resources.md#INGOT_MY) + 2 [Обработанный астралит (INGOT_AS)](../08_Resources.md#INGOT_AS) + 18 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) | 12 ч | 48 | [G05](../../10_ProgressionGates.md#G05) + [BLD03_ORE](BLD03_ORE.md):15 |
| 17 | 17 [Мифрильный слиток (INGOT_MY)](../08_Resources.md#INGOT_MY) + 5 [Обработанный астралит (INGOT_AS)](../08_Resources.md#INGOT_AS) + 28 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) | 18 ч | 51 | [G05](../../10_ProgressionGates.md#G05) + [BLD03_ORE](BLD03_ORE.md):15 |
| 18 | 23 [Мифрильный слиток (INGOT_MY)](../08_Resources.md#INGOT_MY) + 7 [Обработанный астралит (INGOT_AS)](../08_Resources.md#INGOT_AS) + 37 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) | 1 сут | 54 | [G05](../../10_ProgressionGates.md#G05) + [BLD03_ORE](BLD03_ORE.md):15 |
| 19 | 29 [Мифрильный слиток (INGOT_MY)](../08_Resources.md#INGOT_MY) + 10 [Обработанный астралит (INGOT_AS)](../08_Resources.md#INGOT_AS) + 46 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) | 1 сут 6 ч | 57 | [G05](../../10_ProgressionGates.md#G05) + [BLD03_ORE](BLD03_ORE.md):15 |
| 20 | 35 [Мифрильный слиток (INGOT_MY)](../08_Resources.md#INGOT_MY) + 12 [Обработанный астралит (INGOT_AS)](../08_Resources.md#INGOT_AS) + 55 [Железный слиток (INGOT_FE)](../08_Resources.md#INGOT_FE) | 1 сут 12 ч | 60 | [G05](../../10_ProgressionGates.md#G05) + [BLD03_ORE](BLD03_ORE.md):15 |

## Предложения и исправления владельца

Запись здесь — предложение для обсуждения и пересчёта, не обязательное указание внедрить изменение. Можно оспорить эффект, показать влияние на баланс и предложить альтернативу. Реализация начинается только после согласования результата обсуждения.

| ID замечания | Уровень / диапазон | Что изменить или добавить | Почему | Предлагаемые числа | Статус / ответ после расчёта |
|---|---|---|---|---|---|
| — | — | — | — | — | На обсуждении |
