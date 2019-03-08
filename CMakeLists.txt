cmake_minimum_required(VERSION 3.5)
project(test)

set(CMAKE_CXX_STANDARD 11)
ADD_SUBDIRECTORY(src)

ADD_EXECUTABLE(main main.cpp)
TARGET_LINK_LIBRARIES(main demo)