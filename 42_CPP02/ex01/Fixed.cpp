#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->nb = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) { // On prend la reference de obj
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const int nb) {
    std::cout << "Int constructor called" << std::endl;
    this->nb = nb << this->bits; //Decale les bit a gauche, a pour effet de multiplier nb par 2 a la puissance de this->bits
}

Fixed::Fixed(const float nb) {
    std::cout << "Float constructor called" << std::endl;
    this->nb = roundf(nb * (1 << this->bits));
}

Fixed& Fixed::operator=(const Fixed &obj) { // Pour definir le comportement de l'operateur d'affectation ( Fixed a = b)
    std::cout << "Copy assignment operator called" << std::endl;
    this->nb = obj.getRawBits();
    return (*this);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const { // on rajoute const pour qu'elle ne modifier pas les donnes du membre sur lequel elle est appellee
    return (this->nb);
}

void Fixed::setRawBits( int const raw ) {
    this->nb = raw;
}
float Fixed::toFloat(void) const {
    return (this->nb / static_cast<float>(1 << this->bits)); // static_cast<float> pour les virgules
}

int Fixed::toInt(void) const {
    return (roundf(this->nb / (1 << this->bits)));
}

/* Explications:
<< prend deux operandes le flux de sortie a gauche et la valeur a afficher a droite
on renvoie stream (std::cout) sinon le prochain "<<" ne pourrais pas se faire car il aura perdu std::cout
*/
std::ostream& operator<<(std::ostream &stream, const Fixed& obj)
{
    stream << obj.toFloat();
    return stream;
}