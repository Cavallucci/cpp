#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137), _target(target)
{
	std::cout << "Constructor Shrubbery" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor shrubbery" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src)
{
	std::cout << "Copy shrubbery" << std::endl;
}

ShrubberyCreationForm &    ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	checkExec(executor);
	std::string		name = this->_target + "_shrubbery";
	std::ofstream	ofs(name.std::string::c_str());
	if (ofs.fail())
	{
		std::cerr << "Fail open\n";
		throw ShrubberyCreationForm::FailedToOpenException();
		return;
	}
	ofs << "   oxoxoo    ooxoo" << std::endl;
	ofs << "  ooxoxo oo  oxoxooo" << std::endl;
	ofs << " oooo xxoxoo ooo ooox" << std::endl;
	ofs << " oxo o oxoxo  xoxxoxo" << std::endl;
	ofs << "  oxo xooxoooo o ooo" << std::endl;
	ofs << "    ooo\\oo\\  /o/o" << std::endl;
	ofs << "        \\  \\/ /" << std::endl;
	ofs << "         |   /" << std::endl;
	ofs << "         |  |" << std::endl;
	ofs << "         | D|" << std::endl;
	ofs << "         |  |" << std::endl;
	ofs << "         |  |" << std::endl;
	ofs << "  ______/____\\____" << std::endl;
}

const char	*ShrubberyCreationForm::FailedToOpenException::what() const throw()
{
	return ("Failed to open");
}
