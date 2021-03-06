#ifndef _INSTANCELOADER_HPP_
#define _INSTANCELOADER_HPP_

#include <string>
#include <vector>

#include "ConflictGraphElements.hpp"

namespace fhplp {
class InstanceLoader
{
	public:
	static ConflictGraph* load(std::string filePath);
};
}
#endif
