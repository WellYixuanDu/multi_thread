cmake_minimum_required(VERSION 3.10.0)

project(ATM)

include_directories(./src/include)

add_compile_options(-std=c++17 -O2)

add_executable(main main.cpp)
target_link_libraries(main pthread)