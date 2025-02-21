#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor is called!" << std::endl;
    type = "N/A";
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy constructor is called!" << std::endl;
    *this = other;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called!" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(this->type);
}