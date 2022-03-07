/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/07 18:24:52 by lcavallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	phonebook::print(void)
{
	std::cout << "              ▄██▄██▄" << std::endl;
	std::cout << "PHONEBOOK─────▀█████▀" << std::endl;
	std::cout << "                ▀█▀  " << std::endl;
}

int	main(void)
{
	phonebook	pb;
	bool		ask;
	std::string	cmd;

	ask = true;
	pb.print();
	while (ask)
	{
		std::cout << "❥";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			pb.add();
		else if (cmd == "SEARCH")
			pb.search();
		if (cmd == "EXIT")
			ask = false;
	}
	return (0);
}
