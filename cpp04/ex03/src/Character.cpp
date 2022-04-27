#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "Constructor Character" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}
 
Character::~Character(void)
{
	std::cout << "Destructor Character" << std::endl;
}
 
Character::Character(Character const & src)
{
	std::cout << "Copy Character" << std::endl;
	*this = src;
}
 
Character	&Character::operator=(Character const &rhs)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = rhs.inventory[i];
	this->_name = rhs._name;
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}
