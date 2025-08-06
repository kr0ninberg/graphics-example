cmake_minimum_required(VERSION 3.1)
project(graphicsLib)

set(CMAKE_CXX_STANDARD 20)

add_library(graphicsLib STATIC
        renderer/SFMLRenderer.cpp
)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
target_link_libraries(graphicsLib PRIVATE sfml-graphics sfml-window sfml-system)
