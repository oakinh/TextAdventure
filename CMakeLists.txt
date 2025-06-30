cmake_minimum_required(VERSION 3.10)
project(TextAdventure)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS 
    "${PROJECT_SOURCE_DIR}/src/**/*.cpp"
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
    )

add_executable(TextAdventure ${SOURCES})

target_include_directories(TextAdventure PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)
