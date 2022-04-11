#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string const name);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const &src);

		DiamondTrap		&operator=(DiamondTrap const & rhs);
		void			attack(const std::string &target);
		void			whoAmI(void);

	private:
		std::string	_Name;
};
#endif
