#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>

class	Zombie
{
	std::string name;

	public:
	Zombie(std::string name);
	~Zombie(void);

	void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif // !ZOMBIE_HPP_
