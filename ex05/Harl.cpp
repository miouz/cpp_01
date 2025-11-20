#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void){}

void	Harl::debug(void)
{
	std::cout <<"This is obviously DEBUGGING\n";
}

void	Harl::info(void)
{
	std::cout <<"This is obviously INFO\n";
}

void	Harl::warning(void)
{
	std::cout <<"This is obviously WARNING\n";
}

void	Harl::error(void)
{
	std::cout <<"This is obviously ERROR\n";
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
	 		(this->*funcs[index])();
			return ;
		}
	}
	std::cerr << "command not found, can not complain\n";
}
