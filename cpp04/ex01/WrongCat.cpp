#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor is called!" << std::endl;
    type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat copy constructor is called!" << std::endl;
    *this = other;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrongcat sound!" << std::endl;
}