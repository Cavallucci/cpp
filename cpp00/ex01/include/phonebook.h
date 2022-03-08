/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/08 14:48:21 by lcavallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>

class contact
{
	int					index;
	static std::string	infos_name[4];
	static std::string	names[4];
	enum				infos
	{
		FirstName,
		LastName,
		PhoneNumber,
		Secret
	};
public:
	bool	get_infos(int indx);
};

class phonebook
{
		contact		contact[8];
		int			nb;
public:
		void	print(void);
		void	add(void);
		void	search(void);
		void	print_header(void);
};

#endif
