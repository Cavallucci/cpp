#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "Constructor Character" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::~Character(void)
{
	std::cout << "Destructor Character" << std::endl;
}

Character::Character(Character const & src)
{
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	std::cout << "Copy Character" << std::endl;
}

Character	&Character::operator=(Character const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
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
