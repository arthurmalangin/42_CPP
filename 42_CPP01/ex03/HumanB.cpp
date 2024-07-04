#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _w(new Weapon("empty hand's")){
    this->_name = name;
    this->defaultArm = true;
}

void HumanB::setWeapon(Weapon &w) {
    this->_w = &w;
    this->defaultArm = false;
}

HumanB::~HumanB(void) {
    if (this->defaultArm)
        delete _w;
    std::cout << this->_name << " detroyed..." << std::endl;
}

void HumanB::attack(void) {
    std::cout << this->_name << "  attacks with their " << _w->getType() << std::endl;
}