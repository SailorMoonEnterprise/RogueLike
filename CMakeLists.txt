cmake_minimum_required(VERSION 3.20)
project(RogueLike)

set(CMAKE_CXX_STANDARD 20)


find_package(libtcod CONFIG REQUIRED)

find_package(SDL2 CONFIG REQUIRED)

add_executable(
    main
    src/main.cpp
    src/GameEngine/Render/Render.h
    src/GameEngine/Render/Render.cpp
    src/GameEngine/Utils/Utils.h
    src/GameEngine/Utils/Utils.cpp
    src/GameEngine/GameObject/GameObject.h
    src/GameEngine/GameObject/GameObject.cpp)

target_link_libraries(main PRIVATE libtcod::libtcod)

target_link_libraries(main PRIVATE SDL2::SDL2main SDL2::SDL2-static)
