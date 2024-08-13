#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    std::cout << "Default Constructor of WrongCat Call !" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj) {
    std::cout << "Copy Constructor of WrongCat Call !" << std::endl;
    this->type = obj.type;
}

WrongCat::~WrongCat(void) {
    std::cout << "Destructor of WrongCat Call !" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &obj) {
    this->type = obj.type;
    return (*this);
}

void WrongCat::makeSound(void) const {
    std::cout << "Miaouuuuuu" << std::endl;
}