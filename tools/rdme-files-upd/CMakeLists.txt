cmake_minimum_required(VERSION 3.10.1)

project(rdme-files-upd)

find_package(Qt5 COMPONENTS Core REQUIRED)

add_executable(rdme-files-upd main.cpp)

target_link_libraries(rdme-files-upd Qt5::Core)
