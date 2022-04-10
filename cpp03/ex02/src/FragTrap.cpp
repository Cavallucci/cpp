#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void) :
ClapTrap()
{
	std::cout << GREEN << "[FRAG] " << NOC;
	std::cout << "Default constructor" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string const name) :
ClapTrap(name)
{	
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << GREEN << "[FRAG] " << NOC;
    std::cout << BLUE << _Name << NOC << " is here" << std::endl;
    return;
}

FragTrap::~FragTrap(void)
{
	std::cout << GREEN << "[FRAG] " << NOC;
    std::cout << "⚰️  " << BLUE << _Name << NOC << " died" << std::endl;
    return ;
}
 
FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << GREEN << "[FRAG] " << NOC;
	std::cout << BLUE << _Name << NOC << " has been cloned" << std::endl;
}
 
FragTrap	&FragTrap::operator=(FragTrap const & rhs)
{
	this->_Name = rhs._Name;
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
    return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << GREEN << "[FRAG] " << NOC;
	std::cout << BLUE << _Name << NOC << " want a High Five 🖐" << std::endl;
}
