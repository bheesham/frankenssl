cmake_minimum_required(VERSION 3.4.1)

project(hst
  VERSION 0.1.0
  LANGUAGES C)

set(CMAKE_VERBOSE_MAKEFILE on)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_BINARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
link_directories(${PROJECT_BINARY_DIR}/lib)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(stub)
add_subdirectory(boring)
add_subdirectory(libre)
add_subdirectory(open)
add_subdirectory(examples)
