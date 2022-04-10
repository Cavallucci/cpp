#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ClapTrap::ClapTrap(void) : 
_Name(0), _HitPoints(0), _EnergyPoints(0), _AttackDamage(0)
{
	std::cout << GREEN << "[CLAP] " << NOC;
	std::cout << "Default constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const name) : 
_Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << GREEN << "[CLAP] " << NOC;
	std::cout << BLUE << _Name << NOC << " is here" << std::endl;
	return;
}


ClapTrap::ClapTrap(ClapTrap const &src) : _Name(src._Name) 
{
	std::cout << GREEN << "[CLAP] " << NOC;
	std::cout << BLUE << _Name << NOC << " has been cloned" << std::endl;
	if (this != &src)
		*this = src;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << GREEN << "[CLAP] " << NOC;
	std::cout << "⚰️  " << BLUE << _Name << NOC << " died" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << GREEN << "[CLAP] " << NOC;
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		std::cout << "💥 ";
		std::cout << BLUE << _Name << NOC << " attacks " << BLUE << target << NOC << ", causing " << RED << _AttackDamage << NOC << " points of damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "🔋 " << BLUE << _Name << NOC << " does not have enough points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int d)
{
	std::cout << GREEN << "[CLAP] " << NOC;
	if (_HitPoints == 0)
	{
		std::cout << BLUE << _Name << NOC << " is dead" << std::endl;
		return ;
	}
	if (d > _HitPoints)
		_HitPoints = 0;
	else
		_HitPoints -= d;
	std::cout << "📉 " << BLUE << _Name << NOC << " take " << RED << d << NOC << " damage points and has now " << RED << _HitPoints << NOC << " life points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int r)
{
	std::cout << GREEN << "[CLAP] " << NOC;
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		_EnergyPoints--;
		_HitPoints += r;
		std::cout << "🚀 " << BLUE << _Name << NOC << " recovers " << RED << r << NOC << " life points and have now " << RED << _HitPoints << NOC << " life points" <<  std::endl;
		_EnergyPoints--;
	}
	else
		std::cout << "🔋 " << BLUE << _Name << NOC << " does not have enough points" << std::endl;
}
