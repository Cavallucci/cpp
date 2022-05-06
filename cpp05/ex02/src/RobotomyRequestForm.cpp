#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), _target(target)
{
	std::cout << "Constructor Robotomy" << std::endl;
}
 
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Destructor Robotomy" << std::endl;
}
 
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src)
{
   std::cout << "Copy Robotomy" << std::endl;
}
 
RobotomyRequestForm &    RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	checkExec(executor);
	std::cout << "**Drill Noise**" << std::endl;
	int i = std::rand();
	
	if (i % 2 == 0)
		std::cout << _target << " has been robotized" << std::endl;
	else
		std::cout << _target << "'s operation failed" << std::endl;
}
