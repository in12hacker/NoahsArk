cmake_minimum_required(VERSION 3.5)
project(CubeWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES CubeWorld/main.cpp CubeWorld/main.h CubeWorld/Utils/Vector3.cpp CubeWorld/Serialization/Serializer.cpp CubeWorld/World/Objects/CWComponent.cpp CubeWorld/World/Objects/CWComponent.h CubeWorld/Test/Test.cpp CubeWorld/Test/Test.h)
set(HEADER_FILES CubeWorld/main.h)


include(CubeWorld/World/CMakeLists.txt)
list(APPEND SOURCE_FIELS ${WORLD_SRC})
list(APPEND HEADER_FIELS ${WORLD_HEADER})

include(CubeWorld/Utils/CMakeLists.txt)
list(APPEND SOURCE_FIELS ${UTILS_SRC})
list(APPEND HEADER_FIELS ${UTILS_HEADER})

include(CubeWorld/Serialization/CMakeLists.txt)
list(APPEND SOURCE_FIELS ${SERIALIZATION_SRC})
list(APPEND HEADER_FIELS ${SERIALIZATION_HEADER})

include(CubeWorld/Test/CMakeLists.txt)
list(APPEND SOURCE_FIELS ${TEST_SRC})
list(APPEND SOURCE_FIELS ${TEST_HEADER})


add_executable(CubeWorld ${SOURCE_FILES} ${HEADER_FIELS})