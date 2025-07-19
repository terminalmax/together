cmake_minimum_required(VERSION 4.0)
project(together)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Raylib
include(FetchContent)
FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 5.5
)

set(FETCHONTENT_QUIET OFF)
set(BUILD_EXAMPLES OFF)
FetchContent_MakeAvailable(raylib)

add_executable(together src/main.cpp)
target_include_directories(together PUBLIC src)
target_link_libraries(together PRIVATE raylib)