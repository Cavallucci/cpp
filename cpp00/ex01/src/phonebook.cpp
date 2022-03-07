/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/07 18:42:02 by lcavallu         ###   ########.fr       */
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
}
