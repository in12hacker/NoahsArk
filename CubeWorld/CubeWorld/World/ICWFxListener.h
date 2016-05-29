//
// Created by Peter Chen on 5/29/16.
//

#ifndef CUBEWORLD_ICWFXLISTENER_H
#define CUBEWORLD_ICWFXLISTENER_H

#include <string>
#include "../Utils/Vector3.h"
#include "Objects/CWObject.h"

using namespace std;
using namespace CubeWorld;

namespace CubeWorld {
    class ICWFxListener {
    public:
        virtual void PlaySound(string soundId, Vector3 position) = 0;

        virtual void PlaySound(string soundId, CWObject fromObject) = 0;

        virtual void PlayEffect(string effectId, Vector3 position) = 0;

        virtual void PlayEffect(string effectId, CWObject fromObject) = 0;
    };
}
#endif //CUBEWORLD_ICWFXLISTENER_H
