cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project(op VERSION 0.1 LANGUAGES CXX)

###############################################################################
## target definitions #########################################################
###############################################################################

file(GLOB SOURCES
 	main.cpp
 	inc/*.h
 	src/*.cpp)
 
 message("Following sources found:")
foreach(a ${SOURCES})
  message("${a}")
endforeach()

#Generate the shared library from the sources
add_executable(NVI ${SOURCES})

#Set Debug or Release
set(CMAKE_BUILD_TYPE Debug)

###############################################################################
## compiler definitions########################################################
###############################################################################

#enable c++11 and set it required
set_property(TARGET NVI PROPERTY CXX_STANDARD 11)
set_property(TARGET NVI PROPERTY CXX_STANDARD_REQUIRED ON)

###############################################################################
## dependencies ###############################################################
###############################################################################

include_directories()
link_directories()
target_link_libraries(NVI )






