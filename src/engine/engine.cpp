#include <SDL2/SDL.h>
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
