#include "Window.h"

Window::Window(int x, int y, int width, int height) {
  this->x = x;
  this->y = y;
  this->height = height;
  this->width = width;
}

void Window::addObject(GameObject gameObject) {
  this->window.push_back(gameObject);
}

void Window::render() {
  for (GameObject gameObject : this->window) {
    gameObject.render(); // TODO render from local position to global
  }
}

void WindowStack::addWindow(Window *window) {
  this->windowStack.push_back(window);
}

void WindowStack::render() {
  for (Window *window : windowStack) {
    window->render();
  }
}
