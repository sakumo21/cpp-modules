#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog's default constructor has been called!" << std::endl;
	type = "Dog";
}

void Dog::makeSound() const
{
	std::cout << "haw haw (exuse me sir did you know that dogs are humans best friend 🤓☝️)" << std::endl;
}