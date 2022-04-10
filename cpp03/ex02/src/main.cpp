#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap bob("Michel");

	std::cout << std::endl;
	bob.attack("Guy");
	std::cout << std::endl;
	bob.takeDamage(5);
	std::cout << std::endl;
	bob.beRepaired(1);
	std::cout << std::endl;
	bob.highFivesGuys();
}
