#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream			ifs(argv[1]);
	const std::string		S1;
	const std::string		S2;
	std::ofstream			ofs("h.replace");

	ofs >> ifs;

	ifs.close();
	ofs.close();
}
