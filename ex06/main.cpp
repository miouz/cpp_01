#include "Harl.hpp"
#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "say one thing and only one thing Harl\n";
		return (EXIT_FAILURE);
	}
	Harl	oneHarl;
	oneHarl.complain(argv[1]);
	return (EXIT_SUCCESS);
}
