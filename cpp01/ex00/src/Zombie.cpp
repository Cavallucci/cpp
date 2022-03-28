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
