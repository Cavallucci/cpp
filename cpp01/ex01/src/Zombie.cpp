#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "rien";
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

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
