# P03_DAMAGE — Сила эха

Предложенный каталог для обсуждения. Таблица раскрыта из индивидуально заданных цен и интервалов; это не проверенный игровой баланс.

- Уровней: **40**. Уровень здесь — номер покупки этой ветки; итоговый ранг/слот уточняется эффектом.
- Доступ: P03; [G02](../../10_ProgressionGates.md#G02)/[L03](../08_Resources.md#L03)
- Назначение: Постепенный прирост урона по группе.
- Эффект: Личный множитель до 1.60. Применяется отдельно к каждому из ограниченного количества допустимых врагов.
- Единица результата: множитель базового урона 0.35D
- Совместное действие: Урон = baseDamage × min(3, ownMultiplier + cardFraction + labFraction), где baseDamage = 0.35D. Значение личной ветви — множитель с уже включённой единицей; cardFraction берётся прямо из CARD_ID как доля 0…0.72. labFraction = min(0.28, [LAB_SPELL_POWER](LAB_SPELL_POWER.md) / 100 + selectedProtocolBonusPercent / 100): [LAB_SPELL_POWER](LAB_SPELL_POWER.md) хранит 0…16 процентов, выбранный допустимый протокол даёт 0…12 процентов. [LAB_INTERACTION](LAB_INTERACTION.md) хранит число открытых протоколов, не процент бонуса. Множитель урона = min(3, ownMultiplier + cardFraction + labFraction). Дополнительные цели не создают повторных попаданий по одному боссу.
- Сумма прямых цен: 14 932 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 40 504 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 854 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 10 104 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 9 504 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 29 504 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS).
- Готовые материалы в прямой цене этой ветки не требуются.
- Все покупки этой ветки мгновенные после оплаты. Время накопления ресурсов, производства слитков и выполнения требований считается отдельно.

[Вернуться к каталогу](../00_Index.md). Табличный результат накопительный, не ещё одна прибавка за каждый предыдущий уровень.

| Покупка уровня | Точная прямая цена | Время ×1 | Накопленный результат | Требования до покупки |
|---:|---|---:|---:|---|
| 1 | 65 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 40 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.015 | [G02](../../10_ProgressionGates.md#G02) |
| 2 | 82 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 50 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.03 | [G02](../../10_ProgressionGates.md#G02) |
| 3 | 98 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 60 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.045 | [G02](../../10_ProgressionGates.md#G02) |
| 4 | 114 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 70 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.06 | [G02](../../10_ProgressionGates.md#G02) |
| 5 | 130 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 80 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.075 | [G02](../../10_ProgressionGates.md#G02) |
| 6 | 146 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 90 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.09 | [G02](../../10_ProgressionGates.md#G02) |
| 7 | 162 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 100 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.105 | [G02](../../10_ProgressionGates.md#G02) |
| 8 | 178 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 110 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.12 | [G02](../../10_ProgressionGates.md#G02) |
| 9 | 194 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 120 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.135 | [G02](../../10_ProgressionGates.md#G02) |
| 10 | 210 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 130 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.15 | [G02](../../10_ProgressionGates.md#G02) |
| 11 | 170 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 110 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.165 | [G03](../../10_ProgressionGates.md#G03) |
| 12 | 218 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 137 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.18 | [G03](../../10_ProgressionGates.md#G03) |
| 13 | 266 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 164 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.195 | [G03](../../10_ProgressionGates.md#G03) |
| 14 | 314 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 190 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.21 | [G03](../../10_ProgressionGates.md#G03) |
| 15 | 362 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 217 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.225 | [G03](../../10_ProgressionGates.md#G03) |
| 16 | 409 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 244 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.24 | [G03](../../10_ProgressionGates.md#G03) |
| 17 | 457 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 270 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.255 | [G03](../../10_ProgressionGates.md#G03) |
| 18 | 505 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 297 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.27 | [G03](../../10_ProgressionGates.md#G03) |
| 19 | 553 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 324 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.285 | [G03](../../10_ProgressionGates.md#G03) |
| 20 | 600 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 350 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.3 | [G03](../../10_ProgressionGates.md#G03) |
| 21 | 420 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 400 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 180 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.315 | [G04](../../10_ProgressionGates.md#G04) |
| 22 | 552 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 523 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 233 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.33 | [G04](../../10_ProgressionGates.md#G04) |
| 23 | 683 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 645 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 285 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.345 | [G04](../../10_ProgressionGates.md#G04) |
| 24 | 814 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 767 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 337 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.36 | [G04](../../10_ProgressionGates.md#G04) |
| 25 | 945 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 889 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 389 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.375 | [G04](../../10_ProgressionGates.md#G04) |
| 26 | 1 076 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 012 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 442 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.39 | [G04](../../10_ProgressionGates.md#G04) |
| 27 | 1 207 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 134 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 494 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.405 | [G04](../../10_ProgressionGates.md#G04) |
| 28 | 1 338 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 256 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 546 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.42 | [G04](../../10_ProgressionGates.md#G04) |
| 29 | 1 469 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 378 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 598 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.435 | [G04](../../10_ProgressionGates.md#G04) |
| 30 | 1 600 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 500 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 650 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.45 | [G04](../../10_ProgressionGates.md#G04) |
| 31 | 1 100 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 1 300 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 450 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.465 | [G05](../../10_ProgressionGates.md#G05) |
| 32 | 1 512 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 1 800 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 600 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.48 | [G05](../../10_ProgressionGates.md#G05) |
| 33 | 1 923 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 2 300 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 750 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.495 | [G05](../../10_ProgressionGates.md#G05) |
| 34 | 2 334 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 2 800 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 900 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.51 | [G05](../../10_ProgressionGates.md#G05) |
| 35 | 2 745 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 3 300 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 050 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.525 | [G05](../../10_ProgressionGates.md#G05) |
| 36 | 3 156 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 3 800 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 200 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.54 | [G05](../../10_ProgressionGates.md#G05) |
| 37 | 3 567 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 4 300 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 350 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.555 | [G05](../../10_ProgressionGates.md#G05) |
| 38 | 3 978 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 4 800 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 500 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.57 | [G05](../../10_ProgressionGates.md#G05) |
| 39 | 4 389 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 5 300 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 650 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.585 | [G05](../../10_ProgressionGates.md#G05) |
| 40 | 4 800 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 5 800 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 800 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.6 | [G05](../../10_ProgressionGates.md#G05) |

## Предложения и исправления владельца

Запись здесь — предложение для обсуждения и пересчёта, не обязательное указание внедрить изменение. Можно оспорить эффект, показать влияние на баланс и предложить альтернативу. Реализация начинается только после согласования результата обсуждения.

| ID замечания | Уровень / диапазон | Что изменить или добавить | Почему | Предлагаемые числа | Статус / ответ после расчёта |
|---|---|---|---|---|---|
| — | — | — | — | — | На обсуждении |
