# Project #-----------------------------------------------------------------------------------------
cmake_minimum_required ( VERSION 3.18 )

project ( duvidas CXX )

# C++ Standard #------------------------------------------------------------------------------------
set ( CXX_STANDARD_REQUIRED ON )
set ( CMAKE_CXX_STANDARD 17 )

# GNU C++ Options #---------------------------------------------------------------------------------
if ( CMAKE_COMPILER_IS_GNUCXX )
 set ( CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic ${CMAKE_CXX_FLAGS}" )
endif ()

# Sources #-----------------------------------------------------------------------------------------
set ( PROJECT_HEADERS
      #src/SimpleClasses.hpp
      src/template.hpp
    )

set ( PROJECT_SOURCES
      src/main.cpp
    )

# Common Library #----------------------------------------------------------------------------------
add_library ( common OBJECT )

target_sources ( common
	               PRIVATE ${PROJECT_SOURCES}
	               PUBLIC ${PROJECT_HEADERS}
               )

target_include_directories( common PUBLIC src )

# Executables #-------------------------------------------------------------------------------------
add_executable ( ${CMAKE_PROJECT_NAME}_duvidas src/main.cpp )

target_link_libraries ( ${CMAKE_PROJECT_NAME}_duvidas PRIVATE common )
