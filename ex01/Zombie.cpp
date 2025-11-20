#include "Zombie.hpp"
#include <iostream>
#include <new>

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << name << " is destroyed\n";
}

void	Zombie::announce(void)
{
	std::cout << name << " :BraiiiiiiinnnzzzZ...\n";
}

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie* zombieHorde = (Zombie*)::operator new(N * sizeof(Zombie));
	if (zombieHorde == nullptr)
	{
		std::cerr << "memory allocate failed\n";
		return (nullptr);
	}
	for (int i = 0; i < N; i++)
		new(&zombieHorde[i])Zombie(name);
	return (zombieHorde);
}
