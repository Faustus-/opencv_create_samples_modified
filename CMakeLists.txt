cmake_minimum_required(VERSION 3.9)
project(createsamples)

set(CMAKE_CXX_STANDARD 11)

# include_directories("Header Files")
# AUX_SOURCE_DIRECTORY(src "Source Files")
set(SOURCE_FILES "Header Files/utility.hpp" "Source Files/createsamples.cpp" "Header Files/utility.hpp" "Source Files/utility.cpp")

# include_directories("Source Files")
find_package(OpenCV REQUIRED)

if(OpenCV_FOUND)
    MESSAGE(STATUS "Project: ${PROJECT_NAME}")
    MESSAGE(STATUS "OpenCV library status:")
    MESSAGE(STATUS "version: ${OpenCV_VERSION}")
    MESSAGE(STATUS "libraries: ${OpenCV_LIBS}")
    MESSAGE(STATUS "include path: ${OpenCV_INCLUDE_DIRS}")
endif()

include_directories(${OpenCV_INCLUDE_DIRS})


add_executable(createsamples ${SOURCE_FILES})
# add_executable(createsamples "Source Files/main.cpp")

target_link_libraries(createsamples ${OpenCV_LIBS})
# target_link_libraries(createsamples ${Boost_LIBRARIES})


# file(GLOB_RECURSE src_files
#         "Source Files/main.cpp"
#         "Source Files/contourLocate.cpp"
#         "Source Files/ContourAdjTextLocateMain.cpp"
#         "Source Files/textLocate.cpp"
#         )