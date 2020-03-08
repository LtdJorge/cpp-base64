
cmake_minimum_required (VERSION 3.8)

project ("cpp-base64")

add_executable (tobase64 "tobase64.cpp" "base64.cpp" "base64.h")
add_executable (frombase64 "frombase64.cpp" "base64.cpp" "base64.h")