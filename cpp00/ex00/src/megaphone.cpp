/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcavallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 08:19:45 by lcavallu          #+#    #+#             */
/*   Updated: 2022/03/25 14:21:23 by lcavallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	ft_strlen(char *str)
{
	int i(0);

	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i(1);

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			for (int j = 0; j < ft_strlen(argv[i]); j++)
				std::cout << (char)std::toupper(argv[i][j]);
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
