#ifndef HUMANA_CPP
#define HUMANA_CPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
    public:
        HumanA(std::string name, Weapon &w);
        ~HumanA(void);
        void attack(void);
    private:
        std::string _name;
        Weapon &_w;
};

#endif