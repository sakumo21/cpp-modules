#include "ScavTrap.hpp"

int main( void ) 
{
    ScavTrap p1("P.E.K.K.A", "hog rider");
    ScavTrap p2("Goblin machine","prince");

    p1.ClapTrap::get_stats();
    p2.ClapTrap::get_stats();
    p1.get_stats();
    p2.get_stats();
    p1.attack("Goblin machine");
    p2.attack("P.E.K.K.A");
    return 0;
}
