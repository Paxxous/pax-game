set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
# pass in some data
configure_file(
  "/${PROJECT_SOURCE_DIR}/src/defs.hpp.in"
  "/${PROJECT_SOURCE_DIR}/src/defs.hpp"
)

# Get libraries
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

include_directories(
  ${SDL2_INCLUDE_DIRS}
  ${SDL2IMAGE_INCLUDE_DIRS}
)

add_executable(game main.cpp)

# Link libraries
target_link_libraries(game PUBLIC ${SDL2_LIBRARIES})

# Setup subdirectories
add_subdirectory(engine)

