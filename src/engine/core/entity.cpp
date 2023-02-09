#include <iostream>

#include "entity.hpp"

#include "vector2.hpp"


/// Get entity pos, (returns vector2f struct)
Vector2 engine::entity::get_pos() {
  return pos;
}
