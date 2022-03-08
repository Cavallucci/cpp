/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/08 14:40:06 by lcavallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

bool	contact::get_infos(int indx)
{
	int	len;

	len = 0;
	this->index = indx;
	std::cout << "cc\n";
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

std::string	contact::names[4] =
{
	"First Name",
	"Last Name",
	"Phone Number",
	"Darkest Secret"
};

std::string	contact::infos_name[4] =
{
	"First Name",
	"Last Name",
	"Phone Number",
	"Darkest Secret"
};
