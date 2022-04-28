#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Constructor Cure" << std::endl;
	return;
}
 
Cure::~Cure(void)
{
	std::cout << "Destructor Cure" << std::endl;
	return;
}
 
Cure::Cure(Cure const & src) : AMateria(src)
{
	*this = src;
	std::cout << "Copy Cure" << std::endl;
}
 
Cure	&Cure::operator=(Cure const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	AMateria	*tmp = new Cure;

	*tmp = *this;
	return (tmp);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
