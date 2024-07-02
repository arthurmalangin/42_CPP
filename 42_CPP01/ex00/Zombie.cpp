#include "Zombie.hpp"

Zombie::Zombie(void) {

}

Zombie::Zombie(std::string Name) {
    this->_Name = Name;
}

Zombie *Zombie::newZombie(std::string Name) {
    Zombie *z = new Zombie(Name);
    
    return z;
}

void Zombie::announce(void) {
    std::cout << _Name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::randomChump( std::string Name ) {
    Zombie zombie(Name);
    zombie.announce();
}

Zombie::~Zombie(void) {
    std::cout << _Name << " destroyed..." << std::endl;  
}