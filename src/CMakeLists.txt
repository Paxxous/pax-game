# configure a few things
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
file(COPY "res" DESTINATION ${CMAKE_BINARY_DIR})

# pass in some data
configure_file(
  "/${PROJECT_SOURCE_DIR}/src/defs.hpp.in"
  "/${PROJECT_SOURCE_DIR}/src/defs.hpp"
)

# Get libraries
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_mixer REQUIRED) # TODO pick a version for this

add_executable(game main.cpp)

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

# Setup subdirectories
add_subdirectory(engine)

