#include "Zombie.hpp"

int main(void) {
    Zombie *heapman = newZombie("Heapman");
    heapman->announce();

    randomChump("Stackman");
    delete heapman;

    Zombie *horde = zombieHorde(25, "Horde");
    for (int i = 0; i < 25; i++) {
        horde[i].announce();
    }
    
    delete []horde;

    return 0;
}