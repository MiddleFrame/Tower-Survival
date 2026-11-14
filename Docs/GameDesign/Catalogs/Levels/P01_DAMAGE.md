# P01_DAMAGE — Сила точного удара

Предложенный каталог для обсуждения. Таблица раскрыта из индивидуально заданных цен и интервалов; это не проверенный игровой баланс.

- Уровней: **30**. Уровень здесь — номер покупки этой ветки; итоговый ранг/слот уточняется эффектом.
- Доступ: Старт; первая копия P01 бесплатна
- Назначение: Частые небольшие покупки; каждый последующий материал требует также заранее открытого сырья.
- Эффект: Уровень L: личный множитель 1+0.015L; максимум 1.45. Для полного боя складывается с карточным и лабораторным бонусом внутри общего бюджета, а не умножается на них.
- Единица результата: множитель базового урона 0.8D
- Совместное действие: Урон = baseDamage × min(3, ownMultiplier + cardFraction + labFraction), где baseDamage = 0.8D. Значение личной ветви — множитель с уже включённой единицей; cardFraction берётся прямо из CARD_ID как доля 0…0.72. labFraction = min(0.28, [LAB_SPELL_POWER](LAB_SPELL_POWER.md) / 100 + selectedProtocolBonusPercent / 100): [LAB_SPELL_POWER](LAB_SPELL_POWER.md) хранит 0…16 процентов, выбранный допустимый протокол даёт 0…12 процентов. [LAB_INTERACTION](LAB_INTERACTION.md) хранит число открытых протоколов, не процент бонуса. Множитель урона = min(3, ownMultiplier + cardFraction + labFraction). Фактический вклад оценивается в общей боевой симуляции; прежний агрегированный коэффициент не подтверждает эти новые цены.
- Сумма прямых цен: 721 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 656 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 243 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 288 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 415 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 573 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS).
- Готовые материалы в прямой цене этой ветки не требуются.
- Все покупки этой ветки мгновенные после оплаты. Время накопления ресурсов, производства слитков и выполнения требований считается отдельно.

[Вернуться к каталогу](../00_Index.md). Табличный результат накопительный, не ещё одна прибавка за каждый предыдущий уровень.

| Покупка уровня | Точная прямая цена | Время ×1 | Накопленный результат | Требования до покупки |
|---:|---|---:|---:|---|
| 1 | 10 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.015 | старт |
| 2 | 12 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.03 | старт |
| 3 | 13 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.045 | старт |
| 4 | 15 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.06 | старт |
| 5 | 16 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.075 | старт |
| 6 | 18 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 8 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.09 | [G01](../../10_ProgressionGates.md#G01) |
| 7 | 21 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 9 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.105 | [G01](../../10_ProgressionGates.md#G01) |
| 8 | 23 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 10 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.12 | [G01](../../10_ProgressionGates.md#G01) |
| 9 | 26 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 12 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.135 | [G01](../../10_ProgressionGates.md#G01) |
| 10 | 29 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 14 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) | Мгновенно | 1.15 | [G01](../../10_ProgressionGates.md#G01) |
| 11 | 30 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 14 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.165 | [G02](../../10_ProgressionGates.md#G02) |
| 12 | 34 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 16 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.18 | [G02](../../10_ProgressionGates.md#G02) |
| 13 | 38 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 18 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.195 | [G02](../../10_ProgressionGates.md#G02) |
| 14 | 43 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 20 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.21 | [G02](../../10_ProgressionGates.md#G02) |
| 15 | 48 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) + 23 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.225 | [G02](../../10_ProgressionGates.md#G02) |
| 16 | 45 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 35 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 8 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.24 | [G03](../../10_ProgressionGates.md#G03) |
| 17 | 51 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 40 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 9 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.255 | [G03](../../10_ProgressionGates.md#G03) |
| 18 | 57 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 46 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 10 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.27 | [G03](../../10_ProgressionGates.md#G03) |
| 19 | 64 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 52 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 11 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.285 | [G03](../../10_ProgressionGates.md#G03) |
| 20 | 71 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 58 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 12 [Серебряная руда (RAW_AG)](../08_Resources.md#RAW_AG) | Мгновенно | 1.3 | [G03](../../10_ProgressionGates.md#G03) |
| 21 | 65 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 35 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.315 | [G04](../../10_ProgressionGates.md#G04) |
| 22 | 73 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 40 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.33 | [G04](../../10_ProgressionGates.md#G04) |
| 23 | 82 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 45 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.345 | [G04](../../10_ProgressionGates.md#G04) |
| 24 | 92 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 50 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.36 | [G04](../../10_ProgressionGates.md#G04) |
| 25 | 103 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 57 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.375 | [G04](../../10_ProgressionGates.md#G04) |
| 26 | 90 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 60 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 35 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.39 | [G05](../../10_ProgressionGates.md#G05) |
| 27 | 101 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 66 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 39 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.405 | [G05](../../10_ProgressionGates.md#G05) |
| 28 | 113 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 73 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 43 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.42 | [G05](../../10_ProgressionGates.md#G05) |
| 29 | 127 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 82 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 49 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.435 | [G05](../../10_ProgressionGates.md#G05) |
| 30 | 142 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 90 [Медная руда (RAW_CU)](../08_Resources.md#RAW_CU) + 55 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.45 | [G05](../../10_ProgressionGates.md#G05) |

## Предложения и исправления владельца

Запись здесь — предложение для обсуждения и пересчёта, не обязательное указание внедрить изменение. Можно оспорить эффект, показать влияние на баланс и предложить альтернативу. Реализация начинается только после согласования результата обсуждения.

| ID замечания | Уровень / диапазон | Что изменить или добавить | Почему | Предлагаемые числа | Статус / ответ после расчёта |
|---|---|---|---|---|---|
| — | — | — | — | — | На обсуждении |
