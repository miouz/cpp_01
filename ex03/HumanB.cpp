#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <cstdlib>

HumanB::HumanB(std::string name)
{
	this->name = name;
	weapon = NULL;
}

HumanB::~HumanB(void){}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their "
			<< weapon->getType() << std::endl;
	else
	 	std::cerr << name << " has no weapon to attack\n";
}
