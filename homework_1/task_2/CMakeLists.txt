cmake_minimum_required(VERSION 3.22)
project(homework_1)

set(CMAKE_CXX_STANDARD 17) # use c++17

# tell cmake where to look for *.hpp, *.h files
include_directories(include)

add_subdirectory(src)
