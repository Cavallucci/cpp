#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	claptrap("Michel");
	ClapTrap	clone(claptrap);

	std::cout << std::endl;
	claptrap.attack("Guy");
	std::cout << std::endl;
	claptrap.takeDamage(9);
	std::cout << std::endl;
	claptrap.beRepaired(2);
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		claptrap.attack("Another Guy");
}
