#----------[ VARIABLES ]----------#
set(PROJECT_NAME CES) 
set(PROJECT_VERSION 0.2.2)
set(CMAKE_MIN_VERSION 3.0.0)
#---------------------------------#

#----------[ PROJECT SETUP ]----------#
cmake_minimum_required(VERSION ${CMAKE_MIN_VERSION})

if(WIN32)
    project(${PROJECT_NAME} VERSION ${PROJECT_VERSION} LANGUAGES CXX)
elseif(UNIX)
    project(${PROJECT_NAME} VERSION ${PROJECT_VERSION})
endif()
#-------------------------------------#

#----------[ INCLUDE PROJECT FILES ]----------#
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")

include_directories(${INCLUDE_DIR})
include_directories(${SRC_DIR})
include_directories(${CIPHER_DIR})

file(GLOB_RECURSE SOURCES
    "${INCLUDE_DIR}/*.hxx"
    "${SRC_DIR}/*.cxx"
)
#---------------------------------------------#

#----------[ EXECUTABLE SETUP ]----------#
add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_DIR})
target_include_directories(${PROJECT_NAME} PRIVATE ${SRC_DIR})

if (WIN32)
    set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "${PROJECT_NAME}-v${PROJECT_VERSION}-WIN32")
elseif(UNIX)
    set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "${PROJECT_NAME}-v${PROJECT_VERSION}-UNIX")
endif()
#----------------------------------------#