#include "Fixed.hpp"

static	float ft_pow(float base, int exp)
{
	float	result;

	if (!exp)
		return (1);
	if (exp < 0)
	{
		base = 1 / base;
		exp *= -1;
	}
	result = base;
	while (--exp)
		result *= base;
	return (result);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed = other.getRawBits();
    return *this;
}

Fixed::Fixed():fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called!" << std::endl;
    *this = other;
}

int Fixed::getRawBits( void ) const
{
    return (this->fixed); 
}
void Fixed::setRawBits( int const raw )
{
    this->fixed = raw;
}

const int Fixed::fract = 8;

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed = i << this->fract;
}

Fixed::Fixed(const float i)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed = roundf(i * 256);
}

float Fixed::toFloat( void ) const  
{
    return (this->fixed * ft_pow(2, -this->fract));
}
int Fixed::toInt( void ) const
{
    return (this->fixed / 256);
}