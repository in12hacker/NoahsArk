#ifndef __CWOBJECT_H__
#define __CWOBJECT_H__

#include "../../Utils/Vector3.h"
#include "../World.h"
#include "CWDefinition.h"

using namespace CubeWorld;


namespace CubeWorld {

    class CWObject {
    public:
        int objectId;
        World world;
        CWDefinition cwDefinition;
        Vector3 position;

        CWObject();

        ~CWObject();
    };

}
#endif // !__CWOBJECT_H__
