#include "Sed.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "no enough arguments\n";
		return (EXIT_FAILURE);
	}

	std::string fileName(argv[1]);
	std::string toReplace(argv[2]);
	std::string replaceWith(argv[3]);
	Sed	sed(toReplace, replaceWith, fileName);

	if (sed.good())
	{
		sed.writeToFile();
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
