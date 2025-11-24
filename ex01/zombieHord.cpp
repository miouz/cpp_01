#include "Zombie.hpp"
#include <iostream>
#include <new>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombieHorde = (Zombie*)::operator new(N * sizeof(Zombie));
	if (zombieHorde == NULL)
	{
		std::cerr << "memory allocate failed\n";
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		new(&zombieHorde[i])Zombie(name);
	return (zombieHorde);
}
