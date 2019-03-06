cmake_minimum_required(VERSION 3.10.1)

set(PROJ_NAME PDFWordConvertor)

project(${PROJ_NAME})

# set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
# set(CMAKE_AUTORCC ON)

set(Qt5_DIR C:\\Qt\\Qt5.10.0\\5.10.0\\msvc2017_64\\lib\\cmake)
# set(Qt5_DIR "C:\\Qt\\Qt5.10.0\\5.10.0\\msvc2017_64\\lib\\cmake\\Qt5")
# set(Qt5_DIR "D:\\Qt\\Qt5.10.0\\5.10.0\\msvc2017_64\\lib\\cmake")

find_package(Qt5
	# REQUIRED COMPONENTS Core Gui Widgets
	REQUIRED COMPONENTS Gui Widgets
)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} CUR_DIR_SRCS)

file(GLOB_RECURSE CUR_DIR_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

source_group("Header Files"
	FILES ${CUR_DIR_HEADERS}
)

include_directories()

#find_library(LIB_SDL
#    SDL2
#    PATHS ${SDL_LIB_DIR}
#    NO_DEFAULT_PATH)
	
add_executable(${PROJ_NAME}
	${CUR_DIR_SRCS}
	${CUR_DIR_HEADERS}
)

target_link_libraries(${PROJ_NAME}	
	Qt5::Widgets
	Qt5::Gui
	# Qt5::Core
	# ${LIB_SDL}
)

# Release版本关闭控制台窗口
# Set_Target_Properties(${PROJECT_NAME}
# 	PROPERTIES LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup"
# )
