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

#include "window.hpp"

// This a pretty great constructor.
engine::window::window(const char* title, int w, int h)
  : win(NULL), renderer(NULL), w_h(w), w_w(h)
{
  win = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w_w, w_h, SDL_WINDOW_SHOWN);
  if (win == NULL) {
    std::cout << "Error creating window!\n" << SDL_GetError() << "\n";
  }

  renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (renderer == NULL) {
    std::cout << "Error initializing renderer!\n" << SDL_GetError() << "\n";
  }
}

void engine::window::renderClear() {
  SDL_RenderClear(renderer); // Clear screen
  // SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0); // Color screen
}

void engine::window::renderShow() {
  SDL_RenderPresent(renderer); // Present screen
}

void engine::window::render(entity entity) {
  // I swea r I know what this means but the png I'm loading is high quality and I though that it'd be funny if I loaded it to stretch the screen. That's why there's nulls inside of the rendercopy funuction mb mb mb.

  // SDL_Rect src; // source structure
  // src.x = entity.getPos().x;
  // src.y = entity.getPos().y;
  // src.w = 32;
  // src.h = 32;

  // SDL_Rect dst; // destination structure
  // dst.x = 400;
  // dst.y = 200;
  // dst.w = 32;
  // dst.h = 32;

  SDL_RenderCopy(renderer, entity.getTexture(), /* &src */NULL, NULL);
}

SDL_Texture* engine::window::loadImage(const char* path) {
  SDL_Texture* tex = IMG_LoadTexture(renderer, path);
  if (tex == NULL) {
    std::cout << "Error loading texture:\n" << SDL_GetError() << "\n";
  }

  return tex;
}
