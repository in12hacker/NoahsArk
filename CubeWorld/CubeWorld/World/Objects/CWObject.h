#ifndef __CWOBJECT_H__
#define __CWOBJECT_H__

#include "../../Utils/Vector3.h"

using namespace CubeWorld::Utils;

class CubeWorld;
class CWDefinition;

namespace CubeWorld {
	namespace World {
		namespace Objects {
			class CWObject {
			public:
				int objectId;
				CubeWorld world;
				CWDefinition CWDefinition;
				Vector3 position;
			};


		}
	}
}
#endif // !__CWOBJECT_H__
