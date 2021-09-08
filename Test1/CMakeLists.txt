cmake_minimum_required(VERSION 3.10)

#setting project name
project(Tutorial)

#configuring a header file
configure_file("TutorialConfig.h.in" "/home/airj23/Documents/test/Cmake/include/TutorialConfig.h")


#add the executable
add_executable(Tutorial tutorial1.c)

#adding binary tree to search path for include files
target_include_directories(Tutorial PUBLIC "/home/airj23/Documents/test/Cmake/include")

