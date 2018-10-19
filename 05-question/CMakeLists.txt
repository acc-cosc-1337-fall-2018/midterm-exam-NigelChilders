cmake_minimum_required (VERSION 3.8)
project(animal_library)

add_library(animal_library "animal.h" "animal.cpp" "cat.h" "cat.cpp" "dog.h" "dog.cpp")
add_executable(animal_exe "main.cpp" "animal.cpp" "cat.cpp" "dog.cpp")
