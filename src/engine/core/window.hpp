#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

namespace engine {
  class window {
    public:
      window(const char* title, int w, int h);
    private:
      SDL_Window* win;
      SDL_Renderer* renderer;

      int w_h, w_w;
  };
}
