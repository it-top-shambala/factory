cmake_minimum_required(VERSION 3.22)
project(factory)

set(CMAKE_CXX_STANDARD 14)

add_executable(factory main.cpp Hero.h Mage.h Barbarian.h)
