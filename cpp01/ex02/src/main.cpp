#include <iostream>

int	main(void)
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string		*stringPTR = &brain;
	std::string		&stringREF = brain;

	std::cout << "address of string:\t" << &brain << std::endl;
	std::cout << "address of stringPTR:\t" << stringPTR << std::endl;
	std::cout << "address of stringREF:\t" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "value of string:\t" << brain << std::endl;
	std::cout << "value of stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "value of stringREF:\t" << stringREF << std::endl;
	return (0);
}
