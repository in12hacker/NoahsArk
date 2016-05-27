#ifndef __ISERIALIZABLE_H__
#define __ISERIALIZABLE_H__

#include "Serializer.h"

using namespace CubeWorld;

namespace CubeWorld {
    class ISerializable {
    public:
        virtual void Serialize(Serializer serializer) = 0;
    };
}
#endif // !__ISERIALIZABLE_H__