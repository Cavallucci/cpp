#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	bob("bob", 1);
	Form		michel("michel", 2, 3);
	Bureaucrat	guy("guy", 3);
	
	std::cout << std::endl;

	std::cout << bob << std::endl;
	std::cout << michel << std::endl;
	std::cout << guy << std::endl;

	guy.signForm(michel);
	std::cout << michel << std::endl;
	bob.signForm(michel);
	std::cout << michel << std::endl;
}
