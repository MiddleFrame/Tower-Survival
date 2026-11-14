const MAGE_REVIEW = {
  "cellSize": 128,
  "clips": [
    {
      "name": "idle",
      "label": "Ожидание",
      "loop": true,
      "frames": [
        {
          "src": "Frames/idle-01.png",
          "ms": 180,
          "phase": "balanced"
        },
        {
          "src": "Frames/idle-02.png",
          "ms": 160,
          "phase": "settle"
        },
        {
          "src": "Frames/idle-03.png",
          "ms": 160,
          "phase": "weight forward"
        },
        {
          "src": "Frames/idle-04.png",
          "ms": 160,
          "phase": "rise forward"
        },
        {
          "src": "Frames/idle-05.png",
          "ms": 180,
          "phase": "balanced"
        },
        {
          "src": "Frames/idle-06.png",
          "ms": 160,
          "phase": "weight back"
        },
        {
          "src": "Frames/idle-07.png",
          "ms": 160,
          "phase": "settle back"
        }
      ]
    },
    {
      "name": "cast-hand-enter",
      "label": "Вход в каст",
      "loop": false,
      "frames": [
        {
          "src": "Frames/cast-hand-enter-01.png",
          "ms": 120,
          "phase": "ready"
        },
        {
          "src": "Frames/cast-hand-enter-02.png",
          "ms": 90,
          "phase": "anticipation"
        },
        {
          "src": "Frames/cast-hand-enter-03.png",
          "ms": 90,
          "phase": "step lift"
        },
        {
          "src": "Frames/cast-hand-enter-04.png",
          "ms": 90,
          "phase": "arm rising"
        },
        {
          "src": "Frames/cast-hand-enter-05.png",
          "ms": 90,
          "phase": "palm opening"
        },
        {
          "src": "Frames/cast-hand-enter-06.png",
          "ms": 120,
          "phase": "hold ready"
        }
      ]
    },
    {
      "name": "cast-hand-hold",
      "label": "Удержание",
      "loop": true,
      "frames": [
        {
          "src": "Frames/cast-hand-hold-01.png",
          "ms": 140,
          "phase": "hold settle"
        },
        {
          "src": "Frames/cast-hand-hold-02.png",
          "ms": 120,
          "phase": "hold forward"
        },
        {
          "src": "Frames/cast-hand-hold-03.png",
          "ms": 140,
          "phase": "hold forward settle"
        },
        {
          "src": "Frames/cast-hand-hold-04.png",
          "ms": 140,
          "phase": "hold centre"
        },
        {
          "src": "Frames/cast-hand-hold-05.png",
          "ms": 120,
          "phase": "hold ease"
        },
        {
          "src": "Frames/cast-hand-hold-06.png",
          "ms": 140,
          "phase": "hold back"
        },
        {
          "src": "Frames/cast-hand-hold-07.png",
          "ms": 120,
          "phase": "hold rising"
        }
      ]
    },
    {
      "name": "cast-hand-release",
      "label": "Выпуск из ладони",
      "loop": false,
      "frames": [
        {
          "src": "Frames/cast-hand-release-01.png",
          "ms": 80,
          "phase": "held"
        },
        {
          "src": "Frames/cast-hand-release-02.png",
          "ms": 80,
          "phase": "release preparation"
        },
        {
          "src": "Frames/cast-hand-release-03.png",
          "ms": 70,
          "phase": "palm impulse"
        },
        {
          "src": "Frames/cast-hand-release-04.png",
          "ms": 100,
          "phase": "followthrough"
        },
        {
          "src": "Frames/cast-hand-release-05.png",
          "ms": 120,
          "phase": "held recovery"
        }
      ]
    },
    {
      "name": "cast-hand-exit",
      "label": "Возврат в стойку",
      "loop": false,
      "frames": [
        {
          "src": "Frames/cast-hand-exit-01.png",
          "ms": 100,
          "phase": "held"
        },
        {
          "src": "Frames/cast-hand-exit-02.png",
          "ms": 100,
          "phase": "relax palm"
        },
        {
          "src": "Frames/cast-hand-exit-03.png",
          "ms": 100,
          "phase": "lower hand"
        },
        {
          "src": "Frames/cast-hand-exit-04.png",
          "ms": 100,
          "phase": "recover foot"
        },
        {
          "src": "Frames/cast-hand-exit-05.png",
          "ms": 120,
          "phase": "relax"
        },
        {
          "src": "Frames/cast-hand-exit-06.png",
          "ms": 160,
          "phase": "ready"
        }
      ]
    }
  ],
  "demo": [
    {
      "src": "Frames/cast-hand-enter-01.png",
      "ms": 120,
      "phase": "Вход в каст",
      "clipFrame": 1
    },
    {
      "src": "Frames/cast-hand-enter-02.png",
      "ms": 90,
      "phase": "Вход в каст",
      "clipFrame": 2
    },
    {
      "src": "Frames/cast-hand-enter-03.png",
      "ms": 90,
      "phase": "Вход в каст",
      "clipFrame": 3
    },
    {
      "src": "Frames/cast-hand-enter-04.png",
      "ms": 90,
      "phase": "Вход в каст",
      "clipFrame": 4
    },
    {
      "src": "Frames/cast-hand-enter-05.png",
      "ms": 90,
      "phase": "Вход в каст",
      "clipFrame": 5
    },
    {
      "src": "Frames/cast-hand-enter-06.png",
      "ms": 120,
      "phase": "Вход в каст",
      "clipFrame": 6
    },
    {
      "src": "Frames/cast-hand-hold-01.png",
      "ms": 140,
      "phase": "Удержание",
      "clipFrame": 1
    },
    {
      "src": "Frames/cast-hand-hold-02.png",
      "ms": 120,
      "phase": "Удержание",
      "clipFrame": 2
    },
    {
      "src": "Frames/cast-hand-hold-03.png",
      "ms": 140,
      "phase": "Удержание",
      "clipFrame": 3
    },
    {
      "src": "Frames/cast-hand-hold-04.png",
      "ms": 140,
      "phase": "Удержание",
      "clipFrame": 4
    },
    {
      "src": "Frames/cast-hand-hold-05.png",
      "ms": 120,
      "phase": "Удержание",
      "clipFrame": 5
    },
    {
      "src": "Frames/cast-hand-hold-06.png",
      "ms": 140,
      "phase": "Удержание",
      "clipFrame": 6
    },
    {
      "src": "Frames/cast-hand-hold-07.png",
      "ms": 120,
      "phase": "Удержание",
      "clipFrame": 7
    },
    {
      "src": "Frames/cast-hand-hold-01.png",
      "ms": 140,
      "phase": "Удержание",
      "clipFrame": 1
    },
    {
      "src": "Frames/cast-hand-hold-02.png",
      "ms": 120,
      "phase": "Удержание",
      "clipFrame": 2
    },
    {
      "src": "Frames/cast-hand-hold-03.png",
      "ms": 140,
      "phase": "Удержание",
      "clipFrame": 3
    },
    {
      "src": "Frames/cast-hand-hold-04.png",
      "ms": 140,
      "phase": "Удержание",
      "clipFrame": 4
    },
    {
      "src": "Frames/cast-hand-hold-05.png",
      "ms": 120,
      "phase": "Удержание",
      "clipFrame": 5
    },
    {
      "src": "Frames/cast-hand-hold-06.png",
      "ms": 140,
      "phase": "Удержание",
      "clipFrame": 6
    },
    {
      "src": "Frames/cast-hand-hold-07.png",
      "ms": 120,
      "phase": "Удержание",
      "clipFrame": 7
    },
    {
      "src": "Frames/cast-hand-release-01.png",
      "ms": 80,
      "phase": "Выпуск из ладони",
      "clipFrame": 1
    },
    {
      "src": "Frames/cast-hand-release-02.png",
      "ms": 80,
      "phase": "Выпуск из ладони",
      "clipFrame": 2
    },
    {
      "src": "Frames/cast-hand-release-03.png",
      "ms": 70,
      "phase": "Выпуск из ладони",
      "clipFrame": 3
    },
    {
      "src": "Frames/cast-hand-release-04.png",
      "ms": 100,
      "phase": "Выпуск из ладони",
      "clipFrame": 4
    },
    {
      "src": "Frames/cast-hand-release-05.png",
      "ms": 120,
      "phase": "Выпуск из ладони",
      "clipFrame": 5
    },
    {
      "src": "Frames/cast-hand-exit-02.png",
      "ms": 100,
      "phase": "Возврат в стойку",
      "clipFrame": 2
    },
    {
      "src": "Frames/cast-hand-exit-03.png",
      "ms": 100,
      "phase": "Возврат в стойку",
      "clipFrame": 3
    },
    {
      "src": "Frames/cast-hand-exit-04.png",
      "ms": 100,
      "phase": "Возврат в стойку",
      "clipFrame": 4
    },
    {
      "src": "Frames/cast-hand-exit-05.png",
      "ms": 120,
      "phase": "Возврат в стойку",
      "clipFrame": 5
    },
    {
      "src": "Frames/cast-hand-exit-06.png",
      "ms": 160,
      "phase": "Возврат в стойку",
      "clipFrame": 6
    }
  ]
};
