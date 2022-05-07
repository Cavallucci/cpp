#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Constructor Intern" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Destructor Intern" << std::endl;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Copy Intern" << std::endl;
	*this = src;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string	table[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	AForm	*(Intern::*whichCase[3])(std::string target)=
	{
		whichCase[0] = &Intern::_Robotomy,
		whichCase[1] = &Intern::_Presidential,
		whichCase[2] = &Intern::_Shrubbery,
	};

	for (int i = 0; i < 4; i++)
	{
		if (name == table[i])
		{
			std::cout << "Intern creates " << RED << target << NOC << std::endl;
			return ((this->*whichCase[i])(target));
		}
	}
	std::cerr << RED << "Form doesn't exist" << NOC << std::endl;
	return (NULL);
}

AForm	*Intern::_Shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::_Robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::_Presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}
