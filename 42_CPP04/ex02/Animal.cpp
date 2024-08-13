#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Default Constructor of Animal Call with type : " << this->getType() << " !" << std::endl;
    this->type = "Default";
}

Animal::Animal(const Animal &obj) {
    std::cout << "Copy Constructor of Animal Call !" << std::endl;
    this->type = obj.type;
}

Animal::~Animal(void) {
    std::cout << "Destructor of Animal Call with type : " << this->getType() << " !" << std::endl;
}

Animal& Animal::operator=(const Animal &obj) {
    this->type = obj.type;
    return (*this);
}

void Animal::makeSound(void) const {
    std::cout << "Default Make Sound" << std::endl;
}

std::string Animal::getType(void) const {
    return (this->type);
}