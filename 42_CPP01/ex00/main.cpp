#include "Zombie.hpp"

int main(void) {
    Zombie *heapman = Zombie::newZombie("Heapman");
    heapman->announce();

    Zombie z;
    z.randomChump("Stackman");
    delete heapman;

    return 0;
}