cmake_minimum_required(VERSION 3.14..3.16)
project(placer)

set(CMAKE_CXX_STANDARD 11)
set(SOURCES
        src/main.cpp)


add_executable(placer ${SOURCES})
target_include_directories(placer PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_subdirectory(submodule/OpenDB)
target_link_libraries(placer PRIVATE opendb)
