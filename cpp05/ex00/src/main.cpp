#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	bob("bob", 149);
	Bureaucrat	michel("michel", 1);
//	Bureaucrat	error("error", 200);

	std::cout << std::endl;

	std::cout << bob << std::endl;
	std::cout << michel << std::endl;

	try
	{
		bob.increase();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << bob << std::endl;
	
	try
	{
		bob.decrease();
		bob.decrease();
		bob.decrease();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bob << std::endl;
}
