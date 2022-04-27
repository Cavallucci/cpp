#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
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
	std::cout << "Copy MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			_inventory[i] = m;
			return;
		}
	}
	std::cout << "Inventory full" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	std::cout << "create materie" << std::endl;	
}
