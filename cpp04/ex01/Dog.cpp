#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor is called!" << std::endl;
    type = "Dog";
    dog_brain = new Brain();
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog copy constructor is called!" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
    delete this->dog_brain;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound!" << std::endl;
}
