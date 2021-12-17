#ifndef RENDER
#define RENDER

#include "../Utils/Utils.h"
#include <libtcod.hpp>

namespace Render {
void createConsole(int width, int height, const char *title, bool fullscreen);

bool isWindowClosed();
void clearConsole();
void updateConsole();
void checkForEvent(int event, Key *key); // TODO mouse
void putChar(int x, int y, char c);
void setCharBackground(int x, int y, Color *color);
} // namespace Render

#endif
