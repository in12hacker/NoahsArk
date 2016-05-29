#ifndef __CWDEFINITION_H__
#define __CWDEFINITION_H__

#include <string>
#include "../../Serialization/Serializer.h"

using namespace std;
using namespace CubeWorld;

namespace CubeWorld {

    enum DefinitionType {
        Tile,
        Item,
        ItemTile,
        Avatar
    };

    class CWDefinition {
    public:
        DefinitionType type;
        string id;
        string description;

        int energy;

        CWDefinition();

        CWDefinition(DefinitionType type);

        virtual void Serialize(Serializer serializer);

    };


}
#endif // !__CWDEFINITION_H__