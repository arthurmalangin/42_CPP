#include "Cure.hpp"

Cure::Cure() : AMateria::AMateria("cure") {
}

Cure::Cure(const Cure &obj) : AMateria::AMateria(obj) {
	*this = obj;
}

Cure::~Cure() {
}

Cure	&Cure::operator=(const Cure &obj) {
	this->_type = obj.getType();
	return (*this);
}

Cure	*Cure::clone() const {
	if (this->_type != "cure")
		return (NULL);
	Cure *clone = new Cure();
	clone->setType(this->_type);
	return (clone);
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}