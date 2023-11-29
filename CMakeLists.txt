cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(submodule_lib LANGUAGES CXX)

add_library(submodule_lib SHARED
    src/foo.cpp
)

set_target_properties(submodule_lib PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

target_include_directories(submodule_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
