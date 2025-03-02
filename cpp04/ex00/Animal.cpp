#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal's default constructor has been called!" << std::endl;
	type = "None";
}

void Animal::makeSound() const
{
	std::cout << "<Animal sound!!>" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}