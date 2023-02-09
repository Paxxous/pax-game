#include <SDL2/SDL.h>
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
