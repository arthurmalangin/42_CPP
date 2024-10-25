#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Default"){
    std::cout << "\033[32mDefault Constructor of WrongAnimal Call with type : " << this->getType() << " !\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << "\033[32mSetter Constructor of WrongAnimal Call with type : " << this->getType() << " !\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
    std::cout << "\033[32mCopy Constructor of WrongAnimal Call !\033[0m" << std::endl;
    this->type = obj.type;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "\033[31mDestructor of WrongAnimal Call with type : " << this->getType() << " !\033[0m" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj) {
    this->type = obj.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const {
    std::cout << "\033[33mWrong Default Make Sound\033[0m" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return (this->type);
}