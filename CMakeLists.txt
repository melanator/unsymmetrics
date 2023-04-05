cmake_minimum_required( VERSION 3.1 )

project( unsymmetrics )

find_package( OpenGL REQUIRED )

include_directories( ${OPENGL_INCLUDE_DIRS} )

set( GLFW_BUILD_DOCS OFF CACHE BOOL "GLFW lib only" )
set( GLFW_INSTALL OFF CACHE BOOL "GLFW lib only" )
set( IMGUI_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/imgui" )
set( GLFW_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/glfw" )


add_subdirectory( external/glfw )
add_subdirectory( external/imgui )
add_subdirectory( unsymmetrics )
include_directories(${PROJECT_SOURCE_DIR})
