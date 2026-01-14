cmake_minimum_required(VERSION 3.5)
project(ais_player_c)

include(FetchContent)

FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG master
)

FetchContent_MakeAvailable(raylib)

add_executable(ais_player src/main.c)

target_link_libraries(ais_player raylib)