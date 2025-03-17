#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
    Fixed(const int i);
    Fixed(const float i);
    Fixed();
    ~Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    private:
    int                 fixed;
    static const int    fract;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif