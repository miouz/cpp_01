#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void){}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout <<"This is obviously DEBUGGING\n\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout <<"This is obviously INFO\n\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout <<"This is obviously WARNING\n\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout <<"This is obviously ERROR\n\n";
}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*FunctionPointer)(void);
	FunctionPointer funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	ref[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int index = 0; index < 4; index++)
	{
		if (ref[index] == level)
		{
			switch (index) {
			case 0:
				(this->*funcs[0])();
			case 1:
				(this->*funcs[1])();
			case 2:
				(this->*funcs[2])();
			case 3:
				(this->*funcs[3])();
			}
			return ;
		}
	}
	std::cout << "[ BLABLA ]\n";
	std::cerr << "no match, can not complain\n\n";
}
