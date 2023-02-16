#pragma once

// OH MY GOD THIS IS SO BLOATED
#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#elif __linux__
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#elif defined(_WIN32)
#include <SDL.h>
#include <SDL_image.h>
#endif

#include "entity.hpp"

namespace engine {
  class window {
    public:
      window(const char* title, int w, int h);

      void render(entity entity);
      void renderClear();
      void renderShow();

      SDL_Texture* loadImage(const char* path);
    private:
      SDL_Window* win;
      SDL_Renderer* renderer;

      int w_h, w_w;
  };
}
