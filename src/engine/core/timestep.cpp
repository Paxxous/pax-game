// Cross playform?? :0
#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#include <SDL2/SDL.h>
#elif __linux__
#include <SDL2/SDL.h>
#elif defined(_WIN32)
#include <SDL.h>
#endif

#include <iostream>

#include "timestep.hpp"

void engine::timestep::calc_dt() {
  // I need to understand how this works soon.
  now = SDL_GetPerformanceCounter();
  dt = (now - then) * 1000.0f
    / (double)SDL_GetPerformanceFrequency();

  then = now;
}

double engine::timestep::get_dt() {
  return dt;
}
