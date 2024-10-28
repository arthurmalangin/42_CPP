#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << "\033[32mDefault Constructor of Cat Call !\033[0m" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat &obj) : Animal(obj) {
    std::cout << "\033[32mCopy Constructor of Cat Call !\033[0m" << std::endl;
    this->brain = new Brain(*obj.brain);
}

Cat::~Cat(void) {
    std::cout << "\033[31mDestructor of Cat Call !\033[0m" << std::endl;
    delete this->brain;
}

Cat& Cat::operator=(const Cat &obj) {
    std::cout << "Cat operator call !=============================" << std::endl;
    this->type = obj.type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*obj.brain);
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "\033[33mMiaouuuuuu\033[0m" << std::endl;
}