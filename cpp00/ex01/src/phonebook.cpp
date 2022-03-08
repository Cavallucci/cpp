/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/08 15:33:10 by lcavallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

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
	}
}

void	phonebook::print_header(void)
{
std::cout << "                    'Xx  xX*," << std::endl;
std::cout << "                 ,*xXXx_xXx" << std::endl;
std::cout << "                   _xXXXXXxx*," << std::endl;
std::cout << "                 ,*XXx@x@Xx" << std::endl;
std::cout << "                   X @|@@ `x" << std::endl;
std::cout << "                   '  ||    '" << std::endl;
std::cout << "                      ||" << std::endl;
std::cout << "                      ||" << std::endl;
std::cout << "                      ||                                   ." << std::endl;
std::cout << "                      ||                                   |\\ " << std::endl;
std::cout << "                  /ssssssss.                               |_\\ " << std::endl;
std::cout << "             /sssssssSSSSssssssssss.                     __|__ " << std::endl;
std::cout << "          /sssssSSSSSSSSSSSSSSSssssssssssss.             \\   / " << std::endl;
std::cout << " ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << std::endl;
std::cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << std::endl;
std::cout << "           INDEX | FIRST NAME | LAST NAME | PHONE | SECRET" << std::endl;
std::cout << " ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << std::endl;
}

void	phonebook::print_goodbye(void)
{
	
}
