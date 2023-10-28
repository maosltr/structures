cmake_minimum_required(VERSION 3.22)

project(CppStructures VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SMARTPHONE_LIB smartphone_lib)
set(EXECUTABLE_NAME structures)

add_subdirectory(src)
add_subdirectory(app)