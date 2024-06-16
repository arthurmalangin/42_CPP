#include <iostream>

int main(int argc, char **argv) {
    std::string finalString = "";

    if (!argv[1]) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++) {
        std::string tmp = argv[i];
        for (int j = 0; j < (int)tmp.length(); j++) {
            finalString += std::toupper(argv[i][j]);
        }
        finalString += ' ';
    }
    std::cout << finalString << std::endl;
    return (0);
}