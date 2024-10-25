#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
    std::cout << "\033[32mDefault Constructor of Cat Call !\033[0m" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj){
    std::cout << "\033[32mCopy Constructor of Cat Call !\033[0m" << std::endl;
}

Cat::~Cat(void) {
    std::cout << "\033[31mDestructor of Cat Call !\033[0m" << std::endl;
}

Cat& Cat::operator=(const Cat &obj) {
    this->type = obj.type;
    return (*this);
}

void Cat::makeSound(void) const {
    std::cout << "\033[33mMiaouuuuuu\033[0m" << std::endl;
}