#include <iostream>
#include "Fixed.hpp"
int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
	}
// 	Fixed::Fixed(const float i): fixed(roundf(i * ft_pow(2, this->fract)))
// {  
// 	std::cout << "Float constructor called" << std::endl; 
// } 

// float Fixed::toFloat( void ) const  
// {
//     return (this->fixed * ft_pow(2, -this->fract));
// }