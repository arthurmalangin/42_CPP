#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        void announce(void);
        Zombie(void);
        ~Zombie(void);
        Zombie(std::string Name);
        void setName(std::string Name);
    private:
        std::string _Name;
};

void randomChump( std::string Name );
Zombie *newZombie( std::string Name);
Zombie* zombieHorde( int N, std::string name );
Zombie* zombieHorde( int N, std::string name );


#endif