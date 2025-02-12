#include "Fixed.hpp"

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed); 
}
void Fixed::setRawBits( int const raw )
{
    this->fixed = raw;
}