#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor is called!" << std::endl;
    type = "Cat";
    cat_brain = new Brain();
}
Cat::Cat(const Cat& other): Animal(other)
{
    std::cout << "Cat copy constructor is called!" << std::endl;
    
    this->cat_brain = new Brain(*other.cat_brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = other.type;
    delete this->cat_brain;
    this->cat_brain = new Brain(*other.cat_brain);
    return *this;
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