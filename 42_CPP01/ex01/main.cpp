#include "Zombie.hpp"

int main(void) {
    Zombie *horde = zombieHorde(25, "Horde");
    for (int i = 0; i < 25; i++) {
        horde[i].announce();
    }
    
    delete []horde;

    return 0;
}