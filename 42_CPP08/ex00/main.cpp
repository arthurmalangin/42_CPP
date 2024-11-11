#include "easyfind.hpp"
#include <vector>

int main() {
	std::vector<int> list;

	for(size_t i = 0; i < 10; i++) {
		list.push_back(i * 10 / 2);
	}

	try {
		int tmp = easyfind(list, 5);
		std::cout << "\033[32mfind: " << tmp << " !\033[0m" << std::endl;
	} catch (std::exception &e) {
		std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
	}

	try {
		int tmp = easyfind(list, 2);
		std::cout << "\033[32mfind: " << tmp << " !\033[0m" << std::endl;
	} catch (std::exception &e) {
		std::cerr << "\033[31m" << e.what() << "\033[0m" << std::endl;
	}
	return (0);

}