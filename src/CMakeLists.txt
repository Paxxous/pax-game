# configure a few things
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
file(COPY "res" DESTINATION ${CMAKE_BINARY_DIR})

add_executable(game main.cpp)

# pass in some data
configure_file(
  "/${PROJECT_SOURCE_DIR}/src/defs.hpp.in"
  "/${PROJECT_SOURCE_DIR}/src/defs.hpp"
)

if (NOT ${CMAKE_SYSTEM_NAME} MATCHES "Emscripten")

  # Get libraries
  find_package(SDL2_mixer REQUIRED) # TODO pick a version for this
  find_package(SDL2_image REQUIRED)
  find_package(SDL2 REQUIRED)

  target_include_directories(game PUBLIC
    ${SDL2_INCLUDE_DIRS}
    ${SDL2IMAGE_INCLUDE_DIRS}
    ${SDL2MIXER_INCLUDE_DIRS}
  )

# Link libraries
  target_link_libraries(game PUBLIC 
    ${SDL2_LIBRARIES} 
    ${SDL2_MIXER_LIBRARIES}
    ${SDL2_IMAGE_LIBRARIES} 
  )
endif()

if (${CMAKE_SYSTEM_NAME} MATCHES "Emscripten")
  set(CMAKE_EXECUTABLE_SUFFIX ".html")

  set(USE_FLAGS "-s USE_SDL=2 -s USE_SDL_IMAGE=2 -s USE_SDL_MIXER=2 -s SDL2_IMAGE_FORMATS='[\"png\"]' -s USE_OGG=1 -s USE_VORBIS=1 -O3")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${USE_FLAGS}")
endif()


# Setup subdirectories
add_subdirectory(engine)

