#include <SDL2/SDL.h>
#include <iostream>

#include "engine/engine.hpp"
#include "defs.hpp"

int main(int argc, char* argv[/* its' cool in here */]) {
  engine::init();

  engine::entity e(0.023, 213); // Yahoo! we got a pos system going :)
  std::cout << e.get_pos().x << " | " << e.get_pos().y << "\n";

  std::cout << MAIN_VERSION << "\n";

  engine::end();
  return 0;
}
