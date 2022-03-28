#include "Zombie.hpp"

int	main(void)
{
	Zombie stack = Zombie("Stack Zombie");
	Zombie *heap = newZombie("Heap Zombie");

	stack.announce();
	heap->announce();
	randomChump("Chump");
	delete heap;
	return (0);
}
