#pragma once

#include <iostream>

#include "vector2.hpp"

// AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
namespace engine {
  class entity {
    public:
      Vector2 get_pos();

      entity(float pos_x, float pos_y) {
        // I'm not going through the trouble of putting this class into an initialization list... Time to create a todo list!
        pos.x = pos_x;
        pos.y = pos_y;
      }

      entity() {
        pos.x = 0;
        pos.y = 0;
      }

    private:
      Vector2 pos;
  };
};
