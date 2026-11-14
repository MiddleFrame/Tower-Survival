# A11_DAMAGE — Сила приговора

Предложенный каталог для обсуждения. Таблица раскрыта из индивидуально заданных цен и интервалов; это не проверенный игровой баланс.

- Уровней: **25**. Уровень здесь — номер покупки этой ветки; итоговый ранг/слот уточняется эффектом.
- Доступ: A11; [G05](../../10_ProgressionGates.md#G05)/[L06](../08_Resources.md#L06) доB11
- Назначение: Короткая, более дорогая поздняя ветвь добивания.
- Эффект: Личный множитель 1→2; условный 7D только ниже 25%HP. Boss cap5% исходного HP применяется после всех бонусов.
- Единица результата: множитель базовых 4D /7D
- Совместное действие: Урон = baseDamage × min(3, ownMultiplier + cardFraction + labFraction), где baseDamage = 4D либо 7D. Значение личной ветви — множитель с уже включённой единицей; cardFraction берётся прямо из CARD_ID как доля 0…0.72. labFraction = min(0.28, [LAB_SPELL_POWER](LAB_SPELL_POWER.md) / 100 + selectedProtocolBonusPercent / 100): [LAB_SPELL_POWER](LAB_SPELL_POWER.md) хранит 0…16 процентов, выбранный допустимый протокол даёт 0…12 процентов. [LAB_INTERACTION](LAB_INTERACTION.md) хранит число открытых протоколов, не процент бонуса. Множитель урона = min(3, ownMultiplier + cardFraction + labFraction). После множителя боссовый урон ограничен originalBossHP × 5 / 100; фазу и неуязвимость не обходит.
- Сумма прямых цен: 311 508 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 423 758 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 26 907 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 23 750 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY).
- Готовые материалы в прямой цене этой ветки не требуются.
- Все покупки этой ветки мгновенные после оплаты. Время накопления ресурсов, производства слитков и выполнения требований считается отдельно.

[Вернуться к каталогу](../00_Index.md). Табличный результат накопительный, не ещё одна прибавка за каждый предыдущий уровень.

| Покупка уровня | Точная прямая цена | Время ×1 | Накопленный результат | Требования до покупки |
|---:|---|---:|---:|---|
| 1 | 600 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 850 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 130 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.04 | [G05](../../10_ProgressionGates.md#G05) |
| 2 | 889 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 1 245 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 188 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.08 | [G05](../../10_ProgressionGates.md#G05) |
| 3 | 1 178 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 1 639 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 246 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.12 | [G05](../../10_ProgressionGates.md#G05) |
| 4 | 1 467 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 2 034 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 304 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.16 | [G05](../../10_ProgressionGates.md#G05) |
| 5 | 1 756 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 2 428 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 362 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.2 | [G05](../../10_ProgressionGates.md#G05) |
| 6 | 2 045 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 2 823 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 419 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.24 | [G05](../../10_ProgressionGates.md#G05) |
| 7 | 2 334 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 3 217 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 477 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.28 | [G05](../../10_ProgressionGates.md#G05) |
| 8 | 2 623 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 3 612 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 535 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.32 | [G05](../../10_ProgressionGates.md#G05) |
| 9 | 2 912 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 4 006 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 593 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.36 | [G05](../../10_ProgressionGates.md#G05) |
| 10 | 3 200 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 4 400 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 650 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.4 | [G05](../../10_ProgressionGates.md#G05) |
| 11 | 4 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 5 500 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 800 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.44 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 12 | 5 556 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 7 556 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 134 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.48 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 13 | 7 112 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 9 612 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 467 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.52 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 14 | 8 667 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 11 667 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 800 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.56 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 15 | 10 223 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 13 723 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 134 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.6 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 16 | 11 778 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 15 778 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 467 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.64 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 17 | 13 334 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 17 834 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 800 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.68 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 18 | 14 889 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 19 889 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 134 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.72 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 19 | 16 445 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 21 945 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 467 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.76 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 20 | 18 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 24 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 800 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.8 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 21 | 23 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 32 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 000 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) | Мгновенно | 1.84 | [G05](../../10_ProgressionGates.md#G05); [L06](../08_Resources.md#L06)/T10 |
| 22 | 29 750 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 41 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 875 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) | Мгновенно | 1.88 | [G05](../../10_ProgressionGates.md#G05); [L06](../08_Resources.md#L06)/T10 |
| 23 | 36 500 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 50 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 4 750 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) | Мгновенно | 1.92 | [G05](../../10_ProgressionGates.md#G05); [L06](../08_Resources.md#L06)/T10 |
| 24 | 43 250 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 59 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 5 625 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) | Мгновенно | 1.96 | [G05](../../10_ProgressionGates.md#G05); [L06](../08_Resources.md#L06)/T10 |
| 25 | 50 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 68 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 6 500 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) | Мгновенно | 2 | [G05](../../10_ProgressionGates.md#G05); [L06](../08_Resources.md#L06)/T10 |

## Предложения и исправления владельца

Запись здесь — предложение для обсуждения и пересчёта, не обязательное указание внедрить изменение. Можно оспорить эффект, показать влияние на баланс и предложить альтернативу. Реализация начинается только после согласования результата обсуждения.

| ID замечания | Уровень / диапазон | Что изменить или добавить | Почему | Предлагаемые числа | Статус / ответ после расчёта |
|---|---|---|---|---|---|
| — | — | — | — | — | На обсуждении |
