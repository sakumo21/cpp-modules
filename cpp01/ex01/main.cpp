#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
    if (N > 0)
    {
    	Zombie *zombiehord = new Zombie[N];
        if (!zombiehord)
            return (NULL);
        for (int i = 0; i < N; i++)
	    	new (&zombiehord[i]) Zombie(name);
	    return (zombiehord);
    }
    else
        return (NULL);
}

int	main()
{
	Zombie *zombiehord = zombieHorde(2147483646, "roar!!");
    if (!zombiehord)
    {
        std::cout << "ERROR!: N is wrong" << std::endl;
        return (0);
    }
	for (int i = 0; i < 1; i++)
		zombiehord[i].announce();
	delete[] zombiehord;
}
