#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
    Fixed();
    Fixed(const int i);
    Fixed(const float i);
    ~Fixed(){std::cout << "Destructor called" << std::endl;}
    Fixed(const Fixed& other)
    {
        *this = other;
    }
    Fixed& operator=(const Fixed& other)
    {
        this->fixed = other.getRawBits();
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
        os << obj.toFloat();
        return os;
    }

    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    Fixed operator+(const Fixed& other);
    Fixed operator-(const Fixed& other);
    Fixed operator*(const Fixed& other);
    Fixed operator/(const Fixed& other);
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
    static Fixed& min(Fixed& f1, Fixed& f2);
    static const Fixed& min(const Fixed& f1, const Fixed& f2);
    static  Fixed& max(Fixed& f1, Fixed& f2);
    static const Fixed& max(const Fixed& f1, const Fixed& f2);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

    private:
    int                 fixed;
    static const int    fract;
};

#endif