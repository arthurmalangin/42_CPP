#include <iostream>

int main(void) {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "String: " << &string << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << std::endl;

    std::cout << "String value : " << string << std::endl;
    std::cout << "StringPTR value : " << *stringPTR << std::endl;
    std::cout << "StringREF value : " << stringREF << std::endl;
    
    return 0;
}