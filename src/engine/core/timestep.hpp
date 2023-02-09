#pragma once

#include <SDL2/SDL.h>

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
