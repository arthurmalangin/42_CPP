#include "Array.hpp"
/*
//TODO conditionnal jump with valgrind to fix */
int main() {
	Array<double> list(50);
	
	for (unsigned int i = 0; i < list.size(); i++) {
		list[i] = i * 10;
	}

	// Deep copy test ==========
	Array<double> list2(list);
	// for (unsigned int i = 0; i < list2.size(); i++) {
	// 	list2[i] = (i + 1) * 2;
	// }
	std::cout << "Before test list2[0] = " << list2[0] << " !" <<std::endl;
	{
		Array<double> tmpList(50);
		for (unsigned int i = 0; i < tmpList.size(); i++) {
			tmpList[i] = (i + 5) * 2;
		}
		list2 = tmpList;
		std::cout << "In test list2[0] = " << list2[0] << " && tmpList[0] = " << tmpList[0] << " !" <<std::endl;
	} // After this line, tmpList will be destroy 
	std::cout << "After test list2[0] = " << list2[0] << " !" <<std::endl;
	return (0);

}