#include "Zombie.hpp"

int main(void) {
    Zombie *heapman = newZombie("Heapman");
    heapman->announce();

    randomChump("Stackman");
    delete heapman;

    return 0;
}