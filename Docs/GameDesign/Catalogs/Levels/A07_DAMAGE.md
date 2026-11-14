# A07_DAMAGE — Напряжение цепи

Предложенный каталог для обсуждения. Таблица раскрыта из индивидуально заданных цен и интервалов; это не проверенный игровой баланс.

- Уровней: **50**. Уровень здесь — номер покупки этой ветки; итоговый ранг/слот уточняется эффектом.
- Доступ: A07; [G03](../../10_ProgressionGates.md#G03)/[L04](../08_Resources.md#L04) доB07
- Назначение: Длинная ветвь урона, с половинной силой вторичных попаданий.
- Эффект: Личный множитель 1→1.90 для исходной и вторичных целей.
- Единица результата: множитель базовых 1.5D /0.75D
- Совместное действие: Урон = baseDamage × min(3, ownMultiplier + cardFraction + labFraction), где baseDamage = 1.5D исходной либо 0.75D вторичной цели. Значение личной ветви — множитель с уже включённой единицей; cardFraction берётся прямо из CARD_ID как доля 0…0.72. labFraction = min(0.28, [LAB_SPELL_POWER](LAB_SPELL_POWER.md) / 100 + selectedProtocolBonusPercent / 100): [LAB_SPELL_POWER](LAB_SPELL_POWER.md) хранит 0…16 процентов, выбранный допустимый протокол даёт 0…12 процентов. [LAB_INTERACTION](LAB_INTERACTION.md) хранит число открытых протоколов, не процент бонуса. Множитель урона = min(3, ownMultiplier + cardFraction + labFraction). Один враг не получает повторных отскоков.
- Сумма прямых цен: 66 846 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 3 269 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 29 631 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 276 890 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 248 009 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS).
- Готовые материалы в прямой цене этой ветки не требуются.
- Все покупки этой ветки мгновенные после оплаты. Время накопления ресурсов, производства слитков и выполнения требований считается отдельно.

[Вернуться к каталогу](../00_Index.md). Табличный результат накопительный, не ещё одна прибавка за каждый предыдущий уровень.

| Покупка уровня | Точная прямая цена | Время ×1 | Накопленный результат | Требования до покупки |
|---:|---|---:|---:|---|
| 1 | 140 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 85 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.018 | [G03](../../10_ProgressionGates.md#G03) |
| 2 | 177 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 104 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.036 | [G03](../../10_ProgressionGates.md#G03) |
| 3 | 213 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 123 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.054 | [G03](../../10_ProgressionGates.md#G03) |
| 4 | 250 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 142 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.072 | [G03](../../10_ProgressionGates.md#G03) |
| 5 | 286 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 161 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.09 | [G03](../../10_ProgressionGates.md#G03) |
| 6 | 323 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 180 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.108 | [G03](../../10_ProgressionGates.md#G03) |
| 7 | 359 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 199 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.126 | [G03](../../10_ProgressionGates.md#G03) |
| 8 | 395 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 218 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.144 | [G03](../../10_ProgressionGates.md#G03) |
| 9 | 432 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 237 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.162 | [G03](../../10_ProgressionGates.md#G03) |
| 10 | 468 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 256 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.18 | [G03](../../10_ProgressionGates.md#G03) |
| 11 | 505 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 275 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.198 | [G03](../../10_ProgressionGates.md#G03) |
| 12 | 541 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 294 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.216 | [G03](../../10_ProgressionGates.md#G03) |
| 13 | 578 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 313 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.234 | [G03](../../10_ProgressionGates.md#G03) |
| 14 | 614 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 332 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.252 | [G03](../../10_ProgressionGates.md#G03) |
| 15 | 650 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 350 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.27 | [G03](../../10_ProgressionGates.md#G03) |
| 16 | 650 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 650 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 120 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.288 | [G04](../../10_ProgressionGates.md#G04) |
| 17 | 840 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 833 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 155 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.306 | [G04](../../10_ProgressionGates.md#G04) |
| 18 | 1 029 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 015 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 189 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.324 | [G04](../../10_ProgressionGates.md#G04) |
| 19 | 1 218 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 197 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 223 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.342 | [G04](../../10_ProgressionGates.md#G04) |
| 20 | 1 408 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 379 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 258 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.36 | [G04](../../10_ProgressionGates.md#G04) |
| 21 | 1 597 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 561 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 292 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.378 | [G04](../../10_ProgressionGates.md#G04) |
| 22 | 1 786 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 743 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 326 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.396 | [G04](../../10_ProgressionGates.md#G04) |
| 23 | 1 975 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 925 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 360 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.414 | [G04](../../10_ProgressionGates.md#G04) |
| 24 | 2 165 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 2 108 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 395 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.432 | [G04](../../10_ProgressionGates.md#G04) |
| 25 | 2 354 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 2 290 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 429 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.45 | [G04](../../10_ProgressionGates.md#G04) |
| 26 | 2 543 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 2 472 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 463 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.468 | [G04](../../10_ProgressionGates.md#G04) |
| 27 | 2 733 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 2 654 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 498 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.486 | [G04](../../10_ProgressionGates.md#G04) |
| 28 | 2 922 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 2 836 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 532 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.504 | [G04](../../10_ProgressionGates.md#G04) |
| 29 | 3 111 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 3 018 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 566 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.522 | [G04](../../10_ProgressionGates.md#G04) |
| 30 | 3 300 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 3 200 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 600 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.54 | [G04](../../10_ProgressionGates.md#G04) |
| 31 | 2 800 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 2 800 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 650 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.558 | [G05](../../10_ProgressionGates.md#G05) |
| 32 | 3 811 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 3 811 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 874 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.576 | [G05](../../10_ProgressionGates.md#G05) |
| 33 | 4 822 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 4 822 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 098 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.594 | [G05](../../10_ProgressionGates.md#G05) |
| 34 | 5 832 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 5 832 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 322 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.612 | [G05](../../10_ProgressionGates.md#G05) |
| 35 | 6 843 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 6 843 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 545 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.63 | [G05](../../10_ProgressionGates.md#G05) |
| 36 | 7 853 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 7 853 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 769 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.648 | [G05](../../10_ProgressionGates.md#G05) |
| 37 | 8 864 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 8 864 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 993 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.666 | [G05](../../10_ProgressionGates.md#G05) |
| 38 | 9 874 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 9 874 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 216 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.684 | [G05](../../10_ProgressionGates.md#G05) |
| 39 | 10 885 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 10 885 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 440 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.702 | [G05](../../10_ProgressionGates.md#G05) |
| 40 | 11 895 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 11 895 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 664 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.72 | [G05](../../10_ProgressionGates.md#G05) |
| 41 | 12 906 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 12 906 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 887 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.738 | [G05](../../10_ProgressionGates.md#G05) |
| 42 | 13 916 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 13 916 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 111 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.756 | [G05](../../10_ProgressionGates.md#G05) |
| 43 | 14 927 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 14 927 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 335 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.774 | [G05](../../10_ProgressionGates.md#G05) |
| 44 | 15 937 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 15 937 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 558 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.792 | [G05](../../10_ProgressionGates.md#G05) |
| 45 | 16 948 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 16 948 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 782 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.81 | [G05](../../10_ProgressionGates.md#G05) |
| 46 | 17 958 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 17 958 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 4 006 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.828 | [G05](../../10_ProgressionGates.md#G05) |
| 47 | 18 969 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 18 969 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 4 229 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.846 | [G05](../../10_ProgressionGates.md#G05) |
| 48 | 19 979 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 19 979 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 4 453 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.864 | [G05](../../10_ProgressionGates.md#G05) |
| 49 | 20 990 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 20 990 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 4 677 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.882 | [G05](../../10_ProgressionGates.md#G05) |
| 50 | 22 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 22 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 4 900 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.9 | [G05](../../10_ProgressionGates.md#G05) |

## Предложения и исправления владельца

Запись здесь — предложение для обсуждения и пересчёта, не обязательное указание внедрить изменение. Можно оспорить эффект, показать влияние на баланс и предложить альтернативу. Реализация начинается только после согласования результата обсуждения.

| ID замечания | Уровень / диапазон | Что изменить или добавить | Почему | Предлагаемые числа | Статус / ответ после расчёта |
|---|---|---|---|---|---|
| — | — | — | — | — | На обсуждении |
