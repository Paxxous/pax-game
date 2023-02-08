cmake_minimum_required(VERSION 3.25.2)

# set rules.
if (UNIX) 
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
  set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
  add_compile_options(-Wall -Werror)
endif()

# set project.
project(paxs-game
  VERSION 1.0.0 # aka beta
  DESCRIPTION "A game made by paxs."
  LANGUAGES CXX # o mg omg c++!
)

add_subdirectory("src")
