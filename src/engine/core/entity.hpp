#pragma once

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

#include <iostream>

#include "vector2.hpp"

// AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
namespace engine {
  class entity {
    public:
      entity(float pos_x, float pos_y, SDL_Texture* entity_texture)
        : texture(entity_texture)
      {
        // I'm not going through the trouble of putting this class into an initialization list... Time to create a todo list!
        pos.x = pos_x;
        pos.y = pos_y;
      }

      entity(SDL_Texture* entity_texture)
        : texture(entity_texture)
      {
        pos.x = 0;
        pos.y = 0;
      }

      Vector2 getPos();
      SDL_Texture* getTexture();

    private:
      Vector2 pos;
      SDL_Texture* texture;
  };
};
