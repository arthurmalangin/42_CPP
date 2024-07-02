#include "Zombie.hpp"

Zombie::Zombie(void) {

}

void Zombie::setName(std::string Name) {
    this->_Name = Name;
}

Zombie::Zombie(std::string Name) {
    this->_Name = Name;
}

void Zombie::announce(void) {
    std::cout << _Name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << _Name << " destroyed..." << std::endl;  
}