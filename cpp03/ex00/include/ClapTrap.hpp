#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

# define NOC	"\033[0m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define WHITE	"\033[1;37m"

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string const name);
		~ClapTrap(void);
		ClapTrap(ClapTrap const &src);

		ClapTrap	&operator=(ClapTrap const &rhs);
		void		attack(const std::string &target);
		void 		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		std::string		_Name;
		unsigned int	_HitPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
};
#endif
