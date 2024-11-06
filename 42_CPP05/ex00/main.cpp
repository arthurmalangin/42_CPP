#include "Bureaucrat.hpp"

int main(void) {
    try {
        Bureaucrat b("n", 152);
    } catch (std::exception &e) {
        std::cerr << "ERROR: " << e.what() << std::endl;
    }
    Bureaucrat polo("polo", 10);
    std::cout << polo << std::endl;
    Bureaucrat pablo(polo);

    return (0);
}