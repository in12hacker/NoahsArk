set(GAME_SRC
        )

set(GAME_HEADER
        )

include(CubeWorld/World/CMakeLists.txt)
list(APPEND GAME_SRC ${WORLD_SRC})
list(APPEND GAME_HEADER ${WORLD_HEADER})

include(CubeWorld/World/Objects/CMakeLists.txt)
list(APPEND GAME_SRC ${WORLD_OBJECTS_SRC})
list(APPEND GAME_HEADER ${WORLD_OBJECTS_HEADER})

include(CubeWorld/Utils/CMakeLists.txt)
list(APPEND GAME_SRC ${UTILS_SRC})
list(APPEND GAME_HEADER ${UTILS_HEADER})

include(CubeWorld/Serialization/CMakeLists.txt)
list(APPEND GAME_SRC ${SERIALIZATION_SRC})
list(APPEND GAME_HEADER ${SERIALIZATION_HEADER})

include(CubeWorld/Test/CMakeLists.txt)
list(APPEND GAME_SRC ${TEST_SRC})
list(APPEND GAME_HEADER ${TEST_HEADER})

