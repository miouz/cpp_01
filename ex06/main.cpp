#include "Harl.hpp"
#include <iostream>
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "say something Harl\n";
		return (EXIT_FAILURE);
	}
	Harl	oneHarl;
	oneHarl.complain(argv[1]);
	return (EXIT_SUCCESS);
}
