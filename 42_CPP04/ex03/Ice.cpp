#include "Ice.hpp"

Ice::Ice(void) : AMateria::AMateria("ice") {
}

Ice::Ice(const Ice &obj) : AMateria::AMateria(obj) {
	*this = obj;
}

Ice::~Ice(void) {
}

Ice	&Ice::operator=(const Ice &obj) {
	this->_type = obj.getType();
	return (*this);
}

Ice	*Ice::clone(void) const {
	if (this->_type != "ice")
		return (NULL);
	Ice *clone = new Ice();
	clone->setType(this->_type);
	return (clone);
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}