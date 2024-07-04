#include "Weapon.hpp"

Weapon::Weapon(void) {

}

Weapon::Weapon(std::string type) : _type(type) {
    
}

const std::string &Weapon::getType() {
    const std::string &typeRef = this->_type;
    return (typeRef);
}

void Weapon::setType(std::string type) {
    this->_type = type;
}