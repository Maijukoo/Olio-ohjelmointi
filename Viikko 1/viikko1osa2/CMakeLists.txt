cmake_minimum_required(VERSION 3.5)

project(viikko1kotitehtava1osa2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikko1kotitehtava1osa2 main.cpp)

install(TARGETS viikko1kotitehtava1osa2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
