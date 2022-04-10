#include "ScavTrap.hpp"
 
ScavTrap::ScavTrap(void) :
ClapTrap()
{
	std::cout << GREEN << "[SCAV] " << NOC;
	std::cout << "Default constructor" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string const name) :
ClapTrap(name)
{	
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << GREEN << "[SCAV] " << NOC;
    std::cout << BLUE << _Name << NOC << " is here" << std::endl;
    return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << GREEN << "[SCAV] " << NOC;
    std::cout << "⚰️  " << BLUE << _Name << NOC << " died" << std::endl;
    return ;
}
 
ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << GREEN << "[SCAV] " << NOC;
	std::cout << BLUE << _Name << NOC << " has been cloned" << std::endl;
}
 
ScavTrap &    ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_Name = rhs._Name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << GREEN << "[SCAV] " << NOC;
	std::cout << BLUE << _Name << NOC << " enter in Gate keeper mode" << std::endl;
}
