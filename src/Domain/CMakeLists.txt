cmake_minimum_required(VERSION 3.9)
project(list CXX)

set(LIST_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	LIST_SRCS
	List.cpp
)

set (
	LIST_HEADERS
	List.h
)

add_library(list STATIC ${LIST_SRCS} ${LIST_HEADERS})

target_include_directories(list PUBLIC ${LIST_SRC_DIR})