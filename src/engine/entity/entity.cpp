#include <iostream>

#include "entity.hpp"

#include "../dat_structs/vector2.hpp"


/// Get entity pos, (returns vector2f struct)
Vector2 engine::entity::get_pos() {
  return pos;
}
