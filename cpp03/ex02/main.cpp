#include "FragTrap.hpp"

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

void	alice_rundown(void)
{
	FragTrap alice("Alice");

	alice.attack("Bob");
	alice.attack("Chris");
	alice.attack("Diana");
	alice.attack("Elisa");
	alice.attack("Fred");
	alice.attack("Gemma");
	alice.attack("Henry");
	alice.attack("Isabella");
	alice.attack("Jack");
	alice.attack("Kevin");
	alice.attack("Laura");
	alice.attack("Mike");
	alice.highFivesGuys();
}

void	bob_rundown(void)
{
	FragTrap	bob("Bob");

    bob.takeDamage(20);
    bob.beRepaired(10);
	bob.takeDamage(1);
	bob.highFivesGuys();
}

int	main(void)
{
	std::cout << std::endl << std::endl << "Performing Alice's rundown..." << std::endl << std::endl;
	alice_rundown();
	std::cout << std::endl << std::endl << "Performing Bob's rundown..." << std::endl << std::endl;
	bob_rundown();
}