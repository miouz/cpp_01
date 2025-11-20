#include "Zombie.hpp"

void	creatStackZombie()
{
	Zombie	stackZombie("stackZombie");
	
	stackZombie.announce();
}

void	creatHeapZombie(Zombie** ptr)
{
	*ptr = newZombie("heapZombie");
}

int	main(void)
{
	Zombie*	heapZombie = nullptr;

	//test for verifing stack zombie;
	creatStackZombie();

	//test for verifing heap zombie via pointer;
	creatHeapZombie(&heapZombie);
	heapZombie->announce();
	delete heapZombie;

	//test for verifing randomChum member function;
	randomChump("newRandomZombie");

	return (EXIT_SUCCESS);
}
