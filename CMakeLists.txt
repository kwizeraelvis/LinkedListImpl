cmake_minimum_required(VERSION 3.14)
project(LinkedList C)

set(CMAKE_C_STANDARD 99)


add_executable(LinkedList main.c include/LinkedList.c include/LinkedList.h)