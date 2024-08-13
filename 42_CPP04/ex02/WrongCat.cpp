#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(){
    this->type = "WrongCat";
    std::cout << "Default Constructor of WrongCat Call !" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(){
    this->type = obj.type;
    std::cout << "Copy Constructor of WrongCat Call !" << std::endl;
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