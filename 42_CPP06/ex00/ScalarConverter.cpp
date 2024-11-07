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
	return (*this);
}

bool isPrintable(int c) {
    if (c >= 32 && c <= 126)
        return (true);
    return (false);
}

void	convertToChar(std::string str) {
	char *last_c_str;
	int	tmp = strtol(str.c_str(), &last_c_str, 10); // 10 pour base 10 (0123456789)

	if (isPrintable(tmp)) {
		std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}
}

void convertToFloat(std::string str) {
	char *last_c_str;
	float f = std::strtof(str.c_str(), &last_c_str);
}

void convertToInt(std::string str) {
	char *last_c_str;
	int	tmp = strtol(str.c_str(), &last_c_str, 10); // 10 pour base 10 (0123456789)
}

void convertToDouble(std::string str) {
	char *last_c_str;
	double	d = std::strtod(str.c_str(), &last_c_str);
}

void ScalarConverter::convert(std::string str) {
    convertToChar(str);
}