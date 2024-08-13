#include "Dog.hpp"

Dog::Dog(void) : Animal() {
    std::cout << "Default Constructor of Dog Call !" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog &obj) : Animal() {
    std::cout << "Copy Constructor of Dog Call !" << std::endl;
    this->type = obj.type;
    this->brain = obj.brain;
}

Dog::~Dog(void) {
    std::cout << "Destructor of Dog Call !" << std::endl;
    delete this->brain;
}

Dog& Dog::operator=(const Dog &obj) {
    this->type = obj.type;
    this->brain = obj.brain;
    return (*this);
}

void Dog::makeSound(void) const{
    std::cout << "BARK BARK" << std::endl;
}