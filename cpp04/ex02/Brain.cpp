#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor is called!" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor is called!" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->ideas = other.ideas;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called!" << std::endl;
}
