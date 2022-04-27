#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Constructor Ice" << std::endl;                                
    return; 
}
 
Ice::~Ice(void)
{
	std::cout << "Destructor Ice" << std::endl;
    return;
}
 
Ice::Ice(Ice const & src) : AMateria(src)
{
	*this = src;
    std::cout << "Copy Ice" << std::endl;

}
 
Ice	&Ice::operator=(Ice const &rhs)
{
    this->_type = rhs.getType();
	return (*this);
}

AMateria    *Ice::clone(void) const
{
    AMateria    *tmp = new Ice;

    *tmp = *this;
    return (tmp);
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
