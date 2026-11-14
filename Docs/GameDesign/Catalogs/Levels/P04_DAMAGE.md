# P04_DAMAGE — Сила прокола

Предложенный каталог для обсуждения. Таблица раскрыта из индивидуально заданных цен и интервалов; это не проверенный игровой баланс.

- Уровней: **45**. Уровень здесь — номер покупки этой ветки; итоговый ранг/слот уточняется эффектом.
- Доступ: P04; [G04](../../10_ProgressionGates.md#G04)/[L05](../08_Resources.md#L05)
- Назначение: Много обычных уровней поздней пассивной.
- Эффект: Личный множитель 1→1.75; одинаково масштабирует обычный и третий удар.
- Единица результата: множитель базовых 0.6D /1.2D
- Совместное действие: Урон = baseDamage × min(3, ownMultiplier + cardFraction + labFraction), где baseDamage = 0.6D либо 1.2D. Значение личной ветви — множитель с уже включённой единицей; cardFraction берётся прямо из CARD_ID как доля 0…0.72. labFraction = min(0.28, [LAB_SPELL_POWER](LAB_SPELL_POWER.md) / 100 + selectedProtocolBonusPercent / 100): [LAB_SPELL_POWER](LAB_SPELL_POWER.md) хранит 0…16 процентов, выбранный допустимый протокол даёт 0…12 процентов. [LAB_INTERACTION](LAB_INTERACTION.md) хранит число открытых протоколов, не процент бонуса. Множитель урона = min(3, ownMultiplier + cardFraction + labFraction). Счётчик не вызывает отдельные loot/on-hit эффекты.
- Сумма прямых цен: 8 856 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 51 387 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 343 587 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 234 012 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS).
- Готовые материалы в прямой цене этой ветки не требуются.
- Все покупки этой ветки мгновенные после оплаты. Время накопления ресурсов, производства слитков и выполнения требований считается отдельно.

[Вернуться к каталогу](../00_Index.md). Табличный результат накопительный, не ещё одна прибавка за каждый предыдущий уровень.

| Покупка уровня | Точная прямая цена | Время ×1 | Накопленный результат | Требования до покупки |
|---:|---|---:|---:|---|
| 1 | 180 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 100 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 80 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.016667 | [G04](../../10_ProgressionGates.md#G04) |
| 2 | 239 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 133 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 105 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.033334 | [G04](../../10_ProgressionGates.md#G04) |
| 3 | 298 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 165 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 130 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.05 | [G04](../../10_ProgressionGates.md#G04) |
| 4 | 356 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 197 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 155 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.066667 | [G04](../../10_ProgressionGates.md#G04) |
| 5 | 415 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 229 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 180 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.083334 | [G04](../../10_ProgressionGates.md#G04) |
| 6 | 473 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 261 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 205 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.1 | [G04](../../10_ProgressionGates.md#G04) |
| 7 | 532 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 293 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 230 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.116667 | [G04](../../10_ProgressionGates.md#G04) |
| 8 | 590 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 325 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 255 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.133334 | [G04](../../10_ProgressionGates.md#G04) |
| 9 | 649 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 358 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 280 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.15 | [G04](../../10_ProgressionGates.md#G04) |
| 10 | 708 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 390 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 305 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.166667 | [G04](../../10_ProgressionGates.md#G04) |
| 11 | 766 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 422 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 330 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.183333 | [G04](../../10_ProgressionGates.md#G04) |
| 12 | 825 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 454 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 355 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.2 | [G04](../../10_ProgressionGates.md#G04) |
| 13 | 883 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 486 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 380 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.216667 | [G04](../../10_ProgressionGates.md#G04) |
| 14 | 942 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 518 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 405 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.233333 | [G04](../../10_ProgressionGates.md#G04) |
| 15 | 1 000 [Мифрильная руда (RAW_MY)](../08_Resources.md#RAW_MY) + 550 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) + 430 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.25 | [G04](../../10_ProgressionGates.md#G04) |
| 16 | 700 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 1 100 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.266667 | [G05](../../10_ProgressionGates.md#G05) |
| 17 | 972 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 1 522 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.283334 | [G05](../../10_ProgressionGates.md#G05) |
| 18 | 1 243 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 1 943 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.3 | [G05](../../10_ProgressionGates.md#G05) |
| 19 | 1 515 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 2 365 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.316667 | [G05](../../10_ProgressionGates.md#G05) |
| 20 | 1 786 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 2 786 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.333334 | [G05](../../10_ProgressionGates.md#G05) |
| 21 | 2 058 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 3 208 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.35 | [G05](../../10_ProgressionGates.md#G05) |
| 22 | 2 329 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 3 629 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.366667 | [G05](../../10_ProgressionGates.md#G05) |
| 23 | 2 600 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 4 050 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.383334 | [G05](../../10_ProgressionGates.md#G05) |
| 24 | 2 872 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 4 472 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.4 | [G05](../../10_ProgressionGates.md#G05) |
| 25 | 3 143 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 4 893 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.416667 | [G05](../../10_ProgressionGates.md#G05) |
| 26 | 3 415 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 5 315 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.433333 | [G05](../../10_ProgressionGates.md#G05) |
| 27 | 3 686 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 5 736 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.45 | [G05](../../10_ProgressionGates.md#G05) |
| 28 | 3 958 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 6 158 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.466667 | [G05](../../10_ProgressionGates.md#G05) |
| 29 | 4 229 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 6 579 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.483333 | [G05](../../10_ProgressionGates.md#G05) |
| 30 | 4 500 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 7 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) | Мгновенно | 1.5 | [G05](../../10_ProgressionGates.md#G05) |
| 31 | 5 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 7 200 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 200 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.516667 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 32 | 6 143 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 8 829 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 472 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.533334 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 33 | 7 286 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 10 458 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 1 743 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.55 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 34 | 8 429 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 12 086 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 015 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.566667 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 35 | 9 572 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 13 715 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 286 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.583334 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 36 | 10 715 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 15 343 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 558 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.6 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 37 | 11 858 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 16 972 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 2 829 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.616667 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 38 | 13 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 18 600 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 100 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.633334 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 39 | 14 143 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 20 229 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 372 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.65 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 40 | 15 286 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 21 858 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 643 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.666667 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 41 | 16 429 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 23 486 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 3 915 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.683333 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 42 | 17 572 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 25 115 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 4 186 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.7 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 43 | 18 715 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 26 743 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 4 458 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.716667 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 44 | 19 858 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 28 372 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 4 729 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.733333 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |
| 45 | 21 000 [Астралит (RAW_AS)](../08_Resources.md#RAW_AS) + 30 000 [Железная руда (RAW_FE)](../08_Resources.md#RAW_FE) + 5 000 [Золотая руда (RAW_AU)](../08_Resources.md#RAW_AU) | Мгновенно | 1.75 | [G05](../../10_ProgressionGates.md#G05); [G06](../../10_ProgressionGates.md#G06) |

## Предложения и исправления владельца

Запись здесь — предложение для обсуждения и пересчёта, не обязательное указание внедрить изменение. Можно оспорить эффект, показать влияние на баланс и предложить альтернативу. Реализация начинается только после согласования результата обсуждения.

| ID замечания | Уровень / диапазон | Что изменить или добавить | Почему | Предлагаемые числа | Статус / ответ после расчёта |
|---|---|---|---|---|---|
| — | — | — | — | — | На обсуждении |
