#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat				michmich("michmich", 45);
	ShrubberyCreationForm	form("michel");

	std::cout << form << std::endl;

	michmich.signForm(form);
	
	std::cout << std::endl;
	
	form.execute(michmich);

}
