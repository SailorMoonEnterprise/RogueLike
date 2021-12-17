#include "GameObject.h"

GameObject::GameObject(Vector2 *position, char c, Color *color) {
  printf("Object created\n");
  this->position = position;
  this->c = c;
  this->color = color;
}

Vector2 *GameObject::getPosition() { return this->position; }

Color *GameObject::getColor() { return this->color; }

char GameObject::getChar() { return this->c; }

void GameObject::render() {
  Render::putChar(this->position->x, this->position->y, this->c);
  Render::setCharBackground(this->position->x, this->position->y, this->color);
}
