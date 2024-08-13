#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Default Constructor of Cat Call !" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &obj) {
    std::cout << "Copy Constructor of Cat Call !" << std::endl;
    this->type = obj.type;
    this->brain = obj.brain;
}

Cat::~Cat(void) {
    std::cout << "Destructor of Cat Call !" << std::endl;
    delete this->brain;
}

Cat& Cat::operator=(const Cat &obj) {
    this->type = obj.type;
    this->brain = obj.brain;
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "Miaouuuuuu" << std::endl;
}