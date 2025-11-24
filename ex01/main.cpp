#include "Zombie.hpp"
#include <cstdlib>

int	main(void)
{
	//test for verifying zombieHorde function;
	Zombie* zombies = zombieHorde(8, "an ordinary zombie");
	if (zombies)
	{
		for (int i = 0; i < 8; i++)
			zombies[i].announce();
		for (int k = 0; k < 8; k++)
			zombies[k].~Zombie();
	}
	operator delete(zombies);
	return (EXIT_SUCCESS);
}
