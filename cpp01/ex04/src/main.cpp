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

static std::string concTwoStrings(const std::string &s1, const std::string& s2)
{
    return s1 + s2;
}

static int	test_infile(char *inf)
{
	std::ifstream	infile;
	std::string		line;

	infile.open(inf);
	if (infile.fail() || !std::getline(infile, line))
		return (1);
	else
	{
		infile.close();
		return (0);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!test_infile(argv[1]))
		{
			std::ifstream			ifs(argv[1]);
			std::stringstream		buffer;
			std::string				replace;
			std::string				name = concTwoStrings((argv[1]), ".replace");
			std::ofstream			ofs(name.std::string::c_str());
	
			buffer << ifs.rdbuf();
			replace = buffer.str();
			replace = modify(replace, argv[2], argv[3]);
			ofs << replace;
			ifs.close();
			ofs.close();
		}
		else
		{
			std::cerr << "Error infile" << std::endl;
			return (1);
		}
		return (0);
	}
	else
	{
		std::cerr << "Error Arguments" << std::endl;
		return (1);
	}
}
