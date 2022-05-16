#include "Data.hpp"

int	main()
{
	Data		data;
	Data		*copy;
	uintptr_t	nbr;

	data.nb1 = 42;
	data.nb2 = 0;

	std::cout << "Data: " << std::endl;
	std::cout << "A: " << data.nb1 << std::endl;
	std::cout << "B: " << data.nb2 << std::endl;

	nbr = serialize(&data);
	copy = deserialize(nbr);
	std::cout << std::endl;

    std::cout << "Copy: " << std::endl;
    std::cout << "A: " << copy->nb1 << std::endl;
    std::cout << "B: " << copy->nb2 << std::endl;
}
