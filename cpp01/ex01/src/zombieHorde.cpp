#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zoo = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zoo[i].setName(name);
		zoo[i].announce();
	}
	return (zoo);
}
