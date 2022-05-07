#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", 25, 5), _target(target)
{
	std::cout << "Constructor Presidential" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Destructor Presidental" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src)
{
	std::cout << "Copy Robotomy" << std::endl;
}

PresidentialPardonForm &    PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	checkExec(executor);
	std::cout << _target << " was forgiven by Zaphod Beeblebox" << std::endl;
}
