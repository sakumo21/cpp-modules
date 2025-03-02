#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat's default constructor has been called!" << std::endl;
	type = "Cat";
}

void Cat::makeSound() const
{
	std::cout << "meaw meaw nigga wassup" << std::endl;
}