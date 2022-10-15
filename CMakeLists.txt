cmake_minimum_required(VERSION 3.14..3.16)
project(Placer)

set(CMAKE_CXX_STANDARD 11)
set(SOURCES
        src/main.cpp)

add_executable(Placer ${SOURCES})
