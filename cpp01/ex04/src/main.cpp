#include <iostream>
#include <fstream>
#include <sstream>

static void	modify(std::string buf, std::string s1, std::string s2)
{/*
	int	j;

	for (int i = 0; i < buf.length() ; i++)
	{
		j = 0;
		for (buf[i] == s1[j]; j < s1.length() ; j++)
			if (j == s1.length)
				
		}
	}*/
	int p;
	p = std::find(buf, buf.end(), s1);
	if (p != buf.end())
	{
		if (s1.length() > s2.length())
			replace(p, s1.length(), s2);
		else
			replace(p, s2.length(), s2);
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	std::ifstream			ifs(argv[1]);
	const std::string		S1 = argv[2];
	const std::string		S2 = argv[3];
	std::stringstream		buffer;
	std::string				replace;
	std::ofstream			ofs("i.replace");

	buffer << ifs.rdbuf();
	replace = modify(buffer.str(), argv[2], argv[3]);
	ofs << replace;

	ifs.close();
	ofs.close();
}
