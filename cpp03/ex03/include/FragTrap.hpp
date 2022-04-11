#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string const name);
		~FragTrap(void);
		FragTrap(FragTrap const & src);

		FragTrap	&operator=(FragTrap const & rhs);
		void		attack(const std::string &target);
		void		highFivesGuys(void);		
	private:
};
#endif
