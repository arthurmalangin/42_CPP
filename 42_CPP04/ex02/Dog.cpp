#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    std::cout << "\033[32mDefault Constructor of Dog Call !\033[0m" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj){
    std::cout << "\033[32mCopy Constructor of Dog Call !\033[0m" << std::endl;
    this->type = obj.type;
    this->brain = new Brain(*obj.brain);
}

Dog::~Dog(void) {
    std::cout << "\033[31mDestructor of Dog Call !\033[0m" << std::endl;
    delete this->brain;
}

Dog& Dog::operator=(const Dog &obj) {
    this->type = obj.type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*obj.brain);
    return (*this);
}

void Dog::makeSound(void) const{
    std::cout << "\033[33mBARK BARK\033[0m" << std::endl;
}