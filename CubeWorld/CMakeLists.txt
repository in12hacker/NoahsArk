cmake_minimum_required(VERSION 3.5)
project(CubeWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES CubeWorld/main.cpp CubeWorld/main.h)
set(HEADER_FILES CubeWorld/main.h)

include(CubeWorld/CMakeLists.txt)


add_executable(CubeWorld ${SOURCE_FILES} ${HEADER_FIELS} ${GAME_SRC} ${GAME_HEADER})