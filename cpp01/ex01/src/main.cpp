#include "Zombie.hpp"

int	main(void)
{
	Zombie *zoo;

	zoo = zombieHorde(42, "ZooZombie");
	delete [] zoo;
	return (0);
}
