#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. ";
	std::cout << "I really do !" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger ! ";
	std::cout << "If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here ";
	std::cout << "since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	Harl		harl;
	std::string	function[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Harl::*choose_ptr[4])(void) =
	{
		choose_ptr[0] = &Harl::_debug,
		choose_ptr[1] = &Harl::_info,
		choose_ptr[2] = &Harl::_warning,
		choose_ptr[3] = &Harl::_error
	};
	for(int i = 0; i < 4; i++)
	{
		if (level == function[i])
		{
			(this->*choose_ptr[i])();
			return ;
		}
	}
	std::cerr << "Parameter is not good\n";
}
