cmake_minimum_required(VERSION 3.16)

project(USBLocker)

add_executable(USBLocker src/main.cpp)


find_package(CLI11 CONFIG REQUIRED)
target_link_libraries(USBLocker CLI11::CLI11)

include_directories(${CLI11_INCLUDE_DIR})