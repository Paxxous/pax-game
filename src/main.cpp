#include <iostream>

#include "engine/engine.hpp"
#include "defs.hpp"

int main(int argc, char* argv[/* its' cool in here */]) {
  engine::init();

  // Initializing audio
  engine::audio a;
  Mix_Music* jazz = a.loadSound("res/sfx/music/hipjazz.ogg");
  a.playSound(jazz);
  a.setVol(20);

  // Create a window
  engine::window win("win", 800, 800);

  SDL_Texture* tex = win.loadImage("res/gfx/png/img.png");
  engine::entity ent(10, 10, tex);

  SDL_Event e;
  bool quit = false;

  while (!quit) {
    while (SDL_PollEvent(&e)) {
      if (e.type == SDL_QUIT) {
        quit = true;
      }
    }
    win.renderClear();

    win.render(ent);

    win.renderShow();
  }

  engine::end();
  return 0;
}
