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

void Brain::setidea(int i, std::string idea)
{
    ideas[i] = idea;
}
std::string Brain::getidea(int i)
{
    if (ideas[i])
        return (ideas[i]);
    return ("no idea!");
}

Brain::~Brain()
{
    std::cout << "Brain destructor called!" << std::endl;
}
