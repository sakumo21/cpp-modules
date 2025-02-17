#include "ClapTrap.hpp"

int main( void ) 
{
    ClapTrap p1("hog rider");
    ClapTrap p2("log");

    p1.get_stats();
    p2.get_stats();
    p1.attack("log");
    p2.takeDamage(0);
    p2.beRepaired(5);
    p2.attack("hog rider");
    p1.takeDamage(0);
    p1.beRepaired(1);
    p1.get_stats();
    p2.get_stats();
    return 0;
}