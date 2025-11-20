#include "Harl.hpp"
#include <iostream>
int main()
{
	Harl	oneHarl;

	oneHarl.complain("DEBUG");
	oneHarl.complain("INFO");
	oneHarl.complain("WARNING");
	oneHarl.complain("ERROR");


	std::cout << "error test:\n";
	oneHarl.complain("debug");
	oneHarl.complain("ERR");
	oneHarl.complain("warWARNING");
}
