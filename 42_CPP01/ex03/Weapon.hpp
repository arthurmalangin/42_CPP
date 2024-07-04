#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <iostream>

class Weapon {
    public:
        Weapon(void);
        Weapon(std::string type);
        void setType(std::string type);
        const std::string &getType();
    private:
        std::string _type;
};

#endif