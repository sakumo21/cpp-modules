#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie *zombiehord = new Zombie[N];
	for (int i = 0; i < N; i++)
		new (&zombiehord[i]) Zombie(name);
	return (zombiehord);
}

int	main()
{
	Zombie *zombiehord = zombieHorde(10, "nigga");
	for (int i = 0; i < 10; i++)
		zombiehord[i].announce();
	delete[] zombiehord;
}
