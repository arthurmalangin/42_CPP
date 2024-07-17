#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->nb = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) { // On prend la reference de obj
    std::cout << "Copy constructor called" << std::endl;
    this->nb = obj.getRawBits();
}


Fixed& Fixed::operator=(const Fixed &obj) { // Pour definir le comportement de l'operateur d'affectation ( Fixed a = b)
    std::cout << "Copy assignment operator called" << std::endl;
    this->nb = obj.getRawBits();
    return *this;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const { // on rajoute const pour qu'elle ne modifier pas les donnes du membre sur lequel elle est appellee
    std::cout << "getRawBits member function called" << std::endl;
    return this->nb;
}

void Fixed::setRawBits( int const raw ) {
    this->nb  =  raw;
}