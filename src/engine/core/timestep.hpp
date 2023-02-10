#pragma once

#ifdef __linux__
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
