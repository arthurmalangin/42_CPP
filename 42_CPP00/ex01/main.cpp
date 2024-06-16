#include "PhoneBook.hpp"
#include <cstdio>

void request(std::string message, std::string *value) {
	while (!std::cin.eof() && value->empty()) {
		std::cout << message << std::ends;
		std::getline(std::cin, *value);
	}
}

void func_add(PhoneBook *rep) {
	std::string input[5];

	request("First Name ? -> ", &input[0]);
	request("Last Name ? -> ", &input[1]);
	request("Nickname ? -> ", &input[2]);
	request("Phone number ? -> ", &input[3]);
	request("Darkest secret ? -> ", &input[4]);
	rep->add_contact(input[0], input[1], input[2], input[3], input[4]);
}

void func_search(PhoneBook rep) {
	std::string input;

	rep.display_all();
	while (!std::cin.eof()) {
		request("Select Index -> ", &input);
		if (input.size() == 1) {
			if (input[0] <= '7' && input[0] >= '0') {
				rep.display(input[0] - '0');
				break;
			}
		}
		else {
			if (!input.empty())
				std::cout << "Error: bad value for index !" << std::endl;
			input = "";
		}
	}
	

}

int main(void) {
	PhoneBook repertoire;
	std::string input = " ";
	while (input != "EXIT") {
		if (std::cin.eof()) {
			std::cout << "\nBye !" << std::endl;
			return (0);
		}
		std::cout << "$> " << std::ends;
		std::getline (std::cin, input);
		if (input == "ADD") {
			func_add(&repertoire);
		} else if (input == "SEARCH") {
			func_search(repertoire);
		}
	}
	std::cout << "\nBye !" << std::endl;
	return (0);
}