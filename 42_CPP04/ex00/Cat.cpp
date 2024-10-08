#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Default Constructor of Cat Call !" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &obj) {
    std::cout << "Copy Constructor of Cat Call !" << std::endl;
    this->type = obj.type;
}

Cat::~Cat(void) {
    std::cout << "Destructor of Cat Call !" << std::endl;
}

Cat& Cat::operator=(const Cat &obj) {
    this->type = obj.type;
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "Miaouuuuuu" << std::endl;
}