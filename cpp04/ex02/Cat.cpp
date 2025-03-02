#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor is called!" << std::endl;
    type = "Cat";
    cat_brain = new Brain();
}
Cat::Cat(const Cat& other)
{
    std::cout << "Cat copy constructor is called!" << std::endl;
    *this = other;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
    delete cat_brain;
}

void Cat::makeSound() const
{
    std::cout << "cat sound!" << std::endl;
}