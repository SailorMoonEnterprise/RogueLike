#ifndef GAMEOBJECT
#define GAMEOBJECT

#include "../Render/Render.h"
#include "../Utils/Utils.h"
#include <libtcod.hpp>
class GameObject {

  Vector2 *position = new Vector2();
  Color *color = new Color();
  char c;

public:
  GameObject(Vector2 *position, char c, Color *color);
  Vector2 *getPosition();
  Color *getColor();
  char getChar();
  void render();
};

#endif
