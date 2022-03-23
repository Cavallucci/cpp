/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/23 14:23:09 by lcavallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

bool	contact::get_infos(int indx)
{
	int	len;

	len = 0;
	this->index = indx;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "    ʕ•ᴥ•ʔ  " << contact::infos_name[i] << ":\n❥";
		std::getline(std::cin, this->names[i]);
	}
	for (int i = FirstName; i <= Secret; i++)
		len += this->names[i].length();
	if (len == 0)
	{
		std::cout << "    ʕ •`ᴥ•´ʔ  Empty contact my dear..." << std::endl;
		return (false);
	}
	std::cout << "    ʕᵔᴥᵔʔ  Contact added !" << std::endl;
	return (true);
}

contact::contact()
{
	for (int i = FirstName; i <= Secret; i++)
		this->names[i] = std::string();
}

contact::~contact()
{
}

std::string	contact::infos_name[5] =
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

void	contact::print_contact()
{
	std::cout << "❥ Contact " << this->index << "" << std::endl;
	for (int i = FirstName; i <= Secret; i++)
		std::cout << contact::infos_name[i] << ": " << this->names[i] << std::endl;
}
