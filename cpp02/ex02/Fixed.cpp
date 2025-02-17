#include "Fixed.hpp"

const int Fixed::fract = 8;

Fixed::Fixed():fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

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

int Fixed::getRawBits( void ) const
{
    return (this->fixed); 
}
void Fixed::setRawBits( int const raw )
{
    this->fixed = raw;
}

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

bool Fixed::operator>(const Fixed& other) const
{
    return (this->fixed > other.fixed);
}

bool Fixed::operator<(const Fixed& other) const
{
    return (this->fixed < other.fixed);
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (this->fixed >= other.fixed);
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (this->fixed <= other.fixed);
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->fixed != other.fixed);
}

bool Fixed::operator==(const Fixed& other) const
{
    return (this->fixed == other.fixed);
}

Fixed Fixed::operator+(const Fixed& other)
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other)
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other)
{
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other)
{
    return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++()
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed& Fixed::operator--()
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}
