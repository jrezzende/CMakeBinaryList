cmake_minimum_required(VERSION 3.9)
project(controller CXX)

set(CONTROLLER_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set (
	CONTROLLER_SRCS
	cAddInPos.cpp
	cAppend.cpp
	cConcatenate.cpp
	cCreateBothLists.cpp
	cDeleteLists.cpp
	cDisable.cpp
	cDisableAll.cpp
	cDisplay.cpp
	cDisplayDesc.cpp
	cDisplayLists.cpp
	cIdle.cpp
	cPrepend.cpp
	cPurge.cpp
	cSetCurrentList.cpp
	cSetValue.cpp
	cSort.cpp
)

set (
	CONTROLLER_HEADERS
	cAddInPos.h
	cAppend.h
	cConcatenate.h
	cCreateBothLists.h
	cDeleteLists.h
	cDisable.h
	cDisableAll.h
	cDisplay.h
	cDisplayDesc.h
	cDisplayLists.h
	cIdle.h
	Cmd.h
	cPrepend.h
	cPurge.h
	cSetCurrentList.h
	cSetValue.h
	cSort.h
)

add_library(controller STATIC ${CONTROLLER_SRCS} ${CONTROLLER_HEADERS})

target_include_directories(controller PUBLIC ${CONTROLLER_SRC_DIR})

target_link_libraries(controller model view)