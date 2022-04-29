#include "Bureaucrat .hpp"

Bureaucrat ::Bureaucrat (std::string const name, unsigned int grade) : _name(name), _grade(grade) 
{
	std::cout << "Constructor Bureaucrat" << std::endl;
	return;
}
 
Bureaucrat ::~Bureaucrat (void)
{
}
 
Bureaucrat ::Bureaucrat (Bureaucrat  const & src)
{
	*this = src;
}
 
Bureaucrat 	&Bureaucrat ::operator=(Bureaucrat  const &rhs)
{
	return (*this);
}
