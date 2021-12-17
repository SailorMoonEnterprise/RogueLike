#include "Utils.h"

Vector2::Vector2(int x, int y) {
  this->x = x;
  this->y = y;
}

Color::Color(int R, int G, int B) { this->color = TCODColor(R, G, B); }

TCODColor Color::get() { return this->color; }

Key::Key(TCOD_key_t *key) { this->key = key; }
TCOD_key_t *Key::getKey() { return this->key; }
