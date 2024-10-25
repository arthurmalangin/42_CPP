#include "AMateria.hpp"

AMateria::AMateria(void) {
}

AMateria::AMateria(std::string type) : _type(type) {
}

AMateria::AMateria(const AMateria &obj) {
	*this = obj;
}

AMateria::~AMateria(void) {
}

AMateria	&AMateria::operator=(const AMateria &obj) {
	this->_type = obj.getType();
	return (*this);
}

std::string const	&AMateria::getType(void) const {
	return (this->_type);
}

void	AMateria::setType(std::string type) {
	this->_type = type;
}

void	AMateria::use(ICharacter &target) {
	(void)target;
}