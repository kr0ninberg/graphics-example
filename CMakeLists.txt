cmake_minimum_required(VERSION 3.1)
project(graphicsExample)

set(CMAKE_CXX_STANDARD 20)

add_executable(graphicsExample main.cpp)
add_subdirectory(graphicsLib)
target_link_libraries(graphicsExample graphicsLib)
