#include "Harl.hpp"
#include <iostream>
int main(int argc, char **argv)
{
	Harl	oneHarl;

	if (argc != 2)
	{
		std::cerr << "say something Harl\n";
		exit (EXIT_FAILURE);
	}

	oneHarl.complain("DEBUG");
	std::cout << "------------------------\n";
	oneHarl.complain("INFO");
	std::cout << "------------------------\n";
	oneHarl.complain("WARNING");
	std::cout << "------------------------\n";
	oneHarl.complain("ERROR");
	std::cout << "------------------------\n";


	std::cout << "error test:\n";
	oneHarl.complain("debug");
	oneHarl.complain("ERR");
	oneHarl.complain("warWARNING");
}
