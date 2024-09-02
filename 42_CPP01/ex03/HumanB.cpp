#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->_name = name;
    this->haveArm = false;
}

void HumanB::setWeapon(Weapon &w) {
    this->_w = &w;
    this->haveArm = true;
}

HumanB::~HumanB(void) {
    std::cout << this->_name << " detroyed..." << std::endl;
}

void HumanB::attack(void) { 
    if (this->haveArm && this->_w)
        std::cout << this->_name << " attacks with their " << _w->getType() << std::endl;
    else
        std::cout << this->_name << " can't attack without Arm" << std::endl;
}