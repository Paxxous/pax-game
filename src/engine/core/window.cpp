#include <SDL2/SDL.h>
#include <iostream>

#include "window.hpp"

engine::window::window(const char* title, int w, int h)
  : win(NULL), renderer(NULL), w_h(w), w_w(h)
{
  win = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w_w, w_h, SDL_WINDOW_SHOWN);
  if (win == NULL) {
    std::cout << "Error creating window! " << SDL_GetError() << "\n";
  }
}
