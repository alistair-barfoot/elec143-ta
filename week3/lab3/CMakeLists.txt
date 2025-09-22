cmake_minimum_required(VERSION 3.26)
project(lab3 C)

set(CMAKE_C_STANDARD 11)

add_executable(task1 task1.c)
add_executable(task2 task2.c)

IF (NOT WIN32)
  target_link_libraries(task1 m)
ENDIF()
