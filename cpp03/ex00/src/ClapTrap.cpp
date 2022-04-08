#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name)
{
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << BLUE << _Name << NOC << " is here" << std::endl;
	return;
}

ClapTrap::~ClapTrap(void)
{
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	if (!this)
		return ;
	*this = src;
}

ClapTrap &    ClapTrap::operator=(ClapTrap const &rhs)
{
	(void)rhs;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	(void)target;
	std::cout << "ClapTrap <name> attacks <target>, causing <damage> points of damage!" << std::endl;
	this->_AttackDamage--;
}
