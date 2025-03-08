#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
    std::cout << "Default constructor called!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie(" << name << ") has  been killed" << "\n";
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << "\n"; 
}
