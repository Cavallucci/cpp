/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/22 14:25:35 by lcavallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>

class contact
{
		int					index;
		static std::string	infos_name[5];
		std::string			names[5];
		enum				infos
		{
			FirstName,
			LastName,
			NickName,
			PhoneNumber,
			Secret
		};
public:
		contact();
		~contact();

		bool	get_infos(int indx);
		void	infos_header(void);
		void	print_contact(void);
};

class phonebook
{
		contact		contact[8];
		int			nb;
public:
		phonebook();
		~phonebook();

		void	print(void);
		void	add(void);
		void	search(void);
		void	print_header(void);
		void	print_goodbye(void);
};

#endif
