//
// Created by Peter Chen on 5/29/16.
//

#ifndef CUBEWORLD_WORLDSTATUS_H
#define CUBEWORLD_WORLDSTATUS_H

#include <iostream>

using namespace std;


namespace CubeWorld {
    class WorldStatus {

    public:
        WorldStatus();

        ~WorldStatus();

        void Reset() {
            executedRules = 0;
            invalidatedTiels = 0;
            updatedTiles = 0;
            checkedConditions = 0;
        }

        string ToString();

    public:
        int executedRules;
        int invalidatedTiels;
        int updatedTiles;
        int checkedConditions;
    };

}


#endif //CUBEWORLD_WORLDSTATUS_H
