cmake_minimum_required( VERSION 3.1 )

project( unsymmetrics )

set( GLFW_BUILD_DOCS OFF CACHE BOOL "GLFW lib only" )
set( GLFW_INSTALL OFF CACHE BOOL "GLFW lib only" )
set( GLEW_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/external/glew/include")
set( IMGUI_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/imgui" )
set( GLFW_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/glfw" )
set( GLAD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/glad" )

find_package( OpenGL REQUIRED )
find_package( GLEW REQUIRED )

include_directories( ${OPENGL_INCLUDE_DIRS} )
include_directories(${GLEW_INCLUDE_DIRS})
link_libraries(${GLEW_LIBRARIES})

add_subdirectory( external/glfw )
add_subdirectory( external/imgui )
add_subdirectory( external/glad )
add_subdirectory( unsymmetrics )
include_directories(${PROJECT_SOURCE_DIR})
