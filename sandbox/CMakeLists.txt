cmake_minimum_required(VERSION 3.7.1)
set(CMAKE_CXX_STANDARD 20)

project(sandbox)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(GRFX ${LIB_DIR}/grfx)
set(ANIML_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../animl)

add_subdirectory(${ANIML_DIR} ${ANIML_DIR}/build/lib)
add_subdirectory(${GRFX} ${GRFX}/build/lib)

include_directories(
	${SRC_DIR}
    ${ANIML_DIR}/src
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
    grfx
	animl
)
