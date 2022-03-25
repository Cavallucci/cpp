/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/25 16:42:33 by lcavallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie
{
private:
		std::string	name;
public:
		Zombie();
		~Zombie();
		void	announce(void);
};

#endif
