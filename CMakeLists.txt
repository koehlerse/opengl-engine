cmake_minimum_required(VERSION 3.20)

set(CMAKE_GENERATOR "Ninja")

project("opengl-engine")

file(GLOB_RECURSE sources 
	"${CMAKE_SOURCE_DIR}/src/*.cpp"
	"${CMAKE_SOURCE_DIR}/lib/glad/gl.c"
)

add_executable(opengl-engine ${sources})

target_link_options(opengl-engine PRIVATE 
	${SUBSYSTEM_LINKER_OPTIONS}
	-mwindows
)

set_target_properties(opengl-engine PROPERTIES 
	LINK_FLAGS_DEBUG "/SUBSYSTEM:CONSOLE"
	LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup"
)

target_link_libraries(opengl-engine 
	"${CMAKE_SOURCE_DIR}/lib/GLFW/glfw3dll.lib"
)

set_property(TARGET opengl-engine PROPERTY CXX_STANDARD 17)

target_include_directories(opengl-engine PRIVATE 
	"${CMAKE_SOURCE_DIR}/include"
)