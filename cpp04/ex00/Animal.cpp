#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor is called!" << std::endl;
    type = "N/A";
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor is called!" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called!" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const
{
    return(this->type);
}
