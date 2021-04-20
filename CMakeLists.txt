cmake_minimum_required(VERSION 3.5)
project(Project4 CXX)

#require a C++14 compiler for all targets 
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Threads)

add_executable(prodcon1 prodcon1.cpp message_queue1.h)
add_executable(prodcon2 prodcon2.cpp message_queue2.h)
add_executable(prodcon3 prodcon3.cpp message_queue3.h)
add_executable(main main.cpp)

TARGET_LINK_LIBRARIES(prodcon1 ${CMAKE_THREAD_LIBS_INIT})
TARGET_LINK_LIBRARIES(prodcon2 ${CMAKE_THREAD_LIBS_INIT})
TARGET_LINK_LIBRARIES(prodcon3 ${CMAKE_THREAD_LIBS_INIT})
