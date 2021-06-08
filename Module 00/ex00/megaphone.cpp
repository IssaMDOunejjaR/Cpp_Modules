/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:05:20 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/05 17:10:59 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	int		i;
	int 	j;
	char	c;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 1;
		while (argv[i] != NULL)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				c = toupper(argv[i][j]);
				std::cout << c;
				j++;
			}
			i++;
		}
		std::cout << "\n";
	}
	return (0);
}