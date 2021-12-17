#include "Render.h"

void Render::createConsole(int width, int height, const char *title,
                           bool fullscreen) {
  TCODConsole::initRoot(width, height, title, fullscreen);
}
bool Render::isWindowClosed() { return TCODConsole::isWindowClosed(); }

void Render::clearConsole() { TCODConsole::root->clear(); }
void Render::updateConsole() { TCODConsole::flush(); }
void Render::checkForEvent(int event, Key *key) {
  TCODSystem::checkForEvent(event, key->getKey(), NULL);
}
void Render::putChar(int x, int y, char c) {
  TCODConsole::root->putChar(x, y, c);
}

void Render::setCharBackground(int x, int y, Color *color) {
  TCODConsole::root->setCharBackground(x, y, color->get());
}
