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

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = other.type;
    this->cat_brain = new Brain(*other.cat_brain);
    return *this;
}

void Cat::setidea(int i, std::string idea)
{
    cat_brain->setidea(i, idea);
}
std::string Cat::getidea(int i)
{
    cat_brain->getidea(i);
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
