/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:15:11 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/09 10:56:39 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string		replaceString(std::string str, std::string oldStr, std::string newStr)
{
	size_t pos;

	pos = 0;
	while (true)
	{
		pos = str.find(oldStr, pos);
		if (pos == std::string::npos)
			break ;
		else
		{
			str = str.replace(pos, oldStr.length(), newStr);
			pos++;
		}
	}
	return (str);
}

int		main(int argc, char **argv)
{
	std::string		str;

	if (argc < 4 || argc > 4)
		std::cout << "Bad arguments!" << std::endl;
	else
	{
		std::ifstream 	file(argv[1]);
		if (file.fail()) {
			std::cerr << "Error" << std::endl;
			return (1);
		}
		str = argv[1];
		std::ofstream 	newFile(str.append(".replace"));
		while (std::getline(file, str))
		{
			str = replaceString(str, argv[2], argv[3]);
			newFile << str << std::endl;
		}
		file.close();
	}
	return (0);
}