#ifdef __linux__
#include <SDL2/SDL.h>
#elif defined(_WIN32)
#include <SDL.h>
#endif
#include <iostream>

#include "window.hpp"

// This a pretty great constructor.
engine::window::window(const char* title, int w, int h)
  : win(NULL), renderer(NULL), w_h(w), w_w(h)
{
  win = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w_w, w_h, SDL_WINDOW_SHOWN);
  if (win == NULL) {
    std::cout << "Error creating window!\n" << SDL_GetError() << "\n";
  }

  renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
  if (renderer == NULL) {
    std::cout << "Error initializing renderer!\n" << SDL_GetError() << "\n";
  }
}
