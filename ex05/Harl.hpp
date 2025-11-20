#ifndef HARL_HPP_
# define HARL_HPP_

# include <string>

class Harl
{
	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:
	Harl(void);
	void complain(std::string level);
};

#endif // !HARL_HPP_
