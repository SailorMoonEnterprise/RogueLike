#include "./GameEngine/GameObject/GameObject.h"
#include "./GameEngine/Render/Render.h"
#include "./GameEngine/Render/Window.h"

#include <libtcod.hpp>

int main() {
  WindowStack *windowStack = new WindowStack();
  Window sky(0, 0, 0, 0);
  Window moon(0, 0, 0, 0);
  windowStack->addWindow(&sky);
  windowStack->addWindow(&moon);
  vector<GameObject *> field;
  Render::createConsole(60, 40, "RogueLike",
                        false); // TODO FIXME maybe string???
  for (float x = 0; x < 60; x += 1) {
    for (float y = 0; y < 40; y += 1) {
      if ((x - 40) * (x - 40) + (y - 25) * (y - 25) <= 20) {
        Vector2 *pos = new Vector2(x, y);
        Color *color = new Color(150, 150, 150);
        GameObject *moonObj = new GameObject(pos, '0', color);
        moon.addObject(*moonObj);
      }

      Vector2 *pos = new Vector2(x, y);
      Color *color = new Color(15, 25, 55);
      GameObject *block = new GameObject(pos, '.', color);
      sky.addObject(*block);
    }
  }
  printf("Field Created!\n");
  while (!Render::isWindowClosed()) {
    // Key key;
    TCOD_key_t key;
    // Render::checkForEvent(KeyEvent::EVENT_KEY_PRESSED, &key);

    Render::clearConsole();

    windowStack->render();
    Render::updateConsole();
    TCODSystem::waitForEvent(TCOD_EVENT_KEY_PRESS, &key, NULL, false);
  }
  return 0;
}
