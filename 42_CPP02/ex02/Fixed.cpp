#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->nb = 0;
}

Fixed::Fixed(const Fixed &obj) { // On prend la reference de obj
    *this = obj;
}

Fixed::Fixed(const int nb) {
    this->nb = nb << this->bits; //Decale les bit a gauche, a pour effet de multiplier nb par 2 a la puissance de this->bits
}

Fixed::Fixed(const float nb) {
    this->nb = roundf(nb * (1 << this->bits));
}

Fixed& Fixed::operator=(const Fixed &obj) { // Pour definir le comportement de l'operateur d'affectation ( Fixed a = b)
    this->nb = obj.getRawBits();
    return (*this);
}

Fixed::~Fixed(void) {
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
//   |   Fixed:: > const Fixed &obj |
bool Fixed::operator>(const Fixed &obj) {
    return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator<(const Fixed &obj) {
    return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator>=(const Fixed &obj) {
    return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed &obj) {
    return (this->getRawBits() <= obj.getRawBits());
}

bool Fixed::operator==(const Fixed &obj) {
    return (this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed &obj) {
    return (this->getRawBits() != obj.getRawBits());
}

Fixed Fixed::operator+(const Fixed &obj) {
    Fixed tmp;

    tmp.nb = this->getRawBits() + obj.getRawBits();
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &obj) {
    Fixed tmp;

    tmp.nb = this->getRawBits() - obj.getRawBits(); 
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &obj) {
    Fixed tmp;

    tmp.nb = (this->getRawBits() * (1 << this->bits)) / obj.getRawBits();
    return (tmp);
}

Fixed Fixed::operator*(const Fixed &obj) {
    Fixed tmp;

    tmp.nb = (this->getRawBits() * obj.getRawBits()) / (1 << this->bits);
    return (tmp);
}

Fixed& Fixed::operator++(void) {
    this->nb++;
    return (*this);
}

// Post incrementation, on rajoute int par convention pour que le comilateur comprennent qu'il s'agit de la post incrementation
Fixed Fixed::operator++(int) {
    Fixed tmp(*this);

    this->nb++;
    return tmp;
}

Fixed& Fixed::operator--(void) {
    this->nb--;
    return (*this);
}

// Post incrementation, on rajoute int par convention pour que le comilateur comprennent qu'il s'agit de la post incrementation
Fixed Fixed::operator--(int) {
    Fixed tmp(*this);

    this->nb--;
    return (*this);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}

const Fixed& Fixed::min(const Fixed &a,const Fixed &b) {
    return (a.getRawBits() > b.getRawBits() ? b : a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a.getRawBits() < b.getRawBits() ? b : a);
}

const Fixed& Fixed::max(const Fixed &a,const Fixed &b) {
    return (a.getRawBits() < b.getRawBits() ? b : a);
}