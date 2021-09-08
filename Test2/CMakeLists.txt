cmake_minimum_required(VERSION 3.10)

#Setting Project Name
project(HeaderTest)

#configuring the header files
#configure_file("Num.h.in" "/home/airj23/Documents/test/Cmake/Test2/lib/Num.h")

#adding executable and entry point
add_executable(HeaderTest Source.c)
add_subdirectory(lib)
target_link_libraries(HeaderTest PUBLIC lib)

#include directories that may be used
target_include_directories(HeaderTest PUBLIC "/home/airj23/Documents/test/Cmake/Test2/lib")



