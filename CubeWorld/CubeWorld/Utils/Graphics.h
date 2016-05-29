//
// Created by Peter Chen on 5/29/16.
//

#ifndef CUBEWORLD_GRAPHICS_H
#define CUBEWORLD_GRAPHICS_H


#include "Vector3.h"
#include "../Tiles/TilePosition.h"

using namespace CubeWorld;

namespace CubeWorld {

    const float TILE_SIZE = 1.0f;
    const float HALF_TILE_SIZE = TILE_SIZE / 2.0f;
    const float QUART_TILE_SIZE = TILE_SIZE / 4.0f;
    const float ITEM_TILE_SIZE = TILE_SIZE * 0.25f;

    enum Faces {
        Back = 0,
        Front,
        Bottom,
        Top,
        Right,
        Left,
    };

    class Graphics {
    public:
        Graphics();

        ~Graphics();

        static Vector3 TilePositionToVector3(TilePosition pos);

        static TilePosition Vector3ToTilePosition(Vector3 vec);

        static int FloatToTilePosition(float f);

        static float TilePositionToFloat(int pos);


    };

}


#endif //CUBEWORLD_GRAPHICS_H
