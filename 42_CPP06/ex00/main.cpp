#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cout << "Error: Bad arguments <./convert STRING>" << std::endl;
    }
    ScalarConverter::convert(std::string(argv[1]));
}