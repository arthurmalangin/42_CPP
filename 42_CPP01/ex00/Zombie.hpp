#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        void announce(void);
        Zombie(void);
        ~Zombie(void);
        Zombie(std::string Name);
        static Zombie *newZombie( std::string Name);
        void randomChump( std::string Name );
    private:
        std::string _Name;
};

#endif