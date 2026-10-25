# SPDX-License-Identifier: GPL-3.0-or-later

cmake_minimum_required(VERSION 3.16)

project(template VERSION 1.0 LANGUAGES CXX)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
	set(CMAKE_BUILD_TYPE Release)
endif()

find_package(Qt6 6.5 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()
set(CMAKE_AUTORCC ON)

qt_add_executable(template
	main.cpp
	template.cpp template.h
	templatewidget.ui
	template.qrc
)

if(WIN32)
	target_sources(template PRIVATE template.rc)
endif()

if(NOT MSVC)
	target_compile_options(template PRIVATE -Wall -Wextra)
endif()

set_target_properties(template PROPERTIES
	WIN32_EXECUTABLE ON
	MACOSX_BUNDLE ON
)

target_link_libraries(template PRIVATE Qt6::Widgets)

install(TARGETS template
	BUNDLE DESTINATION .
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
