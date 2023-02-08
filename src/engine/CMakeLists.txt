set(ENGINE_SOURCE_FILES 
  "engine.cpp"
  "engine.hpp"

  "entity/entity.cpp"
  "entity/entity.hpp"

  "dat_structs/vector2.hpp"

  "time/dt.hpp"
  "time/dt.cpp"
) # HAHAHAH FUCK YOU CMAKE 🖕🖕🖕🖕🖕🖕🖕

add_library(engine STATIC ${ENGINE_SOURCE_FILES})

target_link_libraries(game PRIVATE engine)
