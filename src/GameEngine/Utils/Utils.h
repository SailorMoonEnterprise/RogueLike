#ifndef UTILS
#define UTILS

#include <libtcod.hpp>
#include <vector>

using namespace std;

class Vector2 {
public:
  int x;
  int y;
  Vector2() = default;
  Vector2(int x, int y);
};

class Color {
  TCODColor color;

public:
  Color() = default;
  Color(int R, int G, int B);

  TCODColor get();
};

class Key {
  TCOD_key_t *key;

public:
  Key() = default;
  Key(TCOD_key_t *key);
  TCOD_key_t *getKey();
};

namespace KeyEvent {
const int EVENT_KEY_PRESSED = TCOD_EVENT_KEY_PRESS;
}

#endif
