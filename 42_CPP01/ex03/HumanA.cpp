#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _w(weapon) {
}

HumanA::~HumanA(void) {
    std::cout << this->_name << " detroyed..." << std::endl;
}

void HumanA::attack(void) {
    std::cout << this->_name << "  attacks with their " << _w.getType() << std::endl;
}