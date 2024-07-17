#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed;

std::ostream& operator<<(std::ostream &stream, const Fixed& obj);

class Fixed {
    public:
        Fixed(void);
        Fixed(const Fixed &obj);
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed& operator=(const Fixed &obj);
        ~Fixed(void);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
    private:
        int nb;
        static int const bits = 8;
};

#endif