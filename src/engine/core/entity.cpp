#include <iostream>

#include "vector2.hpp"

#include "entity.hpp"


/// Get entity pos, (returns vector2f struct)
Vector2 engine::entity::getPos() {
  return pos;
}

// SDL_Texture* getTexture();
SDL_Texture* engine::entity::getTexture() {
  return texture;
}

