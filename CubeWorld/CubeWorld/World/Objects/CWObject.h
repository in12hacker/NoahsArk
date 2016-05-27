#ifndef __CWOBJECT_H__
#define __CWOBJECT_H__

#include "../../Utils/Vector3.h"
#include "../CubeWorld.h"
#include "CWDefinition.h"

using namespace CubeWorld;


namespace CubeWorld {

    class CWObject {
    public:
        int objectId;
        CubeWorld world;
        CWDefinition CWDefinition;
        Vector3 position;

        CWObject();
    };

}
#endif // !__CWOBJECT_H__
