set(ENGINE_SOURCE_FILES 
  "engine.cpp"
  "engine.hpp"

  "core/entity.cpp"
  "core/entity.hpp"

  "core/vector2.hpp"

  "core/timestep.hpp"
  "core/timestep.cpp"

  "core/window.cpp"
  "core/window.hpp"
) # HAHAHAH FUCK YOU CMAKE 🖕🖕🖕🖕🖕🖕🖕

add_library(engine STATIC ${ENGINE_SOURCE_FILES})

target_link_libraries(game PRIVATE engine)
