#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
    Fixed():fixed(0){std::cout << "Default constructor called" << std::endl;}
    ~Fixed(){std::cout << "Destructor called" << std::endl;}
    Fixed(const Fixed& other)
    {
        std::cout << "Copy constructor called!" << std::endl;
        *this = other;
    }
    Fixed& operator=(const Fixed& other)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->fixed = other.getRawBits();
        return *this;
    }

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    private:
    int                 fixed;
    static const int    fract;
};

#endif