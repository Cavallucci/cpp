#include "PresidentialPardonForm.hpp"
 
PresidentialPardonForm::PresidentialPardonForm(void)
{
}
 
PresidentialPardonForm::~PresidentialPardonForm(void)
{
}
 
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
   *this = src;
}
 
PresidentialPardonForm &    PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(void)rhs;
   return (*this);
}
