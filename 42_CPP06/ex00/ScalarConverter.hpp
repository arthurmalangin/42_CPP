#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter {
    public:
        /*====== Constructor/Destructor ======*/
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &obj);
        ~ScalarConverter(void);
        /*====== Operator ======*/
        virtual ScalarConverter &operator=(const ScalarConverter &obj) = 0;
        static void convert(std::string str);
};

#endif