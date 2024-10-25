#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    std::cout << "\033[32mDefault Constructor of Dog Call !\033[0m" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj) {
    std::cout << "\033[32mCopy Constructor of Dog Call !\033[0m" << std::endl;
}

Dog::~Dog(void) {
    std::cout << "\033[31mDestructor of Dog Call !\033[0m" << std::endl;
}

Dog& Dog::operator=(const Dog &obj) {
    this->type = obj.type;
    return (*this);
}

void Dog::makeSound(void) const{
    std::cout << "\033[33mBARK BARK\033[0m" << std::endl;
}