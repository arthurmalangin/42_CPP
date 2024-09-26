#include "ScalarConverter.hpp"

/*====== Constructor/Destructor ======*/
ScalarConverter::ScalarConverter(void) {
    std::cout << "Default of ScalarConverter constructor call !" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj) {
    (void)obj;
    std::cout << "Copy constructor of ScalarConverter call !" << std::endl;
}

ScalarConverter::~ScalarConverter(void) {
    std::cout << "Destructor of ScalarConverter call !" << std::endl;
}

/*====== Operator ======*/
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj) {
    (void)obj;
    std::cout << "Operator of ScalarConverter Call !" << std::endl;
}

bool isPrintable(char c) {
    if (c >= 33 && c <= 126)
        return (true);
    return (false);
}

// find type before convert
// if . or if f in end etc .. cast with try catch for test
// stof, stod 

int findType(std::string str) {
    if (str[str.length() - 1] == 'f' /*previous char is number*/) //float
        return (1);
    if (/*if only number: int beacause '.' is not a number*/) // int
        return (2);
    if ()
}

void ScalarConverter::convert(std::string str) {
    int nb = std::stoi(str);
}