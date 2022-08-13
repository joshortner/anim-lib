cmake_minimum_required(VERSION 3.7.1)
set(CMAKE_CXX_STANDARD 20)

project(animl)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(GMATH_DIR ${LIB_DIR}/gmath)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(${GMATH_DIR} ${GMATH_DIR}/build/lib)

file(
	GLOB SOURCES
	${SRC_DIR}/animl_ik.c
)

add_library(
	${PROJECT_NAME}
	${SOURCES}
)

target_include_directories(
	${PROJECT_NAME}
	PUBLIC
	${SRC_DIR}
)

target_link_libraries(
	${PROJECT_NAME}
    gmath
)

set_target_properties(
	${PROJECT_NAME}
    PROPERTIES
	ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)