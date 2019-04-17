cmake_minimum_required(VERSION 3.13)
project(test_cv)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 14)

add_executable(test_cv main.cpp)

# linking
target_link_libraries(test_cv ${OpenCV_LIBS})
