#include "Harl.hpp"

static void	print_header(void)
{
std::cout << "    | |    | |                   (_)      / _|                                (_)" << std::endl;
std::cout << "  __| | ___| |__  _   _  __ _     _ _ __ | |_ ___    __      ____ _ _ __ _ __  _ _ __   __ _     ___ _ __ _ __ ___  _ __" << std::endl;
std::cout << " / _` |/ _ \\ '_ \\| | | |/ _` |   | | '_ \\|  _/ _ \\   \\ \\ /\\ / / _` | '__| '_ \\| | '_ \\ / _` |   / _ \\ '__| '__/ _ \\| '__|" << std::endl;
std::cout << "| (_| |  __/ |_) | |_| | (_| |   | | | | | || (_) |   \\ V  V / (_| | |  | | | | | | | | (_| |  |  __/ |  | | | (_) | |" << std::endl;
std::cout << " \\__,_|\\___|_.__/ \\__,_|\\__, |   |_|_| |_|_| \\___/     \\_/\\_/ \\__,_|_|  |_| |_|_|_| |_|\\__, |   \\___|_|  |_|  \\___/|_|" << std::endl;
std::cout << "                         __/ |                                                          __/ |" << std::endl;
std::cout << "                        |___/                                                          |___/" << std::endl;
}

int main(int argc, char **argv)
{
	Harl		harl;

	print_header();
	std::cout << "Enter a level: ";
	std::cin >> input;
	harl.complain(input);
	return 0;
}
