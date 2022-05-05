#include "RobotomyRequestForm.hpp"
 
RobotomyRequestForm::RobotomyRequestForm(void)
{
}
 
RobotomyRequestForm::~RobotomyRequestForm(void)
{
}
 
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
   *this = src;
}
 
RobotomyRequestForm &    RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(void)rhs;
   return (*this);
}
