#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				michmich("Michmich", 4);
	ShrubberyCreationForm	form("Michel");
	RobotomyRequestForm		form2("Guy");
	PresidentialPardonForm	form3("Jose");

	std::cout << form << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;

	michmich.signForm(form);
	michmich.signForm(form2);
	michmich.signForm(form3);
	std::cout << std::endl;
	
	form.execute(michmich);
	std::cout << std::endl;
	michmich.executeForm(form);

	form2.execute(michmich);
	std::cout << std::endl;

	form3.execute(michmich);
	std::cout << std::endl;
}
