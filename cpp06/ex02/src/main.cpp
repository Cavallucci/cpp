#include "Base.hpp"

int main()
{
	Base	*base;

	base = generate();
	std::cout << std::endl;

	identify(base);
	std::cout << std::endl;
	
	identify(*base);
	std::cout << std::endl;

	delete base;
	return (0);
}
