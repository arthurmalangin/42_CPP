#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "\033[32mBrain default constructor call\033[0m" << std::endl;
}

Brain::Brain(const Brain &obj) {
    std::cout << "\033[32mBrain copy constructor call\033[0m" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = obj.ideas[i];
    }
}

Brain::~Brain(void) {
    std::cout << "\033[31mBrain destructor call\033[0m" << std::endl;
}

Brain& Brain::operator=(const Brain &obj) {
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = obj.ideas[i];
    }
    return (*this);
}

