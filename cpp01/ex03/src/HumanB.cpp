#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

~HumanB::HumanB(void)
{
	return ;
}

void	setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon;
}
