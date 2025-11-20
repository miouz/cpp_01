#ifndef WEAPON_HPP_
# define WEAPON_HPP_

#include <string>

class	Weapon
{
	std::string	type;

public:
	Weapon();
	Weapon(std::string);
	const std::string& getType();
	void setType(std::string);
};

#endif
