cmake_minimum_required(VERSION 3.31)
project(graphicsExample)

set(CMAKE_CXX_STANDARD 20)

add_executable(graphicsExample main.cpp)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
target_link_libraries(graphicsExample PRIVATE sfml-graphics sfml-window sfml-system)