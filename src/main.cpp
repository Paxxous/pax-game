#include <iostream>

#include "engine/engine.hpp"
#include "defs.hpp"

int main(int argc, char* argv[/* its' cool in here */]) {
  engine::init();

  engine::end();
  return 0;
}
