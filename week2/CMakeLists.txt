cmake_minimum_required(VERSION 3.26)
project(week2 C)

set(CMAKE_C_STANDARD 11)

add_executable(simple simple.c)
add_executable(safety_monitor safety_monitor.c flight_computer.c flight_computer.h)
add_executable(traffic_light traffic_light_controller.c traffic_light_system.c traffic_light_system.h)
