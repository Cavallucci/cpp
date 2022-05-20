#include <iter.hpp>

int	main()
{
	std::cout << "CHAR :" << std::endl;
	{
		char	word[4] = "oui";

		std::cout << word[0] << word[1] << word[2] << std::endl;
		iter(word, 3, increment);
		std::cout << word[0] << word[1] << word[2] << std::endl;
	}
	std::cout << "INT :" << std::endl;
	{
		int		array[5] = {-42, 0, 159, 2, 90};

		for (int i = 0; i < 5; i++)
			std::cout << array[i] << std::endl;

		iter(array, 5, increment);

		for (int i = 0; i < 5; i++)
			std::cout << array[i] << std::endl;
	}
}
