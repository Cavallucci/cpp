/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/22 17:59:39 by lcavallu         ###   ########.fr       */
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
	if (this->nb == 8)
	{
	//	this->contact[0].get_infos(1);
		this->nb = 0;
	}
	if (this->contact[this->nb].get_infos(this->nb + 1))
		this->nb++;	
}

void	phonebook::search(void)
{
	int			index;
	std::string enter;

	if (this->nb == 0)
		std::cout << "    Add a contact first... Please ^•ﻌ•^"  << std::endl;
	else
	{
		this->print_header();
		std::cout << "❥ Enter Index or 0 to Exit\n";
		while (!(std::getline(std::cin, enter) >> index) || (index < 0 || index > this->nb))
			std::cout << "❥ Invalid Index\n";
		if (index > 0)
			this->contact[index].print_contact();
	}	
}

void	contact::infos_header(void)
{
	if (this->index < 1 || this->index > 8)
		return;
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
	for (int i = 0; i < 8; i++)
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
