#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    if (N > 0) {
        Zombie *horde = new Zombie[N];
        for (int i = 0; i < N; i++) {
            horde[i].setName(name);
        }
        return horde;
    }
    else {
        std::cout << "ZombieHorde: Null or negative value" << std::endl;
    }
    return NULL;
}