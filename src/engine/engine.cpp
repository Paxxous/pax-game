#ifdef __linux__
#include <SDL2/SDL.h>
#elif defined(_WIN32)
#include <SDL.h>
#endif
#include <iostream>

#include "engine.hpp"

void engine::init() {
  // Some basic error checking.
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    std::cout << "There's been an error initializing SDL2:\n" << SDL_GetError() << "\n";
  }
}

void engine::end() {
  SDL_Quit();
}
