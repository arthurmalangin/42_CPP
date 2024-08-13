#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "Default Constructor of WrongAnimal Call with type : " << this->getType() << " !" << std::endl;
    this->type = "Default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
    std::cout << "Copy Constructor of WrongAnimal Call !" << std::endl;
    this->type = obj.type;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "Destructor of WrongAnimal Call with type : " << this->getType() << " !" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj) {
    this->type = obj.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const {
    std::cout << "Wrong Default Make Sound" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return (this->type);
}