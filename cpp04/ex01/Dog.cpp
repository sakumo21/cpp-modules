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
Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
    delete this->dog_brain;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound!" << std::endl;
}

// Brain& Dog::get_brain()
// {
//     return (*dog_brain);
// }

// void Dog::set_brain(Brain &brain)
// {
//     dog_brain = &brain;
// }