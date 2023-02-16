#pragma once

#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#include <SDL2/SDL_mixer.h>
#elif __linux__
#include <SDL2/SDL_mixer.h>
#elif defined(_WIN32)
#include <SDL_mixer.h>
#endif

namespace engine {
  class audio {
    public:
      audio();

      void playSound(Mix_Music* sound);
      void setVol(int level);

      Mix_Music* loadSound(const char* path);
    // private:
  };
}
