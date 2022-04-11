#include "DiamondTrap.hpp"
 
DiamondTrap::DiamondTrap(void) :
ClapTrap(), FragTrap()
{
	std::cout << GREEN << "[💎] " << NOC;
    std::cout << "Default constructor" << std::endl;
    return ;
}
 
DiamondTrap::DiamondTrap(std::string const name) :
ClapTrap(name + "_Clap_Name"), _Name(name)
{
	this->_HitPoints = FragTrap::_HitPoints;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_AttackDamage = FragTrap::_AttackDamage;
    std::cout << GREEN << "[💎] " << NOC;
    std::cout << BLUE << _Name << NOC << " is here" << std::endl;
    return;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << GREEN << "[💎] " << NOC;
    std::cout << "⚰️  " << BLUE << _Name << NOC << " died" << std::endl;
    return ;
}
 
DiamondTrap::DiamondTrap(DiamondTrap const & src) :
ClapTrap(src), FragTrap(src), _Name(src._Name)
{
    std::cout << GREEN << "[💎] " << NOC;
    std::cout << BLUE << _Name << NOC << " has been cloned" << std::endl;
}
 
DiamondTrap &    DiamondTrap::operator=(DiamondTrap const & rhs)
{
    this->_Name = rhs._Name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return (*this);
}

void    DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
    std::cout << GREEN << "[💎] " << NOC;
	std::cout << BLUE <<_Name << NOC << " sub-object: " << ClapTrap::_Name << std::endl;
}
