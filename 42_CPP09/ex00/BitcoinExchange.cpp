#include "BitcoinExchange.hpp"



void BitcoinExchange::fill_input(std::ifstream &input) {
	if (input.is_open()) {
		std::string line;
        while (std::getline(input, line)) {
            std::cout << line << std::endl;
        }
        input.close();
	}
	else {
		std::cout << "Error: could not open file." << std::endl;
		exit(1);
	}
}

void BitcoinExchange::fill_data(std::ifstream &data) {
	if (data.is_open()) {
		std::string line;
        while (std::getline(data, line)) {
            std::cout << line << std::endl;
        }
        data.close();
	}
	else {
		std::cout << "Error: could not open data.csv file." << std::endl;
		exit(1);
	}
}

BitcoinExchange::BitcoinExchange(std::string fileName) {
	std::ifstream input(fileName.c_str());
	fill_input(input);

	std::ifstream data("data.csv");
	fill_data(data);
}