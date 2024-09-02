#ifndef HUMANB_CPP
#define HUMANB_CPP

#include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void setWeapon(Weapon &w);
        void attack(void);
    private:
        std::string _name;
        Weapon *_w;
        bool haveArm;
};

#endif