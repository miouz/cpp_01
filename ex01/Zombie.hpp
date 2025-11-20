#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <string>

class	Zombie
{
	std::string name;
	Zombie(void){};

	public:
	Zombie(std::string name);
	~Zombie(void);

	void announce(void);
	static Zombie* zombieHorde( int N, std::string name );
};

#endif // !ZOMBIE_HPP_
