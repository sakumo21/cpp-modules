#include "Zombie.hpp"

int	main() 
{
	std::cout << "Creating the first Zombie, Mohammed, \"manually\"" << std::endl;
	{
		Zombie	Mohammed("Mohammed");
		Mohammed.announce();
	}

	std::cout << "Creating the second Zombie, Hamza, using the function newZombie" << std::endl;
	{
		Zombie	*Hamza = newZombie("Hamza");
		Hamza->announce();
		delete Hamza;
	}
	{
		std::cout << "Creating the third Zombie, Samir, using the function randomChump" << std::endl;
		randomChump("Samir");
	}
}
