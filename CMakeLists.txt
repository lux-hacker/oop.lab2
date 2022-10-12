cmake_minimum_required(VERSION 3.17)
project(oop.lab2)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 main.cpp model/Deltoida/Deltoida.h model/Deltoida/Deltoida.cpp controller/controller.cpp controller/controller.h view/view.cpp view/view.h tests/tests.cpp)
add_subdirectory(GoogleTests)
