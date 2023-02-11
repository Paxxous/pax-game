#pragma once

// #ifdef __linux__
// #include <SDL2/SDL.h>
// #include <SDL2/SDL_mixer.h>
// #include <SDL2/SDL_image.h>
// #elif defined(_WIN32)
// #include <SDL.h>
// #include <SDL_mixer.h>
// #include <SDL_image.h>
// #endif

#include <iostream>

#include "core/entity.hpp"
#include "core/timestep.hpp"
#include "core/vector2.hpp"
#include "core/window.hpp"
#include "core/audio.hpp"

namespace engine {
  void init();
  void end();
};
