#include "Dog.hpp"

Dog::Dog(void) {
    this->type = "Dog";
    std::cout << "Default Constructor of Dog Call !" << std::endl;
}

Dog::Dog(const Dog &obj) {
    this->type = obj.type;
    std::cout << "Copy Constructor of Dog Call !" << std::endl;
}

Dog::~Dog(void) {
    std::cout << "Destructor of Dog Call !" << std::endl;
}

Dog& Dog::operator=(const Dog &obj) {
    this->type = obj.type;
    return (*this);
}

void Dog::makeSound(void) const{
    std::cout << "BARK BARK" << std::endl;
}