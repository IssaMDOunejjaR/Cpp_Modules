/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crappy_phone_book.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:09:37 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/05 18:08:50 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int		main(void)
{
	Contact			contact[8];
	std::string		command;
	int				back;

	while (1)
	{
		std::cout << "~> ";
		getline(std::cin, command);
		if (command.compare("ADD") == 0)
		{
			if (Contact::getInstanceNumber() == 8)
				std::cout << "You can't add more contacts" << std::endl;
			else
				contact[Contact::getInstanceNumber()].add();
		}
		else if (command.compare("SEARCH") == 0)
		{
			printSearchResult(contact);
			while (1)
			{
				back = 0;
				std::cout << "Select index or type 'BACK': ";
				getline(std::cin, command);
				if (command.compare("BACK") == 0)
				{
					back = 1;
					break ;
				}
				if (command.compare("") != 0)
				{
					if (!isAllNum(command))
						std::cout << "The index need to be a number." << std::endl;
					else if (!availableIndex(contact, stoi(command)))
						std::cout << "Unvailable index." << std::endl;
					else if (availableIndex(contact, stoi(command)))
						break ;
				}
			}
			if (back == 0)
				contact[stoi(command)].printInfo();
		}
		else if (command.compare("EXIT") == 0)
			break ;
	}
	return (0);
}