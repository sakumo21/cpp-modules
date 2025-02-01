#include "Zombie.hpp"

int	main() 
{
	std::cout << "Creating the first Zombie, Mohammed, \"manually\"" << std::endl;
	{
		Zombie	robert("Mohammed");
		robert.announce();
	}

	std::cout << "Creating the second Zombie, Hamza, using the function newZombie" << std::endl;
	{
		Zombie	*georges = newZombie("Hamza");
		georges->announce();
		delete georges;
	}
	{
		std::cout << "Creating the third Zombie, Samir, using the function randomChump" << std::endl;
		randomChump("Samir");
	}
}
