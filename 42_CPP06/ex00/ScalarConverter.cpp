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

void ScalarConverter::convert(std::string str) {
    int nb = std::stoi();
}