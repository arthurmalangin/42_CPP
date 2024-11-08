#include "Base.hpp"
#include <vector>

int	main(void)
{
	srand(static_cast<unsigned int>(time(0)));

	std::vector<Base *> list;
	for (int i = 0; i < 20; i++) {
		Base *tmp = generate();
		list.push_back(tmp);
	}

	for (size_t i = 0; i < list.size(); i++) {
		identify(*list[i]);
		identify(list[i]);
	}
	for (size_t i = 0; i < list.size(); i++) {
		delete list[i];
	}

	return (0);
}