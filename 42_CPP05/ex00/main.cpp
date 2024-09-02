#include "Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat b(152);
    } catch (std::exception &e) {
        std::cerr << "ERROR: " << e.what() << std::endl;
    }
    Bureaucrat polo(10);
    std::cout << polo << std::endl;
    
    return (0);
}