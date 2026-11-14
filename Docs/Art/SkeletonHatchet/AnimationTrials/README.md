# Пробы анимаций скелета

2026-09-02. Статус: **черновики для сравнения, не приняты в производство**. Утверждённый исходник и игровые ассеты не изменены.

В первой паре пользователь сообщил об остатке 12 ежедневных генераций и разрешил сделать пару проб. Выполнены два запроса PixelLab `animate_image`, по 1 генерации каждый, с исходным спрайтом 96 x 96 и шестью новыми кадрами. Счётчик API вырос с 65 до 67, платный баланс остался USD 0.00. Во второй паре, по запросу усилить атаку, вернуть её в стойку и добавить idle, потрачено ещё 3 генерации; счётчик вырос с 67 до 70. В последнем запросе на сегодня закреплены стопы и сделаны два направленных idle: ещё 4 генерации, счётчик 70 → 74. Ожидаемый остаток от названных пользователем 12 — 3, если не было других запросов; API отдельный ежедневный остаток не показывает. После этого генерация остановлена по просьбе пользователя.

## Просмотр

В GIF слева неподвижный утверждённый эталон, справа анимация. Для просмотра добавлены прежняя тень и однотонный фон; в исходных PNG кадров их нет. GIF может ограничивать палитру; оригинальные PNG и прозрачные листы сохранены без дополнительной квантизации. Увеличение — nearest-neighbor, без сглаживания.

| Проба | Анимация | Все кадры | Предварительная оценка |
| --- | --- | --- | --- |
| Спокойная ходьба v1 | [GIF 3x](walk-v1/walk-preview-3x.gif), [1x](walk-v1/walk-preview-1x.gif) | [Лист 2x](walk-v1/walk-contact-2x.png), [PNG-лист](walk-v1/walk-raw-sheet.png) | Новый цельный цикл без ручного зеркалирования конечностей. Шаги короткие и попеременные; это кандидат на оценку, а не утверждённая игровая анимация. |
| Бег | [GIF 3x](run-v1/run-preview-3x.gif), [1x](run-v1/run-preview-1x.gif) | [Лист 2x](run-v1/run-contact-2x.png), [PNG-лист](run-v1/run-raw-sheet.png) | Цикл замыкается; свободная рука снова уходит от тела, шаг требует доработки. |
| Боковой удар | [GIF 3x](attack-v1/attack-preview-3x.gif), [1x](attack-v1/attack-preview-1x.gif) | [Лист 2x](attack-v1/attack-contact-2x.png), [PNG-лист](attack-v1/attack-raw-sheet.png) | Взмах читается, но корпус слишком приседает, а топор проходит слишком низко; пока не годится как окончательный удар по башне. |
| Полный удар v2 | [GIF 3x](attack-v2/attack-preview-3x.gif), [1x](attack-v2/attack-preview-1x.gif) | [Лист 2x](attack-v2/attack-contact-2x.png), [PNG-лист](attack-v2/attack-raw-sheet.png) | Высокий замах над головой, удар и восстановление стойки. Модель добавила белый след взмаха; след и низкая конечная траектория ещё требуют художественной оценки. |
| Стойка idle v1 | [GIF 3x](idle-v1/idle-preview-3x.gif), [1x](idle-v1/idle-preview-1x.gif) | [Лист 2x](idle-v1/idle-contact-2x.png), [PNG-лист](idle-v1/idle-raw-sheet.png) | Замкнутый цикл с небольшим движением корпуса и руки с топором. Амплитуда головы около 3 пикселей, чуть больше запрошенных 1–2. |
| Стойка 3/4, стопы закреплены | [GIF 3x](idle-side-fixed-v2/idle-preview-3x.gif) | [Лист 2x](idle-side-fixed-v2/idle-contact-2x.png) | Исправляет подъём носков в idle v1; верхняя часть кадров сохранена. |
| Стойка вниз, стопы закреплены | [GIF 3x](idle-down-v1/idle-preview-3x.gif) | [Лист 2x](idle-down-v1/idle-contact-2x.png) | Фронтальный ракурс, возвращается в исходную позу. |
| Стойка вверх v1, стопы закреплены | [GIF 3x](idle-up-v1/idle-preview-3x.gif) | [Лист 2x](idle-up-v1/idle-contact-2x.png) | Отклонена пользователем: остаточный ракурс 3/4, вместо прямого вида со спины. |
| Стойка вверх v2, прямо со спины | [GIF 3x](idle-up-v2/idle-preview-3x.gif) | [Лист 2x](idle-up-v2/idle-contact-2x.png) | Центрированные затылок и позвоночник, без разворота; стопы закреплены. На художественную оценку. |

Последний набор вместе, слева направо **3/4 / вниз / вверх**: [анимация 3x](idle-set-v2/idle-directions-preview-3x.gif), [1x](idle-set-v2/idle-directions-preview-1x.gif), [опорные позы](idle-set-v2/idle-directions-poses-3x.png). Предыдущий набор сохранён в `idle-set/`.

В первой паре (`run-v1`, `attack-v1`) `frame-00.png` — возвращённый сервисом начальный кадр, `frame-01.png`...`frame-06.png` — шесть результатов. У бега последний кадр совпадает с первым; в GIF этот дубликат исключён, чтобы не удваивать паузу на стыке. Бег показывается по 100 мс на кадр. Первый удар — просмотр фаз по 100 мс с паузами 350 мс в начале и 500 мс в конце; это не настроенные игровые тайминги и не подтверждение нужного ускорения удара.

## Проверки

- Все 14 кадров первой пары — 96 x 96, прозрачный фон, без частичной альфы у тела; пиксели не касаются внешней границы холста.
- Покадровые листы осмотрены; GIF собраны и их количество кадров проверено через декодер (6 у бега, 7 у удара).
- У бега первый и последний кадры совпадают побайтно после декодирования в RGBA.
- Сервис изменил палитру даже у возвращаемого начального кадра: 107 видимых пикселей у бега и 98 у удара отличаются от эталона, включая одно отличие альфы. Это не пиксельно-точная копия входа, несмотря на описание API. Результаты не записывались поверх эталона. Подробности — в `run-qa.json` и `attack-qa.json`.
- Генерация не сохранила все ограничения позы. Следующая правка должна удержать локоть у рёбер при беге и поднять траекторию удара без глубокого приседания; не менять сам дизайн скелета.
- Play Mode, Unity импорт и игровые проверки не выполнялись: эти файлы находятся вне `Assets`, замены гоблина пользователь пока не просил.

## Происхождение

Вход обоих запросов: `../skeleton-hatchet-approved-96.png`, точная локальная копия утверждённого v11 без тени. SHA-256: `FDAD47309B54F14A52CAC52B3834BE93F4F7BF5DDDA4415C962E09DE3EB792D7`.

### Бег

- Job: `2e9e9f51-8b1d-48c4-a3f1-5b812ebc3427`.
- Seed: 143830. `frame_count: 6`, `no_background: true`.
- Первый и конечный входы — один утверждённый спрайт, для замыкания цикла.

Prompt:

Run in place through one complete repeating two-step cycle, facing right and slightly toward the viewer throughout. Alternate clear leg contacts and passing poses, modest knee lift and slight body bounce. Keep the empty elbow tucked near the ribs; the hand holding the upright hatchet moves only a little. Feet stay around the same ground anchor. End back at the starting pose for a seamless loop. Fixed low camera, no turning, no travel or zoom, no morphing, no ground or shadow. Preserve this exact skeleton, skull, bone proportions, hatchet and pixel-art palette.

### Боковой удар

- Job: `45c90bba-5251-455d-906a-a2196942dc9e`.
- Seed: 143831. `frame_count: 6`, `no_background: true`.
- Конечная поза не задана картинкой; в тексте запрошен контакт в конце, без возврата в стойку.

Prompt:

Perform ONE compact side attack to the right with the hatchet, starting from this exact idle pose. Briefly draw the weapon hand back and slightly up for anticipation, then accelerate the hatchet forward and down toward a target just to the right, with the fastest movement at the end. Last pose is the impact with the hatchet extended forward, NOT a return to idle. Keep feet planted at the same ground anchor and the empty arm tucked close to the body. Retain the low three-quarter camera facing right and slightly toward the viewer, fixed skull and bone proportions, same short wooden handle and iron head. No spin, jump, camera movement, scale change, extra axe, ground, shadow, glow or painted motion trails. Keep the whole weapon inside the canvas.

## Вторая пара: сильный замах, возврат и idle

Пользователь отверг слабый замах и потребовал возвращение атаки в исходную стойку, а также idle как у гоблина. Оба запроса используют утверждённый исходник, а не неудачные кадры первой атаки. В обоих запросах исходник также передан как конечная поза.

### Полный удар v2

- Job: `1b8b4a79-4482-4f20-9b92-89fc5c036cbb`; seed 143832; `frame_count: 8`; стоимость 2 генерации.
- Вход `attack-v2/input.png`: исходные 96 x 96 расширены прозрачными полями до 128 x 128, без масштабирования. Смещение исходника (16,24); побайтное совпадение исходной области проверено. Дополнительное место сверху позволяет топору подняться над черепом.
- Получено 9 кадров `frame-00.png`...`frame-08.png`: исходная поза и 8 результатов. Последний кадр совпадает с первым в декодированном RGBA, поэтому для GIF используется 8 кадров без повторного удержания дубликата.
- Проверены все кадры: замах проходит над головой и за плечом, затем видны удар и восстановление. Ноги остаются на общей нижней линии y=113; весь топор и добавленный моделью белый след помещаются в холст. След появился вопреки ограничению в запросе, оставлен только в пробе для оценки; не добавлялся кодом. Удар всё ещё заканчивается низко, поэтому полное соответствие целевой траектории не заявляется.
- В GIF удержание стойки 250 мс, остальных семи кадров по 90 мс. Движение между позами различается по амплитуде; игровые тайминги и событие контакта ещё не настраивались.

Prompt:

One POWERFUL OVERHEAD HATCHET CHOP, then recover completely to the initial idle pose. Full cycle: raise the weapon elbow HIGH, pull the hatchet far BACK ABOVE the shoulder and behind the skull, clearly showing a LARGE wind-up. Then whip the axe forward in a broad fast arc, accelerating sharply into a chest-height impact to the RIGHT, NOT at the ground. Follow through briefly, lift the hatchet back and settle into the EXACT starting stance. Keep both feet planted, torso nearly upright, empty elbow close to ribs. Keep the same low three-quarter view and small character size within this padded canvas. Use the free space above the skull for the wind-up; do not enlarge the skull, body or weapon. Same one-handed axe and grip throughout. No crouching, walking, spinning, ghost weapons, painted trails, shadows, ground or camera movement.

### Idle v1

- Job: `af97e608-edd7-493e-8622-57c632633afd`; seed 143833; `frame_count: 6`; стоимость 1 генерация.
- Исходник 96 x 96, без изменения холста. Получено 7 кадров, последний совпадает с первым; в GIF 6 кадров по 140 мс, один цикл 0,84 с.
- Проверены все кадры: нет шага или атаки, небольшое движение корпуса/головы и колебание топора. Голова смещается по вертикали примерно на 3 пикселя; отдельные пиксели стоп и свободной руки тоже меняются, поэтому абсолютная неподвижность конечностей не заявляется.

Prompt:

A subtle standing idle loop, returning smoothly to the EXACT starting pose. Both feet stay planted and completely stationary. Gently settle and raise the ribcage and skull by only 1-2 pixels, a tiny relaxed shift of weight, no stretching of the bones. Keep the empty arm tucked close beside the ribs and hip in every frame. The weapon hand keeps the same upright hatchet with only a tiny natural sway. Keep the same low three-quarter view, gaze, skull shape, body proportions, size and palette. Do not walk, lift feet, attack, wave, turn, bounce strongly, open the jaw or change expression. No ground, shadow, glow, extra props or camera movement.

### Проверка второй пары

Все 16 кадров: прозрачность без частичной альфы, никаких пикселей на внешней границе холста. Первые и последние кадры каждого набора совпадают после декодирования. Сервис снова меняет палитру возвращаемого исходника (107 отличающихся видимых пикселей, из них одно отличие альфы); утверждённый мастер не перезаписан, его SHA-256 сохранён. GIF проверены декодером: 8 кадров атаки и 6 кадров idle. PNG-листы просмотрены покадрово. Конфигурация предпросмотра не меняет исходные PNG. Unity и игровая логика не затронуты.

## Завершение на сегодня: неподвижные стопы и направленные idle

Пользователь попросил закрепить стопы в боковом idle, сделать idle вверх/вниз и на этом остановиться. Бег и атаки больше не изменялись; все старые пробы сохранены.

### Точная фиксация стоп

Для каждого направления пиксели строк y=76..95 (координаты PNG от верхнего края, с нуля), включая стопы, нижние части щиколоток и прозрачность вокруг, скопированы из первого кадра этого же направления во все остальные. Новая форма ног не рисовалась. Строки y=0..75 побайтно сохранены от сгенерированных кадров. Это локальная правка существующих пикселей, без новых генераций.

`foot-lock-qa.json` в каждой итоговой папке подтверждает для всех семи кадров: 0 отличий закреплённой области от опорного кадра, 0 изменений верхней части тела при исправлении. Также проверено совпадение закреплённой нижней области после декодирования обоих общих GIF, а не только в исходных PNG. Последний кадр совпадает с первым; в GIF шесть кадров без дубликата по 140 мс, цикл 0,84 с.

Просмотрены все покадровые листы: фронтальный скелет сохраняет лицо к зрителю, задний — затылок/спину; поднятых носков больше нет, стыки у щиколоток без явного разрыва. Все кадры 96 x 96, без частичной альфы и касания внешней границы. Высота/форма персонажа между новыми ракурсами немного различаются от генерации; точную подгонку pivot/PPU перед игровым импортом ещё предстоит проверить. Новые ракурсы не объявлены утверждёнными пользователем.

Папки `idle-down-v1/raw` и `idle-up-v1/raw` сохраняют неизменённые результаты PixelLab и опорные позы. В `idle-side-fixed-v2` источник `input.png` — возвращённый сервисом начальный кадр старого idle; глобальный утверждённый мастер остаётся отдельно и не менялся. Поле `matchesApproved` в техническом отчёте предпросмотра означает совпадение с локальным `input.png` данной пробы, а не утверждение нового ракурса пользователем.

### Запросы PixelLab

| Результат | Инструмент | Job | Seed | Стоимость |
| --- | --- | --- | ---: | ---: |
| Опорная поза вниз | `edit_image_pixen` | `3901718c-255f-402c-bbfe-1bdc1866a47b` | 143834 | 1 |
| Опорная поза вверх | `edit_image_pixen` | `822bbcad-0faa-4258-afac-8c82d3460b36` | 143835 | 1 |
| Idle вниз | `animate_image`, 6 новых кадров | `70587cfd-d5ef-41a9-b663-2fa3674d7c8a` | 143836 | 1 |
| Idle вверх | `animate_image`, 6 новых кадров | `ca889efd-d67e-4c9a-b3d1-610d29488b4a` | 143837 | 1 |

Обе позы созданы из утверждённого бокового мастера без тени. В каждую анимацию передана соответствующая новая поза и как начало, и как конец. `no_background: true`, 96 x 96. Тень в GIF — прежний слой гоблина, не результат повторной генерации.

Поза вниз:

Rotate this SAME skeleton to face straight TOWARD THE VIEWER (south/down-screen idle). Show both eye sockets and the front of ribs and pelvis. Keep the camera low, not overhead. Bare bones, same skull proportions, ivory palette, navy outline, same 86px height and ground baseline. Same small hatchet in the same hand, now on screen RIGHT; free arm close to ribs. Both feet flat, relaxed stance. No clothes, shadow, floor, glow or new props. Transparent 96x96.

Поза вверх:

Rotate this SAME skeleton to face directly AWAY from the viewer (north/up-screen idle). Show the BACK of the skull with NO face, spine and rear ribcage/pelvis. Keep the camera low, not overhead. Bare bones, same skull proportions, ivory palette, navy outline, same 86px height and ground baseline. Same hatchet in the same anatomical hand, on screen LEFT from behind; empty arm close to ribs. Both feet flat. No clothes, shadow, floor, glow or new props. Transparent 96x96.

Idle вниз:

Subtle standing idle loop facing directly toward the viewer throughout. Keep the entire lower body, knees, ankles, heels and toes planted and motionless. Animate only above the pelvis: tiny relaxed ribcage and skull sway of 1-2 pixels, slight matching shoulder and hatchet motion. The empty arm stays close to the torso. Return smoothly to this exact initial pose. Keep the front view locked, same bone anatomy, head size, short hatchet, colors and pixel scale. No lifting toes, stepping, bouncing, turning, jaw movement, attack, ground, shadow or camera motion.

Idle вверх:

Subtle standing idle loop facing directly AWAY from the viewer throughout. Show only the back of the skull, spine and rear ribs; NEVER turn to show a face. Keep the lower body, knees, ankles, heels and feet planted and motionless. Animate only above the pelvis: tiny relaxed skull and ribcage sway of 1-2 pixels, slight matching shoulder and hatchet motion. Empty arm stays close to the torso. Return smoothly to this exact initial rear pose. Preserve bone anatomy, head size, short hatchet, colors and pixel scale. No stepping, toe lifting, bounce, turns, attack, shadow, ground or camera motion.

Итог сохранён вне `Assets`; Unity, сцены, префабы, сохранения игрока и пользовательские изменения не затронуты. Новые генерации или автоматические продолжения после этого набора не запланированы.

## Поправка направления вверх: строго со спины

Дополнительный запрос пользователя 2026-09-02: убрать 3/4 у направления вверх, направить персонажа строго по центральной оси. Пересделан только `idle-up`; остальные направления, бег, атаки и утверждённый боковой мастер не менялись.

- Первая попытка изменить прежнюю заднюю позу сохранила поворот головы и таза: `edit_image_pixen`, job `b0235291-fdbf-491d-bcc8-bc113afcea5c`, seed 143838. Отклонённый результат сохранён в `idle-up-v2/raw/rejected-three-quarter-pose.png`.
- Успешная опорная поза получена из ровной фронтальной `idle-down-v1/input.png`: `edit_image_pixen`, job `59006b01-2a6e-44d8-acd8-0af0d2f1c7b0`, seed 143840. Затылок, позвоночник и таз по одной оси, плечи без разворота, топор в той же анатомической руке (слева на экране).
- Новый idle: `animate_image`, job `7eeb528e-0859-41ea-8aa2-167f2e284cda`, seed 143841, 96 x 96, 6 новых кадров; опорная поза передана как первый и последний кадр. Полные промпты и параметры — в `idle-up-v2/raw/generation.json`.
- Всего на поправку потрачено **3 генерации** (две позы и один цикл), не первоначально оценённые две. Счётчик API 74 → 77, платный баланс USD 0.00. Это исчерпывает расчётный остаток от названных пользователем 12 генераций; отдельный ежедневный остаток API не сообщает.

Осмотрены все семь кадров. Вид со спины сохраняется, амплитуда головы по вертикали около двух пикселей, первый и последний кадры совпадают в RGBA. На этот раз возвращённый начальный кадр также точно совпадает с входной задней позой. `matchesApproved` в QA означает сравнение с локальным `input.png`, а не принятие пользователем нового ракурса.

Стопы закреплены копированием исходных пикселей прямоугольника x=24..65, y=76..95 из первого кадра. За пределами этой области сгенерированные пиксели не менялись; отдельная область нужна, чтобы не захватить свисающую свободную кисть. Все семь PNG имеют жёсткую альфу без полупрозрачной каймы, не касаются границ холста. В обоих общих GIF после декодирования подтверждена неподвижность стоп всех трёх направлений: шесть кадров по 140 мс, цикл 0,84 с.

Исходные результаты PixelLab сохранены в `idle-up-v2/raw/`; готовые кадры, листы, GIF и QA — рядом. Утверждённый мастер сохранил SHA-256 `FDAD47309B54F14A52CAC52B3834BE93F4F7BF5DDDA4415C962E09DE3EB792D7`. Это предпросмотр вне `Assets`, без импорта в Unity или изменения игры.

## Остальные клипы для интеграционного кандидата

2026-09-06 по запросу пользователя подготовлены недостающие клипы текущего контроллера: `Run`, `Hit`, `Hit_down` и `Hit_up`. Комплект `../IntegrationCandidate-v2/` впоследствии отклонён: состояние locomotion ошибочно сделано бегом, а ручное зеркалирование ног разорвало связь ног с тазом. v1 и v2 сохранены только как история. Смерть и реакция на попадание не генерировались: это отдельные эффекты вне текущего `Basic Enemy.controller`.

- `run-v2`: отклонён. Job `fe27ef94-dd7b-4e60-8e9b-d326f27af2d4` перенёс хромоту на левую ногу после того, как первая проба `e8c8c24c-b290-4a7e-8952-643a2eb5dd94` хромала на правую.
- `run-v3`: отклонён. Контактная поза — job `0acd4eed-2409-4409-8ae8-bc347b21d242`; переход — job `c84339d7-9619-4103-b166-1f85201325c4`. Ручное зеркалирование только ног дало визуально отсоединённые от таза конечности; сам темп также читается как бег вместо требуемой ходьбы. Этот метод больше не использовать.
- `walk-v1`: новый кандидат на оценку, job `fd0bb70c-2e49-442e-aaab-3fafe0fcdff5`, seed `143854`, 8 воспроизводимых кадров, 96×96. Весь персонаж генерировался целиком как спокойная ходьба; отдельные части тела не отражались и не переставлялись. Первый и контрольный последний кадры заменены точным утверждённым мастер-спрайтом, а сырые ответы PixelLab сохранены в `walk-v1/raw/`.
- `hit-side-v3`: job `e2011caf-025c-4efa-a1c6-1c157b4f7ef8`, seed 143843, 8 воспроизводимых кадров, 128×128.
- `hit-down-v1`: выбран повторный job `8445c306-79ac-41ec-9a45-5e00e2fd0974`, seed 143847, 8 воспроизводимых кадров, 128×128. Первый job `19d55b86-3236-47f4-aac2-957917692818` отклонён: топор исчезал внутри дуги в двух фазах.
- `hit-up-v1`: job `e434cba0-14ae-430a-844c-11828d04606d`, seed 143845, 8 воспроизводимых кадров, 128×128.

Во всех циклах контрольный последний дубль исключается при воспроизведении. У PixelLab было потрачено 16 генераций с учётом отклонённых вариантов и опорных поз бега. Все одноцветные дуги, добавленные моделью вопреки промптам, удалены точным сравнением RGBA; мелкие отдельные остатки удалены как компоненты не более 12 пикселей. Исходные кадры лежат в `raw`, отчёты очистки и покадровой проверки — рядом с выбранными кадрами. Полные параметры и промпты зафиксированы в `remaining-generation.json`.

Проверено: PNG имеют прозрачный фон без частичной альфы, не касаются границ холста, первый и последний кадры каждого результата совпадают. Новый `walk-v1` просмотрен покадрово: таз и ноги остаются связанными, короткие шаги чередуются, отдельного зеркалирования конечностей нет. Масштаб и отступы между 96×96 и 128×128 намеренно не подгонялись до просмотра в игре. Unity и файлы в `Assets` не менялись.
