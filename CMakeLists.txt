cmake_minimum_required(VERSION 3.16)

project(gtkmm-msys-test)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(gtkmm REQUIRED)

add_executable(gtkmm-msys-test main.cpp)
target_include_directories(gtkmm-msys-test PUBLIC ${GTKMM_INCLUDE_DIRS})
target_link_libraries(gtkmm-msys-test ${GTKMM_LIBRARIES})
