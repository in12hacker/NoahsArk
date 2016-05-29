//
// Created by Peter Chen on 5/27/16.
//

#ifndef CUBEWORLD_CWCOMPONENT_H
#define CUBEWORLD_CWCOMPONENT_H


#include "CWObject.h"

namespace CubeWorld {

    class CWComponent {
    public:

        CWComponent();
        ~CWComponent();

        void AddedToObject(CWObject cwObject1);

        void RemovedFromObject();

        virtual void onRemovedFromObject() = 0;

        virtual void onAddedToObject() = 0;

        virtual void Update(float deltaTime) = 0;

    public:
        CWObject cwObject;

    };
}


#endif //CUBEWORLD_CWCOMPONENT_H
