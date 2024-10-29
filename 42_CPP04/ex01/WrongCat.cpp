#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat"){
    std::cout << "\033[32mDefault Constructor of WrongCat Call !\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj){
    std::cout << "\033[32mCopy Constructor of WrongCat Call !\033[0m" << std::endl;
}

WrongCat::~WrongCat(void) {
    std::cout << "\033[31mDestructor of WrongCat Call !\033[0m" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &obj) {
    this->type = obj.type;
    
    return (*this);
}

void WrongCat::makeSound(void) const {
    std::cout << "\033[33mMiaouuuuuu\033[0m" << std::endl;
}