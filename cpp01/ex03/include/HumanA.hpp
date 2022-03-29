/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/29 15:38:52 by lcavallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>

class HumanA
{
private:
		Weapon		&_weapon;
		std::string	_name;
public:
		HumanA(std::string weapon);
		~HumanA(void);
		void	attack(void);
};

#endif

