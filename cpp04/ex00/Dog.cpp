#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor is called!" << std::endl;
    type = "Dog";
}
Dog::Dog(const Dog& other)
{
    std::cout << "Dog copy constructor is called!" << std::endl;
    *this = other;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound!" << std::endl;
}