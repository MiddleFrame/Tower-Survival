# A06_DAMAGE — Удар по разлому

Предложенный каталог для обсуждения. Таблица раскрыта из индивидуально заданных цен и интервалов; это не проверенный игровой баланс.

- Уровней: **30**. Уровень здесь — номер покупки этой ветки; итоговый ранг/слот уточняется эффектом.
- Доступ: A06; [G02](../../10_ProgressionGates.md#G02)/[L03](../08_Resources.md#L03) доB05
- Назначение: Недорогая длинная вспомогательная ветвь урона.
- Эффект: Личный множитель 1→1.60; не усиливает одновременно снятие брони.
- Единица результата: множитель базового 1D
- Совместное действие: Урон = baseDamage × min(3, ownMultiplier + cardFraction + labFraction), где baseDamage = 1D. Значение личной ветви — множитель с уже включённой единицей; cardFraction берётся прямо из CARD_ID как доля 0…0.72. labFraction = min(0.28, [LAB_SPELL_POWER](LAB_SPELL_POWER.md) / 100 + selectedProtocolBonusPercent / 100): [LAB_SPELL_POWER](LAB_SPELL_POWER.md) хранит 0…16 процентов, выбранный допустимый протокол даёт 0…12 процентов. [LAB_INTERACTION](LAB_INTERACTION.md) хранит число открытых протоколов, не процент бонуса. Множитель урона = min(3, ownMultiplier + cardFraction + labFraction). Armor shred задаётся отдельно и не получает этот множитель.
- Сумма прямых цен: 4 633 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 16 711 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 854 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 13 254 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY).
- Готовые материалы в прямой цене этой ветки не требуются.
- Все покупки этой ветки мгновенные после оплаты. Время накопления ресурсов, производства слитков и выполнения требований считается отдельно.

[Вернуться к каталогу](../00_Index.md). Табличный результат накопительный, не ещё одна прибавка за каждый предыдущий уровень.

| Покупка уровня | Точная прямая цена | Время ×1 | Накопленный результат | Требования до покупки |
|---:|---|---:|---:|---|
| 1 | 55 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 30 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.02 | [G02](../../10_ProgressionGates.md#G02) |
| 2 | 69 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 37 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.04 | [G02](../../10_ProgressionGates.md#G02) |
| 3 | 83 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 44 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.06 | [G02](../../10_ProgressionGates.md#G02) |
| 4 | 97 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 50 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.08 | [G02](../../10_ProgressionGates.md#G02) |
| 5 | 111 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 57 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.1 | [G02](../../10_ProgressionGates.md#G02) |
| 6 | 125 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 64 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.12 | [G02](../../10_ProgressionGates.md#G02) |
| 7 | 139 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 70 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.14 | [G02](../../10_ProgressionGates.md#G02) |
| 8 | 153 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 77 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.16 | [G02](../../10_ProgressionGates.md#G02) |
| 9 | 167 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 84 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.18 | [G02](../../10_ProgressionGates.md#G02) |
| 10 | 180 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 90 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.2 | [G02](../../10_ProgressionGates.md#G02) |
| 11 | 170 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 130 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.22 | [G03](../../10_ProgressionGates.md#G03) |
| 12 | 218 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 165 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.24 | [G03](../../10_ProgressionGates.md#G03) |
| 13 | 266 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 199 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.26 | [G03](../../10_ProgressionGates.md#G03) |
| 14 | 314 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 234 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.28 | [G03](../../10_ProgressionGates.md#G03) |
| 15 | 362 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 268 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.3 | [G03](../../10_ProgressionGates.md#G03) |
| 16 | 409 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 303 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.32 | [G03](../../10_ProgressionGates.md#G03) |
| 17 | 457 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 337 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.34 | [G03](../../10_ProgressionGates.md#G03) |
| 18 | 505 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 372 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.36 | [G03](../../10_ProgressionGates.md#G03) |
| 19 | 553 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 406 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.38 | [G03](../../10_ProgressionGates.md#G03) |
| 20 | 600 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 440 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.4 | [G03](../../10_ProgressionGates.md#G03) |
| 21 | 550 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 550 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 140 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.42 | [G04](../../10_ProgressionGates.md#G04) |
| 22 | 723 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 723 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 186 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.44 | [G04](../../10_ProgressionGates.md#G04) |
| 23 | 895 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 895 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 232 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.46 | [G04](../../10_ProgressionGates.md#G04) |
| 24 | 1 067 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 067 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 277 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.48 | [G04](../../10_ProgressionGates.md#G04) |
| 25 | 1 239 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 239 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 323 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.5 | [G04](../../10_ProgressionGates.md#G04) |
| 26 | 1 412 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 412 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 368 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.52 | [G04](../../10_ProgressionGates.md#G04) |
| 27 | 1 584 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 584 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 414 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.54 | [G04](../../10_ProgressionGates.md#G04) |
| 28 | 1 756 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 756 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 459 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.56 | [G04](../../10_ProgressionGates.md#G04) |
| 29 | 1 928 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 1 928 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 505 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.58 | [G04](../../10_ProgressionGates.md#G04) |
| 30 | 2 100 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 2 100 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 550 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.6 | [G04](../../10_ProgressionGates.md#G04) |

## Предложения и исправления владельца

Запись здесь — предложение для обсуждения и пересчёта, не обязательное указание внедрить изменение. Можно оспорить эффект, показать влияние на баланс и предложить альтернативу. Реализация начинается только после согласования результата обсуждения.

| ID замечания | Уровень / диапазон | Что изменить или добавить | Почему | Предлагаемые числа | Статус / ответ после расчёта |
|---|---|---|---|---|---|
| — | — | — | — | — | На обсуждении |
