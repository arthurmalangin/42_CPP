#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain default constructor call" << std::endl;
}

Brain::Brain(const Brain &obj) {
    std::cout << "Brain copy constructor call" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = obj.ideas[i];
    }
}

Brain::~Brain(void) {
    std::cout << "Brain destructor call" << std::endl;
}

Brain& Brain::operator=(const Brain &obj) {
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = obj.ideas[i];
    }
    return (*this);
}

