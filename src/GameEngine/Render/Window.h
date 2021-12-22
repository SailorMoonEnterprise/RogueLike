#ifndef WINDOW
#define WINDOW

#include "../GameObject/GameObject.h"
#include <libtcod.hpp>
#include <vector>

class Window {
public:
  int x;
  int y;
  int height;
  int width;
  vector<GameObject> window;

  Window(int x, int y, int height, int width);

  void addObject(GameObject gameObject);
  void render(); // TODO only WindowStack can access
};

class WindowStack {
public:
  vector<Window *> windowStack;

  void addWindow(Window *window);
  void render();
};

#endif
