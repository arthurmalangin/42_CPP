#include "PhoneBook.hpp"
#include <cstdio>

bool isOnlyChar(std::string message) {
	for (int i = 0; i < (int)message.length(); i++) {
		if (!std::isalpha(message[i]))
			return (false);
	}
	return (true);
}

bool isOnlyText(std::string message) {
	for (int i = 0; i < (int)message.length(); i++) {
		if (!std::isalpha(message[i]) && message[i] != ' ' && message[i] != '\'' && message[i] != '\"')
			return (false);
	}
	return (true);
}


bool isOnlyDigit(std::string message) {
	for (int i = 0; i < (int)message.length(); i++) {
		if (!std::isdigit(message[i]))
			return (false);
	}
	return (true);
}

std::string requestIndex(std::string message) {
	std::string value;

	while (!std::cin.eof() && (value.empty() || !isOnlyDigit(value))) {
		std::cout << message << std::ends;
		std::getline(std::cin, value);
	}
	return value;
}

std::string requestNumber(std::string message) {
	std::string value;

	while (!std::cin.eof() && (value.empty() || !isOnlyDigit(value)) && value.length() != 10) {
		std::cout << message << std::ends;
		std::getline(std::cin, value);
	}
	return value;
}

std::string requestText(std::string message) {
	std::string value;

	while (!std::cin.eof() && (value.empty() || !isOnlyText(value))) {
		std::cout << message << std::ends;
		std::getline(std::cin, value);
	}
	return value;
}

std::string request(std::string message) {
	std::string value;

	while (!std::cin.eof() && (value.empty() || !isOnlyChar(value))) {
		std::cout << message << std::ends;
		std::getline(std::cin, value);
	}
	return value;
}

void func_add(PhoneBook *rep) {
	std::string input[5];

	input[0] = request("First Name ? -> ");
	input[1] = request("Last Name ? -> ");
	input[2] = request("Nickname ? -> ");
	input[3] = requestNumber("Phone number ? -> ");
	input[4] = requestText("Darkest secret ? -> ");
	rep->add_contact(input[0], input[1], input[2], input[3], input[4]);
}

void func_search(PhoneBook rep) {
	std::string input;

	rep.display_all();
	while (!std::cin.eof()) {
		input = requestIndex("Select Index -> ");
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
		else if (!std::cin.eof())
			std::cout << "Error, type: ADD, SEARCH or EXIT." << std::endl;
	}
	std::cout << "\nBye !" << std::endl;
	return (0);
}