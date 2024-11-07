#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ScalarConverter {
    public:
        /*====== Constructor/Destructor ======*/
        ~ScalarConverter(void);
        /*====== Operator ======*/
        virtual ScalarConverter &operator=(const ScalarConverter &obj);
        static void convert(std::string str);
		private:
			ScalarConverter(void);
        	ScalarConverter(const ScalarConverter &obj);

};

#endif