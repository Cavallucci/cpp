#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	AForm*	rrf;


	std::cout << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	
	std::cout << std::endl;
	someRandomIntern.makeForm("robot", "hi");
	
	std::cout << std::endl;
	
	delete rrf;
}
