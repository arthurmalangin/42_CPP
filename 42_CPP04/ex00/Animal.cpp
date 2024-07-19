#include "Animal.hpp"

Animal::Animal(void) {
    this->type = "Default";
    std::cout << "Default Constructor of Animal Call !" << std::endl;
}

Animal::Animal(const Animal &obj) {
    this->type = obj.type;
    std::cout << "Copy Constructor of Animal Call !" << std::endl;
}

Animal::~Animal(void) {
    std::cout << "Destructor of Animal Call !" << std::endl;
}

Animal& Animal::operator=(const Animal &obj) {
    this->type = obj.type;
    return (*this);
}

void Animal::makeSound(void) const {
}

std::string Animal::getType(void) const {
    return (this->type);
}