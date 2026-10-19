cmake_minimum_required(VERSION 4.2)
project(CPP_Practice)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (MSVC)
    set(PROJECT_WARNINGS /W4 /w44365)
else()
    set(PROJECT_WARNINGS -Wall -Wextra -Wsign-conversion)
endif()

# Find every subdirectory in the project root
file(GLOB EXERCISE_DIRS RELATIVE ${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/*)

foreach(DIR ${EXERCISE_DIRS})
    if (IS_DIRECTORY ${CMAKE_SOURCE_DIR}/${DIR} AND EXISTS ${CMAKE_SOURCE_DIR}/${DIR}/main.cpp)
        file(GLOB EXERCISE_SOURCES ${CMAKE_SOURCE_DIR}/${DIR}/*.cpp)
        add_executable(${DIR} ${EXERCISE_SOURCES})
        target_include_directories(${DIR} PRIVATE ${CMAKE_SOURCE_DIR}/include)
        target_compile_options(${DIR} PRIVATE ${PROJECT_WARNINGS})
    endif()
endforeach()