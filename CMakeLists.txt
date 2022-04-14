cmake_minimum_required(VERSION 3.18)
set(CMAKE_CXX_STANDARD 23)
project(module_study)

add_subdirectory(app)

set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT app)
