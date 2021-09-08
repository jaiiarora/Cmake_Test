cmake_minimum_required(VERSION 3.10)

#SET THE PROJECT NAME

project(TUTORIAL VERSION 1.0)
set(Tutorial_VERSION_MAJOR 1)
set(Tutorial_VERSION_MINOR 0)

#add executable
add_executable(Tutorial tutorial.cxx)

configure_file(TutorialConfig.h.in "/home/airj23/Documents/test/Cmake/Test3/lib/TutorialConfig.h")

target_include_directories(Tutorial PUBLIC "/home/airj23/Documents/test/Cmake/Test3/lib")


