#pragma once

#ifdef __linux__
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#elif defined(_WIN32)
#include <SDL.h>
#include <SDL_image.h>
#endif

namespace engine {
  class window {
    public:
      window(const char* title, int w, int h);

      void render();

      SDL_Texture* loadTexture(const char* path);
    private:
      SDL_Window* win;
      SDL_Renderer* renderer;

      int w_h, w_w;
  };
}
