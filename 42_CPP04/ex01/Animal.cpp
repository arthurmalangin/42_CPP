#include "Animal.hpp"

Animal::Animal(void) : type("Default"){
    std::cout << "\033[32mDefault Constructor of Animal Call with type : " << this->getType() << " !\033[0m" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
    std::cout << "\033[32mSetter Contructor of Animal Call With Type : " << this->getType() << " !\033[0m" << std::endl;
}

Animal::Animal(const Animal &obj) {
    std::cout << "\033[32mCopy Constructor of Animal Call !" << std::endl;
    this->type = obj.type;
}

Animal::~Animal(void) {
    std::cout << "\033[31mDestructor of Animal Call with type : " << this->getType() << " !\033[0m" << std::endl;
}

Animal& Animal::operator=(const Animal &obj) {
    std::cout << "operator animal call !=========================" << std::endl;
    this->type = obj.type;
    return (*this);
}

void Animal::makeSound(void) const {
    std::cout << "\033[33mDefault Make Sound\033[0m" << std::endl;
}

std::string Animal::getType(void) const {
    return (this->type);
}