#include "DiamondTrap.hpp"

#include <cstdlib>
// int main( void ) 
// {
//     FragTrap p1("P.E.K.K.A", "hog rider");
//     FragTrap p2("Goblin machine","prince");

//     p1.ClapTrap::get_stats();
//     p2.ClapTrap::get_stats();
//     p1.get_stats();
//     p2.get_stats();
//     p1.attack("Goblin machine");
//     p2.attack("P.E.K.K.A");
//     return 0;
// }

int main( void )
{
    DiamondTrap ash( "nigga" );

    ash.DiamondTrap::get_stats();
    ash.ScavTrap::get_stats();
    ash.FragTrap::get_stats();
    ash.ClapTrap::get_stats();


    return EXIT_SUCCESS;
}