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
        ~Fixed(void);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed& operator=(const Fixed &obj);
        bool operator>(const Fixed &obj);
        bool operator<(const Fixed &obj);
        bool operator>=(const Fixed &obj);
        bool operator<=(const Fixed &obj);
        bool operator==(const Fixed &obj);
        bool operator!=(const Fixed &obj);
        Fixed operator+(const Fixed &obj);
        Fixed operator-(const Fixed &obj);
        Fixed operator/(const Fixed &obj);
        Fixed operator*(const Fixed &obj);
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);
        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a,const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a,const Fixed &b);

    private:
        int nb;
        static int const bits = 8;
};

#endif