#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor is called!" << std::endl;
    type = "Dog";
    dog_brain = new Brain();
}

Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Dog copy constructor is called!" << std::endl;
    this->dog_brain = new Brain(*other.dog_brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = other.type;
    delete this->dog_brain;
    this->dog_brain = new Brain(*other.dog_brain);
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
