cmake_minimum_required (VERSION 3.8)
project(dive_log_library)

add_library(dive_log_library "dive_log.cpp" "dive_log.h")
add_executable(dive_log_exe "main.cpp" "dive_log.cpp")
target_link_libraries(dive_log_exe dive_library)