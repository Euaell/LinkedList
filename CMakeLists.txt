cmake_minimum_required(VERSION 3.19)
project(LinkedList)

set(CMAKE_CXX_STANDARD 20)

add_executable(LinkedList main.cpp SortedList.h LinkedList.h Node.h Stack.h Queue.h)