#include "easyfind.hpp"

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

int	main()
{
	std::list<int>	lst;

	lst.push_back(10);
	lst.push_back(23);
	lst.push_back(3);

	std::cout << BLUE << "List = " << NOC << std::endl;
	for_each(lst.begin(), lst.end(), displayInt);

	std::cout << BLUE << "I want to find 23:" << NOC << std::endl;
	easyfind(lst, 23);

	try
	{
		std::cout << BLUE << "I want to find 999:" << NOC << std::endl;
		easyfind(lst, 999);
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << NOC << std::endl;
	}
}
