#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap bob("Bob");

	bob.attack("Robert");
	bob.takeDamage(5);
	bob.beRepaired(1);
}
