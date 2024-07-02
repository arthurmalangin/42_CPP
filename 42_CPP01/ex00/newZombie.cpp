#include "Zombie.hpp"

Zombie *newZombie(std::string Name) {
    Zombie *z = new Zombie(Name);
    
    return z;
}