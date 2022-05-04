#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << "Constructor MateriaSource" << std::endl;
}
 
MateriaSource::~MateriaSource(void)
{
	std::cout<< "Desctructor MateriaSource" << std::endl;
}
 
MateriaSource::MateriaSource(MateriaSource const & src)
{	
	std::cout << "Copy MateriaSource" << std::endl;
	*this = src;
}
 
MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return;
		}
	}
	std::cout << "Inventory full materiasource" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] != NULL && this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	return (NULL);
}
