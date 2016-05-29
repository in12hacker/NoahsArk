//
// Created by Peter Chen on 5/29/16.
//

#ifndef CUBEWORLD_CWVISUALDEFINITION_H
#define CUBEWORLD_CWVISUALDEFINITION_H


#include "../../Serialization/ISerializable.h"
#include "../../Utils/Vector3.h"

#include <string>

using namespace std;

namespace CubeWorld {
    class CWVisualDefinition : public ISerializable {
    public:
        Vector3 pivot;
        string material;
        int scale;
        int materialCount;

        CWVisualDefinition();

        ~CWVisualDefinition();

        void Serialize(Serializer serializer);

    };

}


#endif //CUBEWORLD_CWVISUALDEFINITION_H
