#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <cstdlib>

class BitcoinExchange {
	public:
		BitcoinExchange(std::string fileName);
	private:
		void fill_input(std::ifstream &input);
		void fill_data(std::ifstream &data);
		std::map<std::string, float> _data;
		std::map<std::string, float> _input;

};