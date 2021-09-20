CMAKE_MINIMUM_REQUIRED(VERSION 3.15)

project("tutEigen3")
include_directories("./include/eigen3")

add_executable(main ./src/main.cpp)