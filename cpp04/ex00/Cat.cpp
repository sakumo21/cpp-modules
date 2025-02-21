#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor is called!" << std::endl;
    type = "Cat";
}
Cat::Cat(const Cat& other)
{
    std::cout << "Cat copy constructor is called!" << std::endl;
    *this = other;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "cat sound!" << std::endl;
}