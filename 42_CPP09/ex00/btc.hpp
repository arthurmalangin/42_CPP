#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <regex.h>

class btc{
    
	public:
        btc(void);
        btc(btc const &src);
        ~btc(void);
        btc	&operator=(btc const &src);
        void readInput(std::string const &filename);
    
	private:
        std::map<std::string, double>	_data;
        void printHeader(void);
        void printLine(const std::string &date, const std::string &value);
        void rmWhitespace(std::string &str);
        bool checkDate(std::string const &date);
        bool checkAmount(std::string const &amount);
        void openFile(std::ifstream &file, const std::string &filename);
        void processHeader(std::ifstream &file);
        void processLine(const std::string &line);
        void parseAndValidateLine(const std::string &line);
};
template <typename T>
T stringToType(const std::string &str);

#include "btc.tpp"
