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
    DiamondTrap ash( "Ash" );
    DiamondTrap ash2( ash );
    DiamondTrap ash3(".");

    ash.whoAmI();
    ash2.whoAmI();
    ash3 = ash;
    ash3.whoAmI();

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );

    return EXIT_SUCCESS;
}