cmake_minimum_required(VERSION 3.9)
project(ErrorsHandling)

set(CMAKE_CXX_STANDARD 17)

add_executable(ErrorsHandling main.cpp Worker.hpp Programmer.cpp Programmer.hpp Accountant.cpp Accountant.hpp
        Manager.cpp Manager.hpp Worker.cpp)