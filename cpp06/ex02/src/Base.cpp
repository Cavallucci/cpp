#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void)
{
	std::cout << "destructor base" << std::endl;
}

Base	*generate(void)
{
	int	i;

	srand (time(NULL));
	i = rand() % 3 + 1;
	switch(i)
	{
		case 1:
			std::cout << "Class A has been generated" << std::endl;
			return (new A);
			break;
		case 2:
			std::cout << "Class B has been generated" << std::endl;
			return (new B);
			break;
		case 3:
			std::cout << "Class C has been generated" << std::endl;
			return (new C);
			break;
	}
	return (NULL);	
}

void	identify(Base *p)
{
	std::cout << BLUE << "*Identify the base ..." << NOC << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "It's an " << RED << "A" << NOC << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "It's an " << RED << "B" << NOC << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "It's an " << RED << "C" << NOC << std::endl;
	else
		std::cout << RED << "Class unknown" << NOC << std::endl;
}

void	identify(Base &p)
{
	std::cout << BLUE << "&Identify the base ..." << NOC << std::endl;
	try
	{
		A	tmpA = dynamic_cast<A&>(p);
		std::cout << "It's an " << RED << "A" << NOC << std::endl;
		return;
	}
	catch (std::exception &e) {}
	try
	{
		B	tmpB = dynamic_cast<B&>(p);
		std::cout << "It's an " << RED << "B" << NOC << std::endl;
		return;
	}
	catch (std::exception &e) {}
	try
	{
		C	tmpC = dynamic_cast<C&>(p);
		std::cout << "It's an " << RED << "C" << NOC << std::endl;
		return;
	}
	catch (std::exception &e) {}
}
