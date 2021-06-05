/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:26:21 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/04 19:06:33 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int		isAllNum(std::string str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int		availableIndex(Contact contact[8], int index)
{
	int i;

	i = 0;
	while (i < Contact::getInstanceNumber())
	{
		if (index == contact[i].getIndex())
			return (1);
		i++;
	}
	return (0);
}

std::string		resizeString(std::string str)
{
	std::string		newStr;

	if (str.length() > 10)
	{
		newStr = str.substr(0, 9);
		newStr.push_back('.');
		return (newStr);
	}
	return (str);
}

void	printSearchResult(Contact contact[8])
{
	int i;

	i = 0;
	std::cout << std::setw(10);
	std::cout << "Index";
	std::cout << " | ";
	std::cout << std::setw(10);
	std::cout << "First Name";
	std::cout << " | ";
	std::cout << std::setw(10);
	std::cout << "Last Name";
	std::cout << " | ";
	std::cout << std::setw(10);
	std::cout << "Nickname" << std::endl;
	while (i < Contact::getInstanceNumber())
	{
		std::cout << std::setw(10);
		std::cout << contact[i].getIndex();
		std::cout << " | ";
		std::cout << std::setw(10);
		std::cout << resizeString(contact[i].getFirstName());
		std::cout << " | ";
		std::cout << std::setw(10);
		std::cout << resizeString(contact[i].getLastName());
		std::cout << " | ";
		std::cout << std::setw(10);
		std::cout << resizeString(contact[i].getNickname()) << std::endl;
		i++;
	}
}
