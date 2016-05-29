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

include(CubeWorld/World/Lights/CMakeLists.txt)
list(APPEND GAME_SRC ${WORLD_LIGHTS_SRC})
list(APPEND GAME_HEADER ${WORLD_LIGHTS_HEADER})

include(CubeWorld/World/Generator/CMakeLists.txt)
list(APPEND GAME_SRC ${WORLD_GENERATOR_SRC})
list(APPEND GAME_HEADER ${WORLD_GENERATOR_HEADER})

include(CubeWorld/Utils/CMakeLists.txt)
list(APPEND GAME_SRC ${UTILS_SRC})
list(APPEND GAME_HEADER ${UTILS_HEADER})

include(CubeWorld/Serialization/CMakeLists.txt)
list(APPEND GAME_SRC ${SERIALIZATION_SRC})
list(APPEND GAME_HEADER ${SERIALIZATION_HEADER})

include(CubeWorld/Test/CMakeLists.txt)
list(APPEND GAME_SRC ${TEST_SRC})
list(APPEND GAME_HEADER ${TEST_HEADER})

include(CubeWorld/Artifacts/CMakeLists.txt)
list(APPEND GAME_SRC ${ARTIFACTS_SRC})
list(APPEND GAME_HEADER ${ARTIFACTS_HEADER})

include(CubeWorld/Avatars/CMakeLists.txt)
list(APPEND GAME_SRC ${AVATARS_SRC})
list(APPEND GAME_HEADER ${AVATARS_HEADER})

include(CubeWorld/Avatars/Components/CMakeLists.txt)
list(APPEND GAME_SRC ${AVATARS_COMPONENTS_SRC})
list(APPEND GAME_HEADER ${AVATARS_COMPONENTS_HEADER})

include(CubeWorld/Configuration/CMakeLists.txt)
list(APPEND GAME_SRC ${CONFIGURATION_SRC})
list(APPEND GAME_HEADER ${CONFIGURATION_HEADER})

include(CubeWorld/Console/CMakeLists.txt)
list(APPEND GAME_SRC ${CONSOLE_SRC})
list(APPEND GAME_HEADER ${CONSOLE_HEADER})

include(CubeWorld/Gameplay/CMakeLists.txt)
list(APPEND GAME_SRC ${GAMEPLAY_SRC})
list(APPEND GAME_HEADER ${GAMEPLAY_HEADER})

include(CubeWorld/Gameplay/Multiplayer/CMakeLists.txt)
list(APPEND GAME_SRC ${GAMEPLAY_MULTIPLAYER_SRC})
list(APPEND GAME_HEADER ${GAMEPLAY_MULTIPLAYER_HEADER})

include(CubeWorld/Items/Components/CMakeLists.txt)
list(APPEND GAME_SRC ${ITEMS_COMPONENTS_SRC})
list(APPEND GAME_HEADER ${ITEMS_COMPONENTS_HEADER})

include(CubeWorld/Items/CMakeLists.txt)
list(APPEND GAME_SRC ${ITEMS_SRC})
list(APPEND GAME_HEADER ${ITEMS_HEADER})

include(CubeWorld/Sectors/CMakeLists.txt)
list(APPEND GAME_SRC ${SECTORS_SRC})
list(APPEND GAME_HEADER ${SECTORS_HEADER})

include(CubeWorld/Tiles/CMakeLists.txt)
list(APPEND GAME_SRC ${TILES_SRC})
list(APPEND GAME_HEADER ${TILES_HEADER})

include(CubeWorld/Tiles/Components/CMakeLists.txt)
list(APPEND GAME_SRC ${TILES_COMPONENTS_SRC})
list(APPEND GAME_HEADER ${TILES_COMPONENTS_HEADER})

include(CubeWorld/Tiles/Rules/CMakeLists.txt)
list(APPEND GAME_SRC ${TILES_RULES_SRC})
list(APPEND GAME_HEADER ${TILES_RULES_HEADER})







