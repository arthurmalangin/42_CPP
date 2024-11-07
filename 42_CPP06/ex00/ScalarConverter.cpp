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
	int	tmp = std::strtod(str.c_str(), &last_c_str); // 10 pour base 10 (0123456789)
	if (tmp < -std::numeric_limits<char>::max() || tmp > std::numeric_limits<char>::max()) {
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (isPrintable(tmp)) {
		std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}
}

void convertToFloat(std::string str) {
	char *last_c_str;
	float tmp = static_cast<float>(std::strtod(str.c_str(), &last_c_str));
	if (tmp < -std::numeric_limits<float>::max() || tmp > std::numeric_limits<float>::max()) {
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	std::cout << "float: " << tmp;
	if (tmp == static_cast<int>(tmp))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void convertToInt(std::string str) {
	char *last_c_str;
	int	tmp = static_cast<int>(std::strtod(str.c_str(), &last_c_str)); // 10 pour base 10 (0123456789)
	if (tmp < -std::numeric_limits<int>::max() || tmp > std::numeric_limits<int>::max()) {
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << tmp << std::endl;
}

void convertToDouble(std::string str) {
	char *last_c_str;
	double	tmp = std::strtod(str.c_str(), &last_c_str);
	if (tmp < -std::numeric_limits<double>::max() || tmp > std::numeric_limits<double>::max()) {
        std::cout << "double: impossible" << std::endl;
		return ;
	}
	std::cout << "double: " << tmp;
	if ( tmp == static_cast<int>(tmp)) // si pas de nombre apres la virgule, print le .0
		std::cout << ".0";
	std::cout << std::endl;
}

void ScalarConverter::convert(std::string str) {
    convertToChar(str);
	convertToInt(str);
	convertToFloat(str);
	convertToDouble(str);
}