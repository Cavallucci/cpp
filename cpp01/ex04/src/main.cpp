#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

static std::string	modify(std::string buf, std::string s1, std::string s2)
{
	size_t	p = 0;
	size_t	tmp = 0;

	while (p != std::string::npos)
	{
		tmp = buf.std::string::find(s1, p);
		if (tmp != std::string::npos)
		{
			buf.std::string::erase(tmp, s1.length());
			buf.std::string::insert(tmp, s2);
		}
		p += tmp;
	}
	return (buf);
}

int	main(int argc, char **argv)
{
	(void)argc;
	std::ifstream			ifs(argv[1]);
	std::stringstream		buffer;
	std::string				replace;
	std::ofstream			ofs("i.replace");

	buffer << ifs.rdbuf();
	replace = buffer.str();
	replace = modify(replace, argv[2], argv[3]);
	ofs << replace;

	ifs.close();
	ofs.close();
}
