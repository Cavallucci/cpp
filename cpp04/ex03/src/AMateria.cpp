#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "Constructor AMateria" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructor AMateria" << std::endl;
}

AMateria::AMateria(std::string const type)
{
	this->_type = type;
	std::cout << "Constructor AMateria" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "Copy AMateria" << std::endl;
	*this = src;
}

AMateria &    AMateria::operator=(AMateria const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string const &AMateria::getType(void)
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "use in ICharacter" << std::endl;
}
