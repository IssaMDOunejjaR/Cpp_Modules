/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:15:11 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/07 20:15:13 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string		replaceString(std::string str, std::string oldStr, std::string newStr)
{
	while (str.find(oldStr) != std::string::npos)
		str = str.replace(str.find(oldStr), oldStr.length(), newStr);
	return (str);
}

int		main(int argc, char **argv)
{
	std::ifstream 	file;
	std::ofstream 	newFile;
	std::string		str;

	if (argc < 4)
		std::cout << "Bad arguments!" << std::endl;
	else
	{
		file.open(argv[1], std::fstream::in);
		str = argv[1];
		newFile.open(str.append(".replace"), std::fstream::app);
		while (std::getline(file, str))
		{
			str = replaceString(str, argv[2], argv[3]);
			std::cout << str << std::endl;
			newFile << str << std::endl;
		}
	}
	return (0);
}