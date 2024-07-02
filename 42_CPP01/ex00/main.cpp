#include "Zombie.hpp"

int main(void) {
    Zombie *heapman = Zombie::newZombie("Heapman");
    heapman->announce();

    Zombie::randomChump("Stackman");
    delete heapman;

    return 0;
}