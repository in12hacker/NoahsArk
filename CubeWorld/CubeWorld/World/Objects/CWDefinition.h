#ifndef __CWDEFINITION_H__
#define __CWDEFINITION_H__

#include <string>

using namespace std;
using namespace CubeWorld::Serialization;

namespace CubeWorld {
	namespace World {
		namespace Objects {

			enum DefinitionType{
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
	}
}
#endif // !__CWDEFINITION_H__