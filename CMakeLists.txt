cmake_minimum_required(VERSION 3.15)
project(M2OEP-Class-Relationships)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp Shape.h Rectangle.cpp Rectangle.h Points.cpp Points.h Circle.h Circle.cpp)
add_executable(testing Testing.cpp Shape.h Rectangle.h Rectangle.cpp Points.h Points.cpp Circle.cpp Circle.h)