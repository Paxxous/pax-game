#pragma once

#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#include <SDL2/SDL.h>
#elif __linux__
#include <SDL2/SDL.h>
#elif defined(_WIN32)
#include <SDL.h>
#endif

namespace engine {
  class timestep {
    public:
      void calc_dt();

      double get_dt();

    private:
      double dt;
    
      Uint64 then = 0;
      Uint64 now = 0;
  };
}
