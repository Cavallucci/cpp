/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/21 17:26:17 by lcavallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

phonebook::phonebook()
{
	this->nb = 0;
}

phonebook::~phonebook()
{
}

void	phonebook::add(void)
{
//	if (this->nb == 8)
//	{
//		mettre a 0 le contact 8
//		get infos (8)
//	}
	if (this->contact[this->nb].get_infos(this->nb + 1))
		this->nb++;	
}

void	phonebook::search(void)
{
//	int	index;

	if (this->nb == 0)
		std::cout << "    Add a contact first... Please ^•ﻌ•^"  << std::endl;
	else
	{
		this->print_header();
		std::cout << "❥ Enter Index or 0 to Exit\n";
//		while (!(std::cin >> index) || (index < 0 || index > this->nb))
//		{
			// getline
	//		std::cin.clear();
	//		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//		std::cout << "❥ Invalid Index\n";
		}
	//	std::cin.ignore(std::numeric_limits<std::streamsize>max(), '\n');
	//	if (index > 0)
	//		this->contact[index - 1].display();
	
}

void	contact::infos_header(void)
{
	std::cout << std::setw(10) << this->index;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "|";
		if (this->names[i].length() > 10)
			std::cout << this->names[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->names[i];
	}
	std::cout << "|" << std::endl;
}

void	phonebook::print_header(void)
{
std::cout << "                     ." << std::endl;
std::cout << "                     |\\ " << std::endl;
std::cout << "                     |_\\ " << std::endl;
std::cout << "                   __|__ " << std::endl;
std::cout << "                   \\   / " << std::endl;
std::cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << std::endl;
std::cout << " ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << std::endl;
std::cout << "   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
std::cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << std::endl;
	for (int i =0; i < this->nb; i++)
		this->contact[i].infos_header();
std::cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << std::endl;
}

void	phonebook::print_goodbye(void)
{
std::cout << "                          _  _" << std::endl;
std::cout << "  ____                   | || |" << std::endl;
std::cout << " / _  |  ___    ___    __| || |__   _   _   ___" << std::endl;
std::cout << "| (_| | / _ \\  / _ \\  / _  ||  _ \\ | | | | / _ \\" << std::endl;
std::cout << " \\__  || (_) || (_) || (_| || |_) || |_| ||  __/" << std::endl;
std::cout << "  __/ | \\___/  \\___/  \\____||____/  \\__  | \\___|" << std::endl;
std::cout << " |___/                               __/ |" << std::endl;
std::cout << "                                    |___/" << std::endl;
}
