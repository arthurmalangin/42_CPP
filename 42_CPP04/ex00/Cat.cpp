#include "Cat.hpp"

Cat::Cat(void) {
    this->type = "Cat";
    std::cout << "Default Constructor of Cat Call !" << std::endl;
}

Cat::Cat(const Cat &obj) {
    this->type = obj.type;
    std::cout << "Copy Constructor of Cat Call !" << std::endl;
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