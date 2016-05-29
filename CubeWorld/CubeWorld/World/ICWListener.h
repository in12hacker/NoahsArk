//
// Created by Peter Chen on 5/29/16.
//

#ifndef CUBEWORLD_ICWLISTENER_H
#define CUBEWORLD_ICWLISTENER_H

namespace CubeWorld {
    class ICWListener {

    public:
        virtual CreateObject() = 0;

        virtual UpdateObject() = 0;

        virtual DestroyObject() = 0;
    };
}

#endif //CUBEWORLD_ICWLISTENER_H
