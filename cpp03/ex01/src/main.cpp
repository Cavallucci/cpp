#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap bob("Michel");

	std::cout << std::endl;
	bob.attack("Guy");
	std::cout << std::endl;
	bob.takeDamage(5);
	std::cout << std::endl;
	bob.beRepaired(1);
	std::cout << std::endl;
	bob.guardGate();
}
