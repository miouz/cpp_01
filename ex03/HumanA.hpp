#ifndef HUMANA_HPP_
# define HUMANA_HPP_

# include <string>
# include "Weapon.hpp"

class HumanA
{
	std::string name;
	Weapon& weapon;

	HumanA(void);

	public:

	HumanA(std::string name, Weapon& weapon):
		name(name), weapon(weapon) {}
	~HumanA(void){}

	void attack();
};

#endif // !HUMANA_HPP_
