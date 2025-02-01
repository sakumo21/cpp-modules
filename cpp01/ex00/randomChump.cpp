#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie *newzombie = newZombie(name);
    newzombie->announce();
    delete newzombie;
}
