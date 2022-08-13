cmake_minimum_required(VERSION 3.7.1)
set(CMAKE_CXX_STANDARD 20)

project(sandbox)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(GFX_TEMP_DIR ${LIB_DIR}/graphics-template)

add_subdirectory(${GFX_TEMP_DIR} ${GFX_TEMP_DIR}/build/lib)

include_directories(
	${SRC_DIR}
    #${GFX_TEMP_DIR}/src
)

file(
	GLOB SOURCES
	${SRC_DIR}/sandbox.cpp
)

add_executable(
	${PROJECT_NAME}
	${SOURCES}
)

target_link_libraries(
	${PROJECT_NAME}
    graphics_template
)
