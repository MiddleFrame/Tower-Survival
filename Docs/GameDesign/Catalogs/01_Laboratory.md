# Лаборатория: индивидуальные исследования и открытия

Статус: предложение для обсуждения от 07.09.2026. Цены и сила требуют дальнейшей совместной проверки; наличие строки не означает её реализацию или автоматическое согласование. [Навигатор каталогов](00_Index.md) · [Ресурсы: названия, глубина, добыча и переплавка](08_Resources.md) · [Здания и очереди](02_Buildings.md) · [Башня](03_Tower.md) · [Активные способности](05_Actives.md) · [Обязательные рубежи](../10_ProgressionGates.md).

## Как читать и оценивать

- **Числовое исследование** постепенно развивает уже существующий параметр. Ведомость показывает накопленный результат; каждый предыдущий уровень повторно не умножается. Например, [LAB_DAMAGE](Levels/LAB_DAMAGE.md): 100 покупок по +0,1 п.п., первые покупки занимают минуты.
- **Открытие** разрешает новую ветвь или новый функциональный слот. [R_GATE02](Levels/R_GATE02.md), [R_GATE04](Levels/R_GATE04.md), [R_GATE06](Levels/R_GATE06.md) и [LAB_CHARGES](Levels/LAB_CHARGES.md) дают нулевой непосредственный числовой бонус: после исследования нужно купить уровни соответствующей основной ветви. [LAB_SLOTS](Levels/LAB_SLOTS.md) открывает физически новый слот, [LAB_INTERACTION](Levels/LAB_INTERACTION.md) — новое правило взаимодействия; это самостоятельные функции.
- **Составная цена** списывается целиком. [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) не заменяет [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) или [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE). Первая цифра — сколько потратить, глубина материала видна по ссылке в [справочнике](08_Resources.md). Поздние цены возвращают к меди, железу и серебру; их добыча остаётся полезной.
- **Готовые материалы** оплачивают функциональные открытия и конструкционные этапы. За обычные числовые исследования преимущественно платят сырьём. Производство слитков конкурирует со стройкой за сырьё, уголь и мощность печей; слитки не покупаются в магазине.
- У всех цен есть полный набор уровней в отдельных ведомостях. Авторские интервалы ниже задают конкретные якоря; между ними каждый материал и время интерполируются отдельно с округлением цены вверх. Это способ записи индивидуальной таблицы, а не одна формула ценности для всех исследований.
- Ресурсы открываются победами. Если исследование нужно до [G02](../10_ProgressionGates.md#G02), ни оно, ни доступные для его подготовки ветви не требуют [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) или [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG). Видимая будущая цена может содержать закрытый ресурс; текущая восстанавливающая цепочка — нет.
- Лаборатория одновременно ведёт не больше 6 исследований; общий предел скорости ×4 принадлежит [BLD04](Levels/BLD04.md). Числовые уровни одной ветви последовательны. Готовое исследование применяется после завершения, не при постановке в очередь.
- Общие ограничения добычи, cooldown и контроля указаны в самих ветвях. Отчёты, объяснение угроз, смена сборки и возврат уже заработанной добычи бесплатны.

## Сводка всех ветвей

| ID и полная ведомость | Исследование | Покупок | Накопленный максимум | Первая цена; время | Последняя цена; время |
|---|---|---:|---|---|---|
| [LAB_DAMAGE](Levels/LAB_DAMAGE.md) | Точная навеска пороха | 100 | 10 проценты урона башни | 20 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 1 мин | 430 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 900 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 600 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 20 мин |
| [LAB_CRIT](Levels/LAB_CRIT.md) | Критическая геометрия | 40 | 4 процентные пункты шанса крита | 60 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 40 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 10 мин | 2 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 5 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 9 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 1 сут |
| [R_GATE02](Levels/R_GATE02.md) | Чертёж бронебойного снаряда | 1 | 0 непосредственный числовой бонус: 0; право покупки ветвей открыто | 4 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 3 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 40 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 60 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 3 ч | 4 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 3 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 40 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 60 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 3 ч |
| [LAB_PIERCING](Levels/LAB_PIERCING.md) | Углублённая металлургия снаряда | 30 | 14 процентные пункты игнорируемого поглощения | 12 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 20 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 3 мин | 4 200 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 8 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 16 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 7 сут |
| [LAB_RANGE](Levels/LAB_RANGE.md) | Геометрия огневого круга | 5 | 10 проценты радиуса башни | 80 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 160 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 2 ч | 1 600 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 3 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 5 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 30 сут |
| [LAB_SECONDARY](Levels/LAB_SECONDARY.md) | Рикошетная камора | 36 | 35 проценты урона единственной вторичной цели; на покупке 1 — 0 | 12 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 20 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 30 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU); 1 сут | 16 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 22 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 65 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 30 сут |
| [LAB_CLASS](Levels/LAB_CLASS.md) | Сравнительная анатомия | 40 | 16 проценты урона выбранному классу | 80 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 50 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 15 мин | 4 100 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 8 800 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 16 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 3 сут |
| [LAB_STABILITY](Levels/LAB_STABILITY.md) | Стабильность залпа | 20 | 20 проценты сокращения амплитуды разброса | 65 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 140 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 20 мин | 1 200 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 2 200 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 1 500 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 1 сут |
| [LAB_HEALTH](Levels/LAB_HEALTH.md) | Кладка с перевязкой | 100 | 15 проценты максимального здоровья | 18 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 1 мин | 380 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 650 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 30 мин |
| [LAB_REGEN](Levels/LAB_REGEN.md) | Капиллярный ремонт | 60 | 12 проценты базовой скорости регенерации | 32 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 30 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 5 мин | 1 600 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 3 600 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 6 400 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 1 сут |
| [LAB_SHIELD](Levels/LAB_SHIELD.md) | Ёмкость постоянного барьера | 40 | 12 процентные пункты максимального HP в ёмкости барьера [TW11](Levels/TW11.md) | 60 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 140 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 20 мин | 4 900 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 20 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 11 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 7 сут |
| [LAB_REFLECT](Levels/LAB_REFLECT.md) | Шипованный сплав | 35 | 14 проценты базового отражения | 90 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 160 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 30 мин | 4 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 8 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 12 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 5 сут |
| [R_GATE04](Levels/R_GATE04.md) | Чертёж распределителя импульса | 1 | 0 непосредственный числовой бонус: 0; ветви защиты открыты | 12 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 20 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 6 [Золотой слиток (INGOT_AU)](08_Resources.md#INGOT_AU) + 240 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 8 ч | 12 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 20 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 6 [Золотой слиток (INGOT_AU)](08_Resources.md#INGOT_AU) + 240 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 8 ч |
| [LAB_BURST](Levels/LAB_BURST.md) | Аварийные контуры | 25 | 25 процентные пункты снижения опасной части одиночного удара | 80 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 140 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 35 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU); 15 мин | 7 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 9 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 24 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 30 сут |
| [LAB_RECOVERY](Levels/LAB_RECOVERY.md) | Ремонт между волнами | 30 | 3 проценты максимального здоровья за завершённую волну | 70 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 80 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 15 мин | 2 700 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 4 200 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 11 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 3 сут |
| [LAB_CONTROL_RESIST](Levels/LAB_CONTROL_RESIST.md) | Инерционная подвеска | 20 | 20 проценты сокращения длительности контроля | 90 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 180 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 30 мин | 2 400 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 9 100 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 5 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 3 сут |
| [LAB_PROJECTILE_BLOCK](Levels/LAB_PROJECTILE_BLOCK.md) | Противоснарядная сетка | 15 | 15 проценты шанса блока обычного снаряда | 180 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 440 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 1 ч | 5 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 22 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 13 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 14 сут |
| [LAB_SPELL_POWER](Levels/LAB_SPELL_POWER.md) | Точные магические пропорции | 80 | 16 проценты основной числовой силы заклинания | 25 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 20 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 2 мин | 2 400 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 6 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 10 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 6 ч |
| [LAB_COOLDOWN](Levels/LAB_COOLDOWN.md) | Быстрое связывание рун | 25 | 10 проценты сокращения базового cooldown | 130 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 240 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 30 мин | 7 800 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 32 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 20 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 30 сут |
| [LAB_DURATION](Levels/LAB_DURATION.md) | Удержание безопасных эффектов | 30 | 10 проценты длительности разрешённого эффекта | 90 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 250 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 30 мин | 4 400 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 9 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 16 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 7 сут |
| [LAB_AREA](Levels/LAB_AREA.md) | Контуры распространения | 12 | 6 проценты радиуса области | 150 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 320 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 1 ч | 6 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 28 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 16 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 30 сут |
| [LAB_ACCURACY](Levels/LAB_ACCURACY.md) | Стабильный захват цели | 10 | 4 процентные пункты подавления уклонения | 85 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 110 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 30 мин | 3 300 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 6 800 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 10 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 7 сут |
| [LAB_CHARGES](Levels/LAB_CHARGES.md) | Запасной рунический контейнер | 2 | 0 непосредственные дополнительные заряды: 0; ступень допуска указана номером исследования | 8 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 12 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 60 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 6 ч | 12 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 24 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 40 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 400 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 2 сут |
| [LAB_INTERACTION](Levels/LAB_INTERACTION.md) | Парные рунические протоколы | 6 | 6 число доступных протоколов взаимодействия | 24 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG); 2 сут | 240 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 300 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 300 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU); 240 сут |
| [LAB_INTERFERENCE](Levels/LAB_INTERFERENCE.md) | Экранирование помех | 15 | 30 проценты уменьшения дополнительного штрафа M05 | 210 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 500 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 1 ч | 7 900 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 32 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 20 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 14 сут |
| [LAB_SLOTS](Levels/LAB_SLOTS.md) | Дополнительная печать заклинания | 2 | 3 общее число активных слотов после исследования | 30 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 12 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG); 1 сут | 80 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 40 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 100 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU); 30 сут |
| [R_GATE06](Levels/R_GATE06.md) | Чертёж фокусирующей решётки | 1 | 0 непосредственный числовой бонус: 0; ветвь фокусировки открыта | 8 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 12 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 30 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 60 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 240 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU); 1 сут | 8 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 12 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 30 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 60 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 240 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU); 1 сут |
| [LAB_RESONANT](Levels/LAB_RESONANT.md) | Фокусирующая решётка | 20 | 20 проценты урона по одиночной цели | 120 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 180 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 300 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 30 мин | 14 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 18 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 42 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 60 сут |
| [LAB_YIELD_CU](Levels/LAB_YIELD_CU.md) | Разбор медного лома | 40 | 12 проценты ожидаемого выхода [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 80 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 5 мин | 8 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 2 500 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 800 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 2 сут |
| [LAB_YIELD_FE](Levels/LAB_YIELD_FE.md) | Сортировка железной руды | 35 | 10.5 проценты ожидаемого выхода [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 100 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 10 мин | 9 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 4 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 2 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 4 сут |
| [LAB_YIELD_AG](Levels/LAB_YIELD_AG.md) | Серебряная селекция | 30 | 9 проценты ожидаемого выхода [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 160 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 20 мин | 14 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 5 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 5 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 7 сут |
| [LAB_YIELD_AU](Levels/LAB_YIELD_AU.md) | Золотое выщелачивание | 25 | 10 проценты ожидаемого выхода [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) | 220 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU); 30 мин | 22 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 7 500 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 7 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 14 сут |
| [LAB_YIELD_MY](Levels/LAB_YIELD_MY.md) | Мифрильная сепарация | 20 | 10 проценты ожидаемого выхода [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) | 350 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY); 1 ч | 40 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 14 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 18 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 30 сут |
| [LAB_YIELD_AS](Levels/LAB_YIELD_AS.md) | Астральная спектроскопия | 15 | 12 проценты ожидаемого выхода [Астралит (RAW_AS)](08_Resources.md#RAW_AS) | 600 [Астралит (RAW_AS)](08_Resources.md#RAW_AS); 2 ч | 80 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 70 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 45 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE); 60 сут |
| [LAB_YIELD_COAL](Levels/LAB_YIELD_COAL.md) | Углеродный отбор | 30 | 15 проценты ожидаемого выхода [Уголь (COAL)](08_Resources.md#COAL) | 100 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 30 [Уголь (COAL)](08_Resources.md#COAL); 5 мин | 18 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 14 000 [Уголь (COAL)](08_Resources.md#COAL) + 10 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 30 сут |
| [LAB_FORGE_SPEED](Levels/LAB_FORGE_SPEED.md) | Тепловой режим печи | 8 | 1.25 множитель производительности кузницы | 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 500 [Уголь (COAL)](08_Resources.md#COAL); 6 ч | 50 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 40 000 [Уголь (COAL)](08_Resources.md#COAL) + 12 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 90 сут |
| [LAB_RAW_EFFICIENCY](Levels/LAB_RAW_EFFICIENCY.md) | Сохранение полезного вещества | 15 | 6 проценты сокращения сырья рецепта | 350 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 2 ч | 24 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 18 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 22 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU); 30 сут |
| [LAB_COAL_EFFICIENCY](Levels/LAB_COAL_EFFICIENCY.md) | Закрытый топливный цикл | 20 | 10 проценты сокращения угля рецепта | 240 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 100 [Уголь (COAL)](08_Resources.md#COAL); 1 ч | 20 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 16 000 [Уголь (COAL)](08_Resources.md#COAL) + 18 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG); 21 сут |

## Что именно меняется у ключевых исследований

**Пробивание до [G02](../10_ProgressionGates.md#G02).** [R_GATE02](Levels/R_GATE02.md) стоит 4 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 3 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 40 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 60 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) и 180 минут; после него пробивание остаётся 0. Затем [TW06](Levels/TW06.md) 1–20 добавляет по 1 п.п., [LAB_PIERCING](Levels/LAB_PIERCING.md) 1–10 — по 0,6 п.п. Все 30 числовых покупок доступны за медь и железо до серебряного босса. Сумма подготовки после уже построенной лаборатории: 1019 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 1676 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 4 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 3 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE), 255 минут исследования и отдельная работа кузницы. Это прямые цены: входное сырьё слитков не списано здесь второй раз.

У B02 структурное поглощение 60%. После открытия одного чертежа оно остаётся 60%; после половины пути [TW06](Levels/TW06.md) 10 + [LAB_PIERCING](Levels/LAB_PIERCING.md) 5 пробивание 13 п.п., поглощение 47%; после [TW06](Levels/TW06.md) 20 + [LAB_PIERCING](Levels/LAB_PIERCING.md) 10 пробивание 26 п.п., поглощение 34%. Доля проходящего урона плавно меняется 40% → 53% → 66%. Отношение конечного урона к начальному 1,65 получается только из этой брони; отдельный множитель исследования не существует. Обязательность именно такой подготовки проверяется с учётом других доступных ветвей в модели рубежа.

**Защита до [G04](../10_ProgressionGates.md#G04).** [R_GATE04](Levels/R_GATE04.md) только открывает [TW13](Levels/TW13.md) и [LAB_BURST](Levels/LAB_BURST.md). Затем [TW13](Levels/TW13.md) 1–15 и [LAB_BURST](Levels/LAB_BURST.md) 1–10 дают вместе 25 п.п. защиты части удара сверх 25% maxHP. Для башни со 100 HP удар 80 превращается в 25 + 55 × 0,75 = 66,25 урона. Это не постоянный множитель здоровья и не защита от всех источников урона. Численные требования B07 должны учитывать новый плавный путь.

**Фокусировка до [G06](../10_ProgressionGates.md#G06).** [R_GATE06](Levels/R_GATE06.md) только разрешает [LAB_RESONANT](Levels/LAB_RESONANT.md). Первые 10 исследований по +1 п.п. дают +10% базового урона выбранной одиночной цели при выбранной фокусировке. Фокусировка исключает рикошет [LAB_SECONDARY](Levels/LAB_SECONDARY.md) только в сборке. Нет автоматического усиления в 1,65 раза за изученный чертёж.

**Рикошет.** [LAB_SECONDARY](Levels/LAB_SECONDARY.md) содержит 36 покупок: первая открывает настройку с 0% урона, следующие 35 дают по +1 п.п. доли первичного урона единственной вторичной цели. Это не 36 новых целей и не три скачка на 15/25/35%.

**Заряды.** [LAB_CHARGES](Levels/LAB_CHARGES.md) 1/2 открывает право купить соответствующую личную ступень Axx_CHARGES. Лаборатория сама не создаёт зарядов. Первое разрешение доступно [G02](../10_ProgressionGates.md#G02), второе [G04](../10_ProgressionGates.md#G04); потом оплачивается выбранная способность. Дополнительные заряды имеет один числовой владелец, личная ветвь способности, максимум +2.

**Слоты.** [LAB_SLOTS](Levels/LAB_SLOTS.md) сохраняет два функциональных открытия: второй и третий активные слоты. Слот нельзя дробить на сотню бессмысленных долей. Его стоимость и время обсуждаются отдельно от урона и пробивания; это новая возможность составить сборку.

## Каждая ветвь: назначение, зависимости и индивидуальные цены

### LAB_DAMAGE — Точная навеска пороха

**Покупок: 100. Доступ:** [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md). [Все уровни LAB_DAMAGE](Levels/LAB_DAMAGE.md).

**Назначение:** Частая дешёвая числовая покупка с видимым малым результатом.

**Эффект:** +0,1 процентного пункта урона башни за уровень; максимум +10%. Доступны первые 20 уровней до [G02](../10_ProgressionGates.md#G02).

**Совместное действие:** Складывается с указанной общей осью; не перемножать с каждым уровнем. Значение строки — весь накопленный бонус этой ветви.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–20 | 20 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 80 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 1 мин → 2 мин | 0.1 → 2 | [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md) |
| 21–50 | 45 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 25 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 140 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 70 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 3 мин → 5 мин | 2.1 → 5 | [G02](../10_ProgressionGates.md#G02) |
| 51–80 | 80 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 160 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 240 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 480 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 8 мин → 12 мин | 5.1 → 8 | [G04](../10_ProgressionGates.md#G04) |
| 81–100 | 180 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 350 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 220 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 430 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 900 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 600 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 15 мин → 20 мин | 8.1 → 10 | [G05](../10_ProgressionGates.md#G05) |

### LAB_CRIT — Критическая геометрия

**Покупок: 40. Доступ:** [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md). [Все уровни LAB_CRIT](Levels/LAB_CRIT.md).

**Назначение:** Небольшая прибавка среднего урона и поддержка критической сборки.

**Эффект:** Добавляет до 4 п.п. вероятности крита; не меняет критический множитель.

**Совместное действие:** Складывается с указанной общей осью; не перемножать с каждым уровнем. Значение строки — весь накопленный бонус этой ветви. Общий шанс крита с башней и эффектами ≤60%.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 60 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 40 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 180 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 120 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 10 мин → 30 мин | 0.1 → 1 | [G02](../10_ProgressionGates.md#G02) |
| 11–25 | 220 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 250 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 720 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 900 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 1 ч → 4 ч | 1.1 → 2.5 | [G03](../10_ProgressionGates.md#G03) |
| 26–40 | 450 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 1 400 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 2 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 2 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 5 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 9 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 6 ч → 1 сут | 2.6 → 4 | [G05](../10_ProgressionGates.md#G05) |

### R_GATE02 — Чертёж бронебойного снаряда

**Покупок: 1. Доступ:** [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md); до [G02](../10_ProgressionGates.md#G02). [Все уровни R_GATE02](Levels/R_GATE02.md).

**Назначение:** Открывает ось пробивания для дальнейшей постепенной подготовки к B02.

**Эффект:** Открывает покупку [TW06](Levels/TW06.md) и [LAB_PIERCING](Levels/LAB_PIERCING.md). Само исследование даёт 0 п.п. пробивания и не меняет DPS; после открытия обе ветви имеют уровень 0.

**Совместное действие:** Пробивание появляется только от оплаченных числовых уровней [TW06](Levels/TW06.md) и [LAB_PIERCING](Levels/LAB_PIERCING.md). Для выстрела: поглощение=max(0, базовое поглощение−[TW06](Levels/TW06.md)−[LAB_PIERCING](Levels/LAB_PIERCING.md)/100). Нельзя дополнительно применять множитель 1,65; M06 и неуязвимость не снимаются.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1 | 4 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 3 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 40 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 60 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 4 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 3 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 40 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 60 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 3 ч → 3 ч | 0 → 0 | [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md) |

### LAB_PIERCING — Углублённая металлургия снаряда

**Покупок: 30. Доступ:** [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md); [R_GATE02](Levels/R_GATE02.md); первые 10 уровней до [G02](../10_ProgressionGates.md#G02). [Все уровни LAB_PIERCING](Levels/LAB_PIERCING.md).

**Назначение:** Плавное исследование общей оси пробивания параллельно с личными уровнями [TW06](Levels/TW06.md).

**Эффект:** Уровни 1–10 дают по +0,6 п.п. пробивания (6 п.п. суммарно); уровни 11–30 — по +0,4 п.п., максимум 14 п.п. Само [R_GATE02](Levels/R_GATE02.md) не даёт ни одного пункта.

**Совместное действие:** Складывается с [TW06](Levels/TW06.md) в одной оси игнорируемого структурного поглощения выстрела. Итоговое поглощение не ниже 0. Пробивание пассивки P04 применяется к её собственному попаданию, не добавляется к выстрелу башни. M06, неуязвимость и недосягаемость не меняются.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 12 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 20 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 40 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 80 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 3 мин → 12 мин | 0.6 → 6 | [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md); [R_GATE02](Levels/R_GATE02.md) |
| 11–20 | 120 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 180 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 700 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 900 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 1 ч → 12 ч | 6.4 → 10 | [G02](../10_ProgressionGates.md#G02); [R_GATE02](Levels/R_GATE02.md) |
| 21–30 | 500 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 1 100 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 1 600 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 4 200 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 8 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 16 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 2 сут → 7 сут | 10.4 → 14 | [G05](../10_ProgressionGates.md#G05); [R_GATE02](Levels/R_GATE02.md) |

### LAB_RANGE — Геометрия огневого круга

**Покупок: 5. Доступ:** [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md). [Все уровни LAB_RANGE](Levels/LAB_RANGE.md).

**Назначение:** Редкие пространственные изменения, влияющие на позиционные задачи.

**Эффект:** Пять ступеней дают суммарно +2/+4/+6/+8/+10% радиуса башни. Не достаёт врагов, явно отмеченных фазой недосягаемости.

**Совместное действие:** Суммируется с бонусом радиуса [TW03](Levels/TW03.md); общий радиус всех источников ≤×1,5 базового. Личные +15% и лабораторные +10% дают ×1,25 и оставляют запас для временных эффектов. Не добавляет новую цель и не отменяет недосягаемую фазу босса.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1 | 80 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 160 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 80 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 160 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 2 ч → 2 ч | 2 → 2 | [G02](../10_ProgressionGates.md#G02) |
| 2 | 180 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 300 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 180 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 300 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 12 ч → 12 ч | 4 → 4 | [G03](../10_ProgressionGates.md#G03) |
| 3 | 400 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 400 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 2 сут → 2 сут | 6 → 6 | [G04](../10_ProgressionGates.md#G04) |
| 4 | 900 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 1 800 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 2 400 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 900 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 1 800 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 2 400 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 7 сут → 7 сут | 8 → 8 | [G05](../10_ProgressionGates.md#G05) |
| 5 | 1 600 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 3 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 5 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 1 600 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 3 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 5 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 30 сут → 30 сут | 10 → 10 | [G06](../10_ProgressionGates.md#G06) |

### LAB_SECONDARY — Рикошетная камора

**Покупок: 36. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD06_L2](Levels/BLD06_L2.md). [Все уровни LAB_SECONDARY](Levels/LAB_SECONDARY.md).

**Назначение:** Открывает рикошетную ось, затем постепенно повышает долю урона её единственной вторичной цели.

**Эффект:** Покупка 1 за слитки только открывает настройку рикошета с долей 0%. Покупки 2–36 добавляют по 1 п.п. доли первичного урона единственной вторичной цели; максимум 35%. Открытие само не добавляет урон.

**Совместное действие:** Рикошет активен только с выбранной рикошетной настройкой и положительной купленной долей. Рикошет не создаёт следующий рикошет; не действует одновременно с [LAB_RESONANT](Levels/LAB_RESONANT.md). Первая покупка есть открытие оси, последующие 35 — её числовые уровни.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1 | 12 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 20 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 30 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) → 12 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 20 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 30 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) | 1 сут → 1 сут | 0 → 0 | [G03](../10_ProgressionGates.md#G03); [BLD06_L2](Levels/BLD06_L2.md) |
| 2–11 | 120 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 200 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 480 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 800 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 30 мин → 3 ч | 1 → 10 | [G03](../10_ProgressionGates.md#G03); [LAB_SECONDARY](Levels/LAB_SECONDARY.md) 1 |
| 12–21 | 500 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 800 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 1 500 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 5 400 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 6 ч → 1 сут | 11 → 20 | [G04](../10_ProgressionGates.md#G04); [LAB_SECONDARY](Levels/LAB_SECONDARY.md) 1 |
| 22–31 | 1 600 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 3 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 4 800 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 4 800 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 9 600 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 14 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 3 сут → 7 сут | 21 → 30 | [G05](../10_ProgressionGates.md#G05); [LAB_SECONDARY](Levels/LAB_SECONDARY.md) 1 |
| 32–36 | 5 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 7 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 20 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 16 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 22 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 65 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 14 сут → 30 сут | 31 → 35 | [G06](../10_ProgressionGates.md#G06); [LAB_SECONDARY](Levels/LAB_SECONDARY.md) 1 |

### LAB_CLASS — Сравнительная анатомия

**Покупок: 40. Доступ:** [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md). [Все уровни LAB_CLASS](Levels/LAB_CLASS.md).

**Назначение:** Усиление выбранной контрсборки вместо одновременного бонуса ко всем врагам.

**Эффект:** До +16% урона одному выбранному классу: быстрый, сильный, живучий или стреляющий; класс выбирается бесплатно вне боя.

**Совместное действие:** Складывается с указанной общей осью; не перемножать с каждым уровнем. Значение строки — весь накопленный бонус этой ветви. Выбор класса один; раса не считается вторым множителем.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 80 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 50 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 260 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 180 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 15 мин → 1 ч | 0.4 → 4 | [G02](../10_ProgressionGates.md#G02) |
| 11–25 | 260 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 450 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 1 100 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 1 600 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 2 ч → 12 ч | 4.4 → 10 | [G04](../10_ProgressionGates.md#G04) |
| 26–40 | 1 200 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 2 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 4 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 4 100 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 8 800 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 16 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 1 сут → 3 сут | 10.4 → 16 | [G06](../10_ProgressionGates.md#G06) |

### LAB_STABILITY — Стабильность залпа

**Покупок: 20. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04](Levels/BLD04.md). [Все уровни LAB_STABILITY](Levels/LAB_STABILITY.md).

**Назначение:** Снижение разброса боевого результата без нового среднего множителя силы.

**Эффект:** Сужает случайный разброс выстрела на 20% относительно исходного разброса: для базовых ±10% итог ±8%. Средний урон не меняется.

**Совместное действие:** Если в реализации урон детерминирован, ветка отключается и не выставляется на продажу.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 65 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 140 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 320 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 700 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 20 мин → 3 ч | 1 → 10 | [G03](../10_ProgressionGates.md#G03) |
| 11–20 | 420 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 700 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 500 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 1 200 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 2 200 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 1 500 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 6 ч → 1 сут | 11 → 20 | [G05](../10_ProgressionGates.md#G05) |

### LAB_HEALTH — Кладка с перевязкой

**Покупок: 100. Доступ:** [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md). [Все уровни LAB_HEALTH](Levels/LAB_HEALTH.md).

**Назначение:** Вторая дешёвая ранняя ось, позволяющая выбирать между атакой и живучестью.

**Эффект:** По +0,15 п.п. максимального здоровья за уровень; максимум +15%.

**Совместное действие:** Складывается с указанной общей осью; не перемножать с каждым уровнем. Значение строки — весь накопленный бонус этой ветви.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–20 | 18 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 70 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 1 мин → 3 мин | 0.15 → 3 | [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md) |
| 21–50 | 42 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 22 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 125 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 64 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 4 мин → 7 мин | 3.15 → 7.5 | [G02](../10_ProgressionGates.md#G02) |
| 51–80 | 72 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 140 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 210 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 430 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 10 мин → 18 мин | 7.65 → 12 | [G04](../10_ProgressionGates.md#G04) |
| 81–100 | 150 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 380 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 260 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 380 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 650 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 20 мин → 30 мин | 12.15 → 15 | [G05](../10_ProgressionGates.md#G05) |

### LAB_REGEN — Капиллярный ремонт

**Покупок: 60. Доступ:** [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md). [Все уровни LAB_REGEN](Levels/LAB_REGEN.md).

**Назначение:** Поддержка длинного фарма; не лечит мгновенную гибель от рывка.

**Эффект:** До +12% к имеющемуся базовому регену. Если реген башни ещё не открыт, исследование заранее показывает эту зависимость.

**Совместное действие:** Складывается с указанной общей осью; не перемножать с каждым уровнем. Значение строки — весь накопленный бонус этой ветви. Не создаёт реген с нулевой базой.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–20 | 32 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 30 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 120 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 110 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 5 мин → 30 мин | 0.2 → 4 | [G02](../10_ProgressionGates.md#G02); открыта ветка регенерации башни |
| 21–40 | 220 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 700 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 700 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 2 100 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 1 ч → 4 ч | 4.2 → 8 | [G04](../10_ProgressionGates.md#G04) |
| 41–60 | 550 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 1 100 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 2 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 1 600 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 3 600 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 6 400 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 8 ч → 1 сут | 8.2 → 12 | [G06](../10_ProgressionGates.md#G06) |

### LAB_SHIELD — Ёмкость постоянного барьера

**Покупок: 40. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04](Levels/BLD04.md); [TW11](Levels/TW11.md) 1. [Все уровни LAB_SHIELD](Levels/LAB_SHIELD.md).

**Назначение:** Увеличивает отдельный запас барьера башни [TW11](Levels/TW11.md), сохраняя задержку восстановления и конечную ёмкость.

**Эффект:** Добавляет к ёмкости постоянного барьера [TW11](Levels/TW11.md) до 12 процентных пунктов максимального HP башни. Например, [TW11](Levels/TW11.md) на 15% HP вместе с полным исследованием даёт барьер 27% HP. Не меняет 8-секундную задержку восстановления, активные способности или [R_GATE04](Levels/R_GATE04.md).

**Совместное действие:** Суммируется только с ёмкостью [TW11](Levels/TW11.md); общий барьер ≤30% максимального HP. Не увеличивает неуязвимость A01 или количество перехватов A10. Требует реально открытого [TW11](Levels/TW11.md).

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 60 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 140 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 320 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 700 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 20 мин → 2 ч | 0.3 → 3 | [G03](../10_ProgressionGates.md#G03); [TW11](Levels/TW11.md) 1 |
| 11–25 | 800 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 1 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 2 800 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 2 800 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 4 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 9 800 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 4 ч → 1 сут | 3.3 → 7.5 | [G05](../10_ProgressionGates.md#G05) |
| 26–40 | 1 600 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 6 400 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 3 600 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 4 900 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 20 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 11 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 2 сут → 7 сут | 7.8 → 12 | [G06](../10_ProgressionGates.md#G06) |

### LAB_REFLECT — Шипованный сплав

**Покупок: 35. Доступ:** [G03](../10_ProgressionGates.md#G03); отражение башни открыто. [Все уровни LAB_REFLECT](Levels/LAB_REFLECT.md).

**Назначение:** Ситуативная отдача от контактной обороны.

**Эффект:** До +14% к базовому отражаемому урону. Отражение не запускает себя и срабатывания «при попадании».

**Совместное действие:** Складывается с указанной общей осью; не перемножать с каждым уровнем. Значение строки — весь накопленный бонус этой ветви. Общий урон отражением ограничивается отдельным бюджетом башни, не даёт добычу за призванные без наград копии.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 90 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 160 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 330 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 620 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 30 мин → 3 ч | 0.4 → 4 | [G03](../10_ProgressionGates.md#G03) |
| 11–25 | 700 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 2 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 2 400 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 7 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 6 ч → 1 сут | 4.4 → 10 | [G05](../10_ProgressionGates.md#G05) |
| 26–35 | 1 600 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 3 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 4 500 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 4 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 8 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 12 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 2 сут → 5 сут | 10.4 → 14 | [G06](../10_ProgressionGates.md#G06) |

### R_GATE04 — Чертёж распределителя импульса

**Покупок: 1. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04_L2](Levels/BLD04_L2.md); до [G04](../10_ProgressionGates.md#G04). [Все уровни R_GATE04](Levels/R_GATE04.md).

**Назначение:** Открывает отдельную ось защиты от превышающей порог части большого удара.

**Эффект:** Открывает [TW13](Levels/TW13.md) и [LAB_BURST](Levels/LAB_BURST.md) на уровне 0. Исследование само не поглощает урон, не выдаёт щит и не увеличивает EHP.

**Совместное действие:** Обе числовые ветви складываются в одной оси защиты опасной части. Для H=maxHP, входящего D и b=[TW13](Levels/TW13.md)+[LAB_BURST](Levels/LAB_BURST.md)/100: итог=min(D,0.25H)+max(0,D−0.25H)×(1−min(0.60,b)). Никакого дополнительного множителя EHP за открытие.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1 | 12 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 20 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 6 [Золотой слиток (INGOT_AU)](08_Resources.md#INGOT_AU) + 240 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 12 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 20 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 6 [Золотой слиток (INGOT_AU)](08_Resources.md#INGOT_AU) + 240 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 8 ч → 8 ч | 0 → 0 | [G03](../10_ProgressionGates.md#G03); [BLD04_L2](Levels/BLD04_L2.md) |

### LAB_BURST — Аварийные контуры

**Покупок: 25. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04_L2](Levels/BLD04_L2.md); [R_GATE04](Levels/R_GATE04.md); первые 10 уровней до [G04](../10_ProgressionGates.md#G04). [Все уровни LAB_BURST](Levels/LAB_BURST.md).

**Назначение:** Плавно улучшает открытую защиту опасной части удара, поддерживая основную ветвь [TW13](Levels/TW13.md).

**Эффект:** По +1 п.п. снижения части одиночного удара сверх 25% maxHP на уровень, максимум 25 п.п. Первые 10 уровней доступны до [G04](../10_ProgressionGates.md#G04); [R_GATE04](Levels/R_GATE04.md) имеет нулевой числовой эффект.

**Совместное действие:** Складывается с [TW13](Levels/TW13.md); общий предел этой оси 60%. Применяется только к части сверх 25% maxHP, поэтому не равно общему EHP-множителю. Не создаёт отдельное дополнительное срабатывание щита.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 80 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 140 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 35 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) → 240 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 420 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 100 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) | 15 мин → 1 ч 30 мин | 1 → 10 | [G03](../10_ProgressionGates.md#G03); [R_GATE04](Levels/R_GATE04.md) |
| 11–20 | 250 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 600 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 1 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 1 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 2 400 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 4 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 12 ч → 3 сут | 11 → 20 | [G04](../10_ProgressionGates.md#G04); [R_GATE04](Levels/R_GATE04.md) |
| 21–25 | 1 800 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 2 400 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 6 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 7 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 9 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 24 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 7 сут → 30 сут | 21 → 25 | [G05](../10_ProgressionGates.md#G05); [R_GATE04](Levels/R_GATE04.md) |

### LAB_RECOVERY — Ремонт между волнами

**Покупок: 30. Доступ:** [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md). [Все уровни LAB_RECOVERY](Levels/LAB_RECOVERY.md).

**Назначение:** Восстановление в паузе поддерживает длинный забег, но не решает burst-порог.

**Эффект:** По завершении боевой волны восстанавливает до 3% максимального HP. Требует настоящего перехода волны; не срабатывает на перезапуск сохранения.

**Совместное действие:** Суммируется до общего предела лечения между волнами 10% HP; не действует внутри бесконечной волны рейтинга.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 70 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 80 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 250 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 280 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 15 мин → 1 ч 30 мин | 0.1 → 1 | [G02](../10_ProgressionGates.md#G02) |
| 11–20 | 300 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 800 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 1 100 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 2 900 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 3 ч → 12 ч | 1.1 → 2 | [G04](../10_ProgressionGates.md#G04) |
| 21–30 | 1 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 1 400 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 3 800 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 2 700 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 4 200 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 11 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 1 сут → 3 сут | 2.1 → 3 | [G06](../10_ProgressionGates.md#G06) |

### LAB_CONTROL_RESIST — Инерционная подвеска

**Покупок: 20. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04](Levels/BLD04.md). [Все уровни LAB_CONTROL_RESIST](Levels/LAB_CONTROL_RESIST.md).

**Назначение:** Сокращает вражеское подавление башни, сохраняя необходимость реакции.

**Эффект:** До 20% уменьшения длительности оглушения или замедления башни. Не уменьшает M05 у активных заклинаний.

**Совместное действие:** В общий предел сокращения контроля 50%; разные исследования не доводят длительность до нуля.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 90 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 180 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 900 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 30 мин → 3 ч | 1 → 10 | [G03](../10_ProgressionGates.md#G03) |
| 11–20 | 700 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 2 600 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 1 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 2 400 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 9 100 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 5 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 12 ч → 3 сут | 11 → 20 | [G05](../10_ProgressionGates.md#G05) |

### LAB_PROJECTILE_BLOCK — Противоснарядная сетка

**Покупок: 15. Доступ:** [G04](../10_ProgressionGates.md#G04); [BLD04_L2](Levels/BLD04_L2.md). [Все уровни LAB_PROJECTILE_BLOCK](Levels/LAB_PROJECTILE_BLOCK.md).

**Назначение:** Особая защитная специализация против стрелков.

**Эффект:** До 15% вероятности блокировать обычный вражеский снаряд; лучи, контакт и отмеченные атаки боссов не блокируются.

**Совместное действие:** В общий предел вероятности блока 30%; блок считается один раз и не отражает заблокированный урон.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–5 | 180 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 440 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 640 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 600 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 1 ч → 6 ч | 1 → 5 | [G04](../10_ProgressionGates.md#G04) |
| 6–10 | 900 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 2 100 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 3 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 2 400 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 5 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 8 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 12 ч → 2 сут | 6 → 10 | [G05](../10_ProgressionGates.md#G05) |
| 11–15 | 1 600 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 7 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 4 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 5 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 22 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 13 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 4 сут → 14 сут | 11 → 15 | [G06](../10_ProgressionGates.md#G06) |

### LAB_SPELL_POWER — Точные магические пропорции

**Покупок: 80. Доступ:** [G02](../10_ProgressionGates.md#G02); [BLD06](Levels/BLD06.md) и [BLD04](Levels/BLD04.md). [Все уровни LAB_SPELL_POWER](Levels/LAB_SPELL_POWER.md).

**Назначение:** Много недорогих небольших усилений заклинаний.

**Эффект:** По +0,2 п.п. прямого урона заклинания за уровень; максимум +16%. Не меняет лечение, щит, добычу, броню, замедление, заряды, cooldown, область или длительность контроля.

**Совместное действие:** Складывается с указанной общей осью; не перемножать с каждым уровнем. Значение строки — весь накопленный бонус этой ветви. Совместно с другими лабораторными усилениями выбранной оси не выше +28%.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–20 | 25 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 20 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 80 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 70 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 2 мин → 6 мин | 0.2 → 4 | [G02](../10_ProgressionGates.md#G02) |
| 21–40 | 100 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 180 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 340 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 600 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 10 мин → 25 мин | 4.2 → 8 | [G03](../10_ProgressionGates.md#G03) |
| 41–60 | 400 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 1 300 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 700 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 1 200 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 4 100 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 2 300 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 30 мин → 1 ч 30 мин | 8.2 → 12 | [G05](../10_ProgressionGates.md#G05) |
| 61–80 | 900 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 2 400 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 3 800 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 2 400 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 6 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 10 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 2 ч → 6 ч | 12.2 → 16 | [G06](../10_ProgressionGates.md#G06) |

### LAB_COOLDOWN — Быстрое связывание рун

**Покупок: 25. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04](Levels/BLD04.md). [Все уровни LAB_COOLDOWN](Levels/LAB_COOLDOWN.md).

**Назначение:** Умеренно уплотняет расход конечных зарядов, не восстанавливая их.

**Эффект:** До 10% сокращения интервала между применениями только активных заклинаний. Пассивные кликовые P01–P04 не получают этот лабораторный бонус.

**Совместное действие:** Суммируется с личной веткой до общего сокращения 40%; итоговый cooldown ≥60% базы.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 130 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 240 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 650 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 1 200 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 30 мин → 4 ч | 0.4 → 4 | [G03](../10_ProgressionGates.md#G03) |
| 11–20 | 1 800 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 6 500 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 3 600 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 5 600 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 20 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 11 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 12 ч → 2 сут | 4.4 → 8 | [G05](../10_ProgressionGates.md#G05) |
| 21–25 | 3 600 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 14 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 9 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 7 800 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 32 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 20 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 7 сут → 30 сут | 8.4 → 10 | [G06](../10_ProgressionGates.md#G06) |

### LAB_DURATION — Удержание безопасных эффектов

**Покупок: 30. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04](Levels/BLD04.md). [Все уровни LAB_DURATION](Levels/LAB_DURATION.md).

**Назначение:** Помогает длительным защитным и уронным эффектам без бесконечного контроля.

**Эффект:** До +10% базовой длительности только A01/A02/A04/A05/A06/A08/A10. Для A01 это ровно +0,4 секунды к базовым 4 секундам: с личными +30% и карточными +10% итог не выше 6 секунд. A12 с жёстким контролем, лечение A09 и все прочие эффекты вне этого списка лабораторный бонус длительности не получают.

**Совместное действие:** Складывается с указанной общей осью; не перемножать с каждым уровнем. Значение строки — весь накопленный бонус этой ветви. Общий множитель длительности допустимых эффектов ≤1,5.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 90 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 250 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 430 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 1 100 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 30 мин → 3 ч | 0.333333 → 3.333333 | [G03](../10_ProgressionGates.md#G03) |
| 11–20 | 700 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 600 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 2 600 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 5 600 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 6 ч → 1 сут | 3.666667 → 6.666667 | [G05](../10_ProgressionGates.md#G05) |
| 21–30 | 1 600 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 3 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 5 800 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 4 400 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 9 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 16 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 2 сут → 7 сут | 7 → 10 | [G06](../10_ProgressionGates.md#G06) |

### LAB_AREA — Контуры распространения

**Покупок: 12. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04](Levels/BLD04.md). [Все уровни LAB_AREA](Levels/LAB_AREA.md).

**Назначение:** Умеренное повышение охвата урона ценнее линейной прибавки радиуса.

**Эффект:** До +6% базового радиуса только P03 и A03; площадь растёт нелинейно. Для P03 личный максимум 0,573R плюс 6% от базы 0,45R даёт 0,60R; для A03 личный максимум 0,429R плюс 6% от базы 0,35R даёт 0,45R. Не увеличивает число целей, контроль или добычу.

**Совместное действие:** Для P03 итоговый радиус ≤0,60R, для A03 ≤0,45R. Лабораторные 6% считаются от исходных 0,45R и 0,35R соответственно, после деления табличного процента на 100. Общего предела +20% для этих двух способностей нет; добывающие зоны не усиливаются.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–4 | 150 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 320 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 700 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 1 500 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 1 ч → 4 ч | 0.5 → 2 | [G03](../10_ProgressionGates.md#G03) |
| 5–8 | 1 300 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 4 600 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 2 800 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 4 100 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 14 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 8 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 12 ч → 2 сут | 2.5 → 4 | [G05](../10_ProgressionGates.md#G05) |
| 9–12 | 2 400 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 11 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 6 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 6 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 28 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 16 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 7 сут → 30 сут | 4.5 → 6 | [G06](../10_ProgressionGates.md#G06) |

### LAB_ACCURACY — Стабильный захват цели

**Покупок: 10. Доступ:** [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md). [Все уровни LAB_ACCURACY](Levels/LAB_ACCURACY.md).

**Назначение:** Небольшая контрмера против уклонения с ранним ограниченным доступом.

**Эффект:** Снижает шанс уклонения от прицельных атак, включая P04, до 4 п.п. Не действует на P01 с гарантированным попаданием, площадные гарантированные попадания или фазы неуязвимости.

**Совместное действие:** Враг не получает отрицательный шанс уклонения. Не добавляет попадания башне автоматически.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–3 | 85 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 110 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 280 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 360 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 30 мин → 2 ч | 0.4 → 1.2 | [G02](../10_ProgressionGates.md#G02) |
| 4–7 | 450 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 1 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 1 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 4 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 4 ч → 1 сут | 1.6 → 2.8 | [G04](../10_ProgressionGates.md#G04) |
| 8–10 | 1 500 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 3 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 4 500 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 3 300 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 6 800 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 10 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 3 сут → 7 сут | 3.2 → 4 | [G06](../10_ProgressionGates.md#G06) |

### LAB_CHARGES — Запасной рунический контейнер

**Покупок: 2. Доступ:** [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md); [BLD06](Levels/BLD06.md). [Все уровни LAB_CHARGES](Levels/LAB_CHARGES.md).

**Назначение:** Открывает доступ к личным ступеням запаса активных заклинаний без собственной выдачи зарядов.

**Эффект:** Исследование 1 разрешает покупку первой личной ступени Axx_CHARGES, исследование 2 — второй. Ни одно исследование само не добавляет заряда; после допуска нужно отдельно оплатить соответствующую ветвь выбранной способности.

**Совместное действие:** Единственный числовой источник дополнительных зарядов — личные Axx_CHARGES. Их общий предел +2 на способность сохраняется; лабораторного добавочного слагаемого больше нет. Доступ не открывает несуществующую ветвь у способности без Axx_CHARGES.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1 | 8 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 12 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 60 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 8 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 12 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 60 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 6 ч → 6 ч | 0 → 0 | [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md); [BLD06](Levels/BLD06.md) |
| 2 | 12 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 24 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 40 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 400 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 12 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 24 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 40 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 400 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 2 сут → 2 сут | 0 → 0 | [G04](../10_ProgressionGates.md#G04); [LAB_CHARGES](Levels/LAB_CHARGES.md) 1; [BLD04_L2](Levels/BLD04_L2.md) |

### LAB_INTERACTION — Парные рунические протоколы

**Покупок: 6. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04](Levels/BLD04.md); [LAB_SLOTS](Levels/LAB_SLOTS.md) 1. [Все уровни LAB_INTERACTION](Levels/LAB_INTERACTION.md).

**Назначение:** Горизонтальные сочетания, требующие осознанной сборки двух способностей.

**Эффект:** Последовательно открывает 6 предложенных протоколов: метка+выстрел; замедление+точечный удар; щит+контратака; поле+цепь; рассеивание+залп; барьер+импульс. Одновременно выбран один протокол. Числовой выигрыш не выше +12% соответствующей оси.

**Совместное действие:** Протокол даёт новую условную связь, не суммарный бонус за все открытые пары; сочетания и конкретные способности подлежат обсуждению.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1 | 24 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) → 24 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) | 2 сут → 2 сут | 1 → 1 | [G03](../10_ProgressionGates.md#G03); [LAB_SLOTS](Levels/LAB_SLOTS.md) 1 |
| 2 | 32 [Золотой слиток (INGOT_AU)](08_Resources.md#INGOT_AU) + 30 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) → 32 [Золотой слиток (INGOT_AU)](08_Resources.md#INGOT_AU) + 30 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) | 7 сут → 7 сут | 2 → 2 | [G04](../10_ProgressionGates.md#G04) |
| 3 | 50 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 80 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) → 50 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 80 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) | 30 сут → 30 сут | 3 → 3 | [G05](../10_ProgressionGates.md#G05) |
| 4 | 100 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 40 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 120 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) → 100 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 40 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 120 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) | 60 сут → 60 сут | 4 → 4 | [G06](../10_ProgressionGates.md#G06) |
| 5 | 120 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 160 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 180 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) → 120 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 160 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 180 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) | 120 сут → 120 сут | 5 → 5 | [G06](../10_ProgressionGates.md#G06); завершён проект мастерства 12 |
| 6 | 240 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 300 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 300 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) → 240 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 300 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 300 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) | 240 сут → 240 сут | 6 → 6 | [G06](../10_ProgressionGates.md#G06); завершён проект мастерства 24 |

### LAB_INTERFERENCE — Экранирование помех

**Покупок: 15. Доступ:** [G04](../10_ProgressionGates.md#G04); [BLD04_L2](Levels/BLD04_L2.md). [Все уровни LAB_INTERFERENCE](Levels/LAB_INTERFERENCE.md).

**Назначение:** Смягчает M05, не отменяя построение контрсборки.

**Эффект:** До 30% сокращает только добавочную задержку от M05. Например, штраф +50% становится +35%, базовый cooldown не уменьшается.

**Совместное действие:** Не умножать сокращение на весь cooldown. Вместе с другими источниками штраф M05 уменьшается не более чем на 50%.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–5 | 210 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 500 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 800 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 800 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 1 ч → 6 ч | 2 → 10 | [G04](../10_ProgressionGates.md#G04) |
| 6–10 | 1 300 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 3 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 5 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 3 800 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 8 600 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 15 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 12 ч → 2 сут | 12 → 20 | [G05](../10_ProgressionGates.md#G05) |
| 11–15 | 3 300 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 14 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 8 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 7 900 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 32 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 20 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 5 сут → 14 сут | 22 → 30 | [G06](../10_ProgressionGates.md#G06) |

### LAB_SLOTS — Дополнительная печать заклинания

**Покупок: 2. Доступ:** [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md); [BLD06](Levels/BLD06.md). [Все уровни LAB_SLOTS](Levels/LAB_SLOTS.md).

**Назначение:** Один из главных игровых переломов: больше одновременно взятых активных способностей.

**Эффект:** Начальный один активный слот становится двумя после уровня 1 и тремя после уровня 2. Количество пассивных слотов остаётся 1.

**Совместное действие:** Единственный владелец активных слотов. Арканум, карты, герои и другие исследования не продают эти же два слота повторно.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1 | 30 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 12 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) → 30 [Железный слиток (INGOT_FE)](08_Resources.md#INGOT_FE) + 12 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) | 1 сут → 1 сут | 2 → 2 | [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md); [BLD06](Levels/BLD06.md) |
| 2 | 80 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 40 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 100 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) → 80 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 40 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 100 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) | 30 сут → 30 сут | 3 → 3 | [G05](../10_ProgressionGates.md#G05); [LAB_SLOTS](Levels/LAB_SLOTS.md) 1; [BLD04_L3](Levels/BLD04_L3.md) |

### R_GATE06 — Чертёж фокусирующей решётки

**Покупок: 1. Доступ:** [G05](../10_ProgressionGates.md#G05); [BLD04_L3](Levels/BLD04_L3.md); до [G06](../10_ProgressionGates.md#G06). [Все уровни R_GATE06](Levels/R_GATE06.md).

**Назначение:** Открывает числовую ветвь фокусировки для настройки сборки перед B11.

**Эффект:** Открывает [LAB_RESONANT](Levels/LAB_RESONANT.md) на уровне 0. Само исследование не усиливает урон, не продлевает окно и не отменяет недосягаемость; результат появится после постепенных покупок [LAB_RESONANT](Levels/LAB_RESONANT.md).

**Совместное действие:** Нет отдельного множителя резонанса. Фокусировка и рикошет выбираются взаимоисключающе вне боя; число изученных ветвей само по себе не усиливает бой.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1 | 8 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 12 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 30 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 60 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 240 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) → 8 [Обработанный астралит (INGOT_AS)](08_Resources.md#INGOT_AS) + 12 [Мифрильный слиток (INGOT_MY)](08_Resources.md#INGOT_MY) + 30 [Серебряный слиток (INGOT_AG)](08_Resources.md#INGOT_AG) + 60 [Медный слиток (INGOT_CU)](08_Resources.md#INGOT_CU) + 240 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) | 1 сут → 1 сут | 0 → 0 | [G05](../10_ProgressionGates.md#G05); [BLD04_L3](Levels/BLD04_L3.md) |

### LAB_RESONANT — Фокусирующая решётка

**Покупок: 20. Доступ:** [G05](../10_ProgressionGates.md#G05); [R_GATE06](Levels/R_GATE06.md); первые 10 уровней до [G06](../10_ProgressionGates.md#G06). [Все уровни LAB_RESONANT](Levels/LAB_RESONANT.md).

**Назначение:** Постепенное развитие выбранной специализации одиночного урона.

**Эффект:** По +1 п.п. базового урона выстрела выбранной одиночной цели на уровень; максимум +20%. Первые 10 уровней доступны до [G06](../10_ProgressionGates.md#G06). После [R_GATE06](Levels/R_GATE06.md) бонус ещё 0%.

**Совместное действие:** Бонус складывается с [LAB_DAMAGE](Levels/LAB_DAMAGE.md) и другими явно относящимися к урону башни аддитивными прибавками, не является множителем каждой ступени. Выбор фокусировки отключает [LAB_SECONDARY](Levels/LAB_SECONDARY.md); изучить обе ветви и менять выбор вне боя можно бесплатно.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 120 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 180 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 300 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 420 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 600 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 1 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 30 мин → 4 ч | 1 → 10 | [G05](../10_ProgressionGates.md#G05); [R_GATE06](Levels/R_GATE06.md) |
| 11–15 | 800 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 1 800 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 3 200 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 2 400 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 5 200 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 9 600 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 2 сут → 7 сут | 11 → 15 | [G06](../10_ProgressionGates.md#G06); [R_GATE06](Levels/R_GATE06.md) |
| 16–20 | 4 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 6 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 12 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 14 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 18 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 42 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 14 сут → 60 сут | 16 → 20 | [G06](../10_ProgressionGates.md#G06); завершён проект мастерства 12; [R_GATE06](Levels/R_GATE06.md) |

### LAB_YIELD_CU — Разбор медного лома

**Покупок: 40. Доступ:** [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md). [Все уровни LAB_YIELD_CU](Levels/LAB_YIELD_CU.md).

**Назначение:** Недорогая ранняя производственная специализация, полезная для возврата за медью.

**Эффект:** До +12% ожидаемого выхода [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) в разрешённых боевых наградах; не повышает шанс кристалла.

**Совместное действие:** В общем пределе бонуса добычи конкретного материала +35%. Дробная добавка выдаётся накопителем остатка, не через ceil каждого врага. Перед покупкой показывать эффективный прирост в выбранной сборке после общего cap; при нулевом приросте предложить другую сборку или бесплатное перераспределение, не обещая несуществующей добычи.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 80 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 220 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 5 мин → 20 мин | 0.3 → 3 | [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md) |
| 11–25 | 400 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 150 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 1 400 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 700 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 1 ч → 6 ч | 3.3 → 7.5 | [G03](../10_ProgressionGates.md#G03) |
| 26–40 | 2 500 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 700 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 350 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 8 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 2 500 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 800 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 12 ч → 2 сут | 7.8 → 12 | [G05](../10_ProgressionGates.md#G05) |

### LAB_YIELD_FE — Сортировка железной руды

**Покупок: 35. Доступ:** [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md). [Все уровни LAB_YIELD_FE](Levels/LAB_YIELD_FE.md).

**Назначение:** Снимает нагрузку массовых железных рецептов, не заменяя кузницу.

**Эффект:** До +10,5% ожидаемого выхода [Железная руда (RAW_FE)](08_Resources.md#RAW_FE).

**Совместное действие:** Общий предел добычи материала +35%; накопитель дробной добавки. Перед покупкой показывать эффективный прирост в выбранной сборке после общего cap; при нулевом приросте предложить другую сборку или бесплатное перераспределение, не обещая несуществующей добычи.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 100 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 300 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 10 мин → 45 мин | 0.3 → 3 | [G02](../10_ProgressionGates.md#G02) |
| 11–25 | 600 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 150 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 250 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 2 200 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 650 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 1 100 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 2 ч → 12 ч | 3.3 → 7.5 | [G04](../10_ProgressionGates.md#G04) |
| 26–35 | 3 500 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 1 200 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 600 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 9 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 4 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 2 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 1 сут → 4 сут | 7.8 → 10.5 | [G06](../10_ProgressionGates.md#G06) |

### LAB_YIELD_AG — Серебряная селекция

**Покупок: 30. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04](Levels/BLD04.md). [Все уровни LAB_YIELD_AG](Levels/LAB_YIELD_AG.md).

**Назначение:** Инвестиция в средние функциональные открытия.

**Эффект:** До +9% ожидаемого выхода [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG).

**Совместное действие:** Общий предел добычи материала +35%; накопитель дробной добавки. Перед покупкой показывать эффективный прирост в выбранной сборке после общего cap; при нулевом приросте предложить другую сборку или бесплатное перераспределение, не обещая несуществующей добычи.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–10 | 160 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 20 мин → 2 ч | 0.3 → 3 | [G03](../10_ProgressionGates.md#G03) |
| 11–20 | 1 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 300 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 400 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 3 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 1 200 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 600 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 6 ч → 1 сут | 3.3 → 6 | [G05](../10_ProgressionGates.md#G05) |
| 21–30 | 5 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 1 600 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 1 100 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 14 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 5 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 5 200 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 2 сут → 7 сут | 6.3 → 9 | [G06](../10_ProgressionGates.md#G06) |

### LAB_YIELD_AU — Золотое выщелачивание

**Покупок: 25. Доступ:** [G04](../10_ProgressionGates.md#G04); [BLD04_L2](Levels/BLD04_L2.md). [Все уровни LAB_YIELD_AU](Levels/LAB_YIELD_AU.md).

**Назначение:** Более дорогая инвестиция с меньшим числом ступеней для золота.

**Эффект:** До +10% ожидаемого выхода [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU).

**Совместное действие:** Общий предел добычи материала +35%; накопитель дробной добавки. Перед покупкой показывать эффективный прирост в выбранной сборке после общего cap; при нулевом приросте предложить другую сборку или бесплатное перераспределение, не обещая несуществующей добычи.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–8 | 220 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) → 750 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) | 30 мин → 3 ч | 0.4 → 3.2 | [G04](../10_ProgressionGates.md#G04) |
| 9–17 | 1 600 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 400 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 650 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 5 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 600 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 2 600 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 12 ч → 2 сут | 3.6 → 6.8 | [G05](../10_ProgressionGates.md#G05) |
| 18–25 | 8 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 2 400 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 1 800 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 22 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 7 500 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 7 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 4 сут → 14 сут | 7.2 → 10 | [G06](../10_ProgressionGates.md#G06) |

### LAB_YIELD_MY — Мифрильная сепарация

**Покупок: 20. Доступ:** [G05](../10_ProgressionGates.md#G05); [BLD04_L3](Levels/BLD04_L3.md). [Все уровни LAB_YIELD_MY](Levels/LAB_YIELD_MY.md).

**Назначение:** Поздняя инвестиция под дорогие конструкционные компоненты.

**Эффект:** До +10% ожидаемого выхода [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY).

**Совместное действие:** Общий предел добычи материала +35%; накопитель дробной добавки. Перед покупкой показывать эффективный прирост в выбранной сборке после общего cap; при нулевом приросте предложить другую сборку или бесплатное перераспределение, не обещая несуществующей добычи.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–6 | 350 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) → 1 300 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) | 1 ч → 6 ч | 0.5 → 3 | [G05](../10_ProgressionGates.md#G05) |
| 7–13 | 2 500 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 1 500 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 100 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 8 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 5 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 4 400 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 1 сут → 4 сут | 3.5 → 6.5 | [G06](../10_ProgressionGates.md#G06) |
| 14–20 | 14 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 4 500 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 4 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 40 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 14 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 18 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 7 сут → 30 сут | 7 → 10 | [G06](../10_ProgressionGates.md#G06); завершён проект мастерства 12 |

### LAB_YIELD_AS — Астральная спектроскопия

**Покупок: 15. Доступ:** [G06](../10_ProgressionGates.md#G06); [BLD04_L3](Levels/BLD04_L3.md). [Все уровни LAB_YIELD_AS](Levels/LAB_YIELD_AS.md).

**Назначение:** Глубокая добывающая ветка: короткий список более крупных ступеней.

**Эффект:** До +12% ожидаемого выхода [Астралит (RAW_AS)](08_Resources.md#RAW_AS).

**Совместное действие:** Общий предел добычи материала +35%; накопитель дробной добавки. Перед покупкой показывать эффективный прирост в выбранной сборке после общего cap; при нулевом приросте предложить другую сборку или бесплатное перераспределение, не обещая несуществующей добычи.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–5 | 600 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) → 2 200 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) | 2 ч → 12 ч | 0.8 → 4 | [G06](../10_ProgressionGates.md#G06) |
| 6–10 | 5 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 4 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 3 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 16 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 14 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 12 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 2 сут → 7 сут | 4.8 → 8 | [G06](../10_ProgressionGates.md#G06); завершён проект мастерства 12 |
| 11–15 | 28 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 25 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 12 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 80 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 70 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 45 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 14 сут → 60 сут | 8.8 → 12 | [G06](../10_ProgressionGates.md#G06); завершён проект мастерства 24 |

### LAB_YIELD_COAL — Углеродный отбор

**Покупок: 30. Доступ:** [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md). [Все уровни LAB_YIELD_COAL](Levels/LAB_YIELD_COAL.md).

**Назначение:** Поддержка топлива с ранней ценой, окупаемой реальной потребностью кузницы.

**Эффект:** До +15% ожидаемого боевого выхода [Уголь (COAL)](08_Resources.md#COAL). Не повышает скорость шахты и не действует на купленный уголь.

**Совместное действие:** Общий предел бонуса добычи [Уголь (COAL)](08_Resources.md#COAL) +35%; накопитель дробной добавки. Перед покупкой показывать эффективный прирост в выбранной сборке после общего cap; при нулевом приросте предложить другую сборку или бесплатное перераспределение, не обещая несуществующей добычи.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–5 | 100 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 30 [Уголь (COAL)](08_Resources.md#COAL) → 250 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) + 80 [Уголь (COAL)](08_Resources.md#COAL) | 5 мин → 20 мин | 0.5 → 2.5 | [G01](../10_ProgressionGates.md#G01); [BLD04](Levels/BLD04.md) |
| 6–15 | 220 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 180 [Уголь (COAL)](08_Resources.md#COAL) → 900 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 600 [Уголь (COAL)](08_Resources.md#COAL) | 1 ч → 6 ч | 3 → 7.5 | [G03](../10_ProgressionGates.md#G03) |
| 16–25 | 1 600 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 1 200 [Уголь (COAL)](08_Resources.md#COAL) + 1 500 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 6 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 4 000 [Уголь (COAL)](08_Resources.md#COAL) + 6 500 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 12 ч → 2 сут | 8 → 12.5 | [G05](../10_ProgressionGates.md#G05) |
| 26–30 | 8 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 6 000 [Уголь (COAL)](08_Resources.md#COAL) + 4 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 18 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 14 000 [Уголь (COAL)](08_Resources.md#COAL) + 10 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 7 сут → 30 сут | 13 → 15 | [G06](../10_ProgressionGates.md#G06) |

### LAB_FORGE_SPEED — Тепловой режим печи

**Покупок: 8. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04](Levels/BLD04.md). [Все уровни LAB_FORGE_SPEED](Levels/LAB_FORGE_SPEED.md).

**Назначение:** Немного дорогих улучшений полезнее сотни ничтожных ускорений производства.

**Эффект:** Итоговый лабораторный множитель времени производства — от ×1,025 до ×1,25 производительности.

**Совместное действие:** Умножается на скорость здания не более ×1,6; итог min(×2, здание × лаборатория). Очередь и число печей здесь не продаются.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–3 | 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 500 [Уголь (COAL)](08_Resources.md#COAL) → 2 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 1 800 [Уголь (COAL)](08_Resources.md#COAL) | 6 ч → 1 сут | 1.025 → 1.075 | [G03](../10_ProgressionGates.md#G03) |
| 4–6 | 4 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 3 500 [Уголь (COAL)](08_Resources.md#COAL) + 1 000 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 14 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 12 000 [Уголь (COAL)](08_Resources.md#COAL) + 3 600 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 3 сут → 14 сут | 1.1 → 1.175 | [G05](../10_ProgressionGates.md#G05) |
| 7–8 | 20 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 18 000 [Уголь (COAL)](08_Resources.md#COAL) + 4 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 50 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 40 000 [Уголь (COAL)](08_Resources.md#COAL) + 12 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 30 сут → 90 сут | 1.21 → 1.25 | [G06](../10_ProgressionGates.md#G06) |

### LAB_RAW_EFFICIENCY — Сохранение полезного вещества

**Покупок: 15. Доступ:** [G03](../10_ProgressionGates.md#G03); [BLD04](Levels/BLD04.md). [Все уровни LAB_RAW_EFFICIENCY](Levels/LAB_RAW_EFFICIENCY.md).

**Назначение:** Отдельно снижает потребность в руде, не повышая число готовых слитков.

**Эффект:** До 6% сокращения сырья в будущих рецептах; применимо ко всем открытым материалам.

**Совместное действие:** Для допустимой партии n слитков: ceil(n × базовое сырьё × (1−бонус/100)); минимум n. Округление применяется к партии, а не отдельно к каждому слитку. Входной вектор списывается до начала, выход остаётся ровно n слитков. Уголь не уменьшается этой веткой. Изменение рецепта после запуска не пересчитывает оплаченный заказ.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–5 | 350 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 1 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 2 ч → 12 ч | 0.4 → 2 | [G03](../10_ProgressionGates.md#G03) |
| 6–10 | 2 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 500 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 800 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) → 7 000 [Золотая руда (RAW_AU)](08_Resources.md#RAW_AU) + 2 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 3 500 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) | 1 сут → 4 сут | 2.4 → 4 | [G05](../10_ProgressionGates.md#G05) |
| 11–15 | 8 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 6 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 6 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 24 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 18 000 [Мифрильная руда (RAW_MY)](08_Resources.md#RAW_MY) + 22 000 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 7 сут → 30 сут | 4.4 → 6 | [G06](../10_ProgressionGates.md#G06) |

### LAB_COAL_EFFICIENCY — Закрытый топливный цикл

**Покупок: 20. Доступ:** [G02](../10_ProgressionGates.md#G02); [BLD04](Levels/BLD04.md). [Все уровни LAB_COAL_EFFICIENCY](Levels/LAB_COAL_EFFICIENCY.md).

**Назначение:** Снижает только топливную нагрузку, особенно заметно на дорогих материалах.

**Эффект:** До 10% сокращения [Уголь (COAL)](08_Resources.md#COAL) будущего рецепта; расход сырья и время не изменяются.

**Совместное действие:** Для допустимой партии n слитков: ceil(n × базовый уголь × (1−бонус/100)); минимум n. Целочисленное округление применяется к партии. UI показывает фактическую экономию; слишком маленькая партия может экономить 0 единиц. Разделение партии не увеличивает скидку. Изменение исследования после запуска не пересчитывает оплаченный заказ.

| Покупки | Цена первого → последнего уровня | Время первого → последнего | Накопленный результат | Дополнительный доступ |
|---|---|---|---|---|
| 1–5 | 240 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 100 [Уголь (COAL)](08_Resources.md#COAL) → 800 [Железная руда (RAW_FE)](08_Resources.md#RAW_FE) + 300 [Уголь (COAL)](08_Resources.md#COAL) | 1 ч → 6 ч | 0.5 → 2.5 | [G02](../10_ProgressionGates.md#G02) |
| 6–12 | 1 200 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 700 [Уголь (COAL)](08_Resources.md#COAL) + 900 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) → 4 500 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) + 2 400 [Уголь (COAL)](08_Resources.md#COAL) + 3 600 [Медная руда (RAW_CU)](08_Resources.md#RAW_CU) | 12 ч → 2 сут | 3 → 6 | [G04](../10_ProgressionGates.md#G04) |
| 13–20 | 6 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 5 000 [Уголь (COAL)](08_Resources.md#COAL) + 5 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) → 20 000 [Астралит (RAW_AS)](08_Resources.md#RAW_AS) + 16 000 [Уголь (COAL)](08_Resources.md#COAL) + 18 000 [Серебряная руда (RAW_AG)](08_Resources.md#RAW_AG) | 4 сут → 21 сут | 6.5 → 10 | [G06](../10_ProgressionGates.md#G06) |

## Проверка длительного лабораторного горизонта

Ведомость содержит 38 ветвей и 1039 работ. Сумма — 3 858 901 базовых минут, или 2 679.792361 слот-дня. При сразу доступных 6 слотах ×4 объём даёт нижнюю границу 111.658015 суток. Длиннейшая последовательная ветвь [LAB_INTERACTION](Levels/LAB_INTERACTION.md) даёт 114.75 суток при ×4. Обе оценки учитывают только работу; очередь, нехватка конкретных материалов и граф открытия могут увеличить срок.

Цель более десяти лет без платного пропуска сохраняется как обсуждаемый минимальный ориентир, но этим объёмом работ она не подтверждена. Нельзя закрывать дефицит одинаковым удлинением всех таймеров: это разрушит назначение дешёвой ранней лаборатории. Будущие содержательные исследования учитываются в сроке только после появления собственных эффектов, цен, встреч и проверок.

Первые 10–20 дней оцениваются отдельно: регулярные полезные покупки, получение новой оси и применение подготовленной сборки важнее числа кнопок. По результатам раннего опыта допускается расширить содержание либо обсудить меньший достигнутый горизонт. [Правила оценки горизонтов](../11_HorizonsAndReview.md).

## Предложения и исправления владельца

Этот раздел — место обсуждения. Запись владельца **не становится обязательным ТЗ автоматически**. Можно спорить с предлагаемой ценой, уровнем, сроком или механикой; решение принимается после проверки боевого эффекта, доступных ресурсов, влияния на другие ветви и ранний/поздний путь. До согласования значения JSON и таблиц считаются гипотезами. Правка подтверждается статусом «согласовано» и ссылкой на пересчёт; неоднозначный замысел остаётся на обсуждении.

| ID ветви / новое предложение | Что изменить или добавить | Почему / ожидаемый игровой результат | Предлагаемые числа: уровни, цена, время, эффект, доступ | Статус | Решение и ссылка на расчёт |
|---|---|---|---|---|---|
|  |  |  |  | На обсуждении |  |

Можно также писать свободным текстом ниже, например: «LAB_SLOTS 1 слишком дорог по серебру; хочу второй слот раньше, но не снимать необходимость R_GATE02». Такой комментарий запускает сравнение вариантов, а не немедленное изменение игры.
