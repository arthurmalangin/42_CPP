
#include <iostream>
#include "easyfind.hpp"

template <typename T>
int easyfind(T container, int toFind) {
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end()) {
		std::ostringstream oss;
        oss << "Error easyfind: cannot find: " << toFind << " !";
        throw std::runtime_error(oss.str());
	}
	return (*it);
}
