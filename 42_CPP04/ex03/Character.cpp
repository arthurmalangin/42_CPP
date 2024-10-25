#include "Character.hpp"

Character::Character() : _name("") {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character &obj) {
	for (int i = 0; i < 4; i++) {
        this->_inventory[i] = obj.getInv(i);
    }
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

AMateria	*Character::getInv(int i) const {
	return (this->_inventory[i]);
}

Character	&Character::operator=(const Character &obj) {
	this->_name = obj.getName();
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (obj.getInv(i))
			this->_inventory[i] = obj.getInv(i)->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

std::string const	&Character::getName(void) const {
	return (this->_name);
}

void	Character::equip(AMateria *m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			std::cout << "Equip " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << "Inventory of " << this->_name << " is full!" << std::endl;
	delete m;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return;
	if (this->_inventory[idx]) {
		std::cout << "unequiping " << this->_inventory[idx]->getType() << std::endl;
		this->_inventory[idx] = NULL;
		return;
	}
	std::cout << "The slot " << idx << " is already empty!" << std::endl;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		std::cerr << "Wrong index" << std::endl;
	else if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	return;
}