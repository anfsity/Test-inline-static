cmake_minimum_required(VERSION 3.30)
project(ReflectionPoC CXX)

set(CMAKE_CXX_STANDARD 23)

add_library(core SHARED core_registry.cpp)

add_library(plugin_a SHARED plugin_a.cpp)
target_link_libraries(plugin_a PRIVATE core)

add_library(plugin_b SHARED plugin_b.cpp)
target_link_libraries(plugin_b PRIVATE core)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE core plugin_a plugin_b)