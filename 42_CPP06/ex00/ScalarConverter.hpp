#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>

class ScalarConverter {
    public:
        /*====== Constructor/Destructor ======*/
        ~ScalarConverter(void);
        /*====== Operator ======*/
        static void convert(std::string str);
	private:
        	ScalarConverter &operator=(const ScalarConverter &obj);
			ScalarConverter(void);
        	ScalarConverter(const ScalarConverter &obj);

};

#endif