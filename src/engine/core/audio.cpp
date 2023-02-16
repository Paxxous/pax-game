#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#include <SDL2/SDL_mixer.h>
#elif __linux__
#include <SDL2/SDL_mixer.h>
#elif defined(_WIN32)
#include <SDL_mixer.h>
#endif

#include <iostream>

#include "audio.hpp"

engine::audio::audio() {
  if (Mix_OpenAudio(22050, MIX_DEFAULT_FORMAT, 2, 4096) < 0) {
    std::cout << "There was an error opening your audio device " << SDL_GetError() << "\n";
  }
}

Mix_Music* engine::audio::loadSound(const char* path) {
  Mix_Music* l_sound = Mix_LoadMUS(path);
  if (l_sound == NULL) {
    std::cout << "Error loading music owah!\n" << SDL_GetError() << "\n";
  }

  return l_sound;
}

void engine::audio::playSound(Mix_Music* sound) {
  // std::cout << "I'm supposed to play something for you...\n";

  Mix_PlayMusic(sound, -1);
}

void engine::audio::setVol(int level) {
  Mix_VolumeMusic(level);
}
