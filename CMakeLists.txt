cmake_minimum_required(VERSION 3.5.0)

project(main VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${CMAKE_SOURCE_DIR}/math)

# add an executable that links to a shared library
add_executable(main_shared main.cpp)
target_include_directories(main_shared PRIVATE ${CMAKE_SOURCE_DIR}/math)
target_link_libraries(main_shared PRIVATE math_shared)

# add an executable that links to a static library
add_executable(main_static main.cpp)
target_include_directories(main_static PRIVATE ${CMAKE_SOURCE_DIR}/math)
target_link_libraries(main_static PRIVATE math_static)