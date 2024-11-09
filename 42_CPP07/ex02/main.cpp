#include "Array.hpp"
/*
//TODO conditionnal jump with valgrind to fix */
int main() {
	Array<double> list(50);
	
	for (unsigned int i = 0; i < list.size(); i++) {
		list[i] = i * 10;
	}

	Array<double> list2(50);
	std::cout << "Before test list2[0] = " << list2[0] << " !" <<std::endl;
	{
		Array<double> tmpList(50);
		for (unsigned int i = 0; i < list.size(); i++) {
			list[i] = i * 2;
		}
		list2 = tmpList;
		std::cout << "In test list2[0] = " << list2[0] << " && tmpList[0] = " << tmpList[0] << " !" <<std::endl;
	}
	std::cout << "After test list2[0] = " << list2[0] << " !" <<std::endl;
	return (0);

}