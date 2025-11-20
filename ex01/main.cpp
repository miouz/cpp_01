#include "Zombie.hpp"

int	main(void)
{
	//test for verifying zombieHorde function;
	Zombie* zombieHorde = Zombie::zombieHorde(8, "an ordinary zombie");
	if (zombieHorde)
	{
		for (int i = 0; i < 8; i++)
			zombieHorde[i].announce();
		for (int k = 0; k < 8; k++)
			zombieHorde[k].~Zombie();
	}
	operator delete[](zombieHorde);
	return (EXIT_SUCCESS);
}
