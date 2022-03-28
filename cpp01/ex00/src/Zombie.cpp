#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	this->_name = str;
    return ;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died" << std::endl;
	return ;
}

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}

void	randomChump(std::string name)
{
	Zombie	zombie = Zombie(name);

	zombie.announce();
	return ;
}
