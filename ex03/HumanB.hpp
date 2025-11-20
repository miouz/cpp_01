#ifndef HUMANB_HPP_
# define HUMANB_HPP_

# include "Weapon.hpp"
# include <string>

class	HumanB
{
	std::string	name;
	Weapon* weapon;

	HumanB(void);

	public:
	
	HumanB(std::string name);
	~HumanB(void){}

	void setWeapon(Weapon& weapon);
	void attack();
};

#endif // !HUMANB_HPP_
