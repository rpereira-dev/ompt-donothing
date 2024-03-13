# CMake Minimum version
cmake_minimum_required(VERSION 3.10)

# Project name
project(donothing_ompt)

# Lib name
add_library(donothing_ompt SHARED src/tool.c)

# Include directory
include_directories(include)

# Installation
INSTALL(TARGETS donothing_ompt LIBRARY DESTINATION lib ARCHIVE DESTINATION lib)
INSTALL(DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION include FILES_MATCHING PATTERN "*.h*")
