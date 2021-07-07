/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:07:54 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/06 15:37:47 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		isAllDigit(std::string const & str)
{
	for (size_t i = 0; i < str.length(); i++) {
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
	}
	return (0);
}

std::string		getType(std::string const & str)
{
	if (str.find(".") != std::string::npos || str == "-inf" || str == "+inf" || str == "nan")
		return ("double");
	else if (str.find("f") != std::string::npos || str == "-inff" || str == "+inff" || str == "nanf")
		return ("float");
	else if (isAllDigit(str) != -1)
		return ("int");
	else if (str.length() == 1 && !(str[0] >= '0' && str[0] <= '9'))
		return ("char");
	return ("none");
}

int		main(int argc, char **argv)
{
	if (argc > 1) {
		std::string str = argv[1];
		std::string type = getType(str);

		if (type == "int") {
			int a = std::stoi(str);

			if (a >= 32 && a <= 126)
				std::cout << "char: " << static_cast<char>(a) << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(a) << std::endl;
			std::cout << "float: " << static_cast<float>(a) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(a) << ".0" << std::endl;
		}
		else if (type == "float") {
			float a = std::stof(str);

			if (str == "-inff" || str == "+inff" || str == "nanf") {
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: " << str << std::endl;
				std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
			}
			else {
				if (a >= 32 && a <= 126)
					std::cout << "char: " << static_cast<char>(a) << std::endl;
				else
					std::cout << "char: Non displayable" << std::endl;
				std::cout << "int: " << static_cast<int>(a) << std::endl;
				std::cout << "float: " << static_cast<float>(a) << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(a) << std::endl;
			}
		}
		else if (type == "double") {
			double a = std::stod(str);

			if (str == "-inf" || str == "+inf" || str == "nan") {
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: " << str << "f" << std::endl;
				std::cout << "double: " << str << std::endl;
			}
			else {
				if (a >= 32 && a <= 126)
					std::cout << "char: " << static_cast<char>(a) << std::endl;
				else
					std::cout << "char: Non displayable" << std::endl;
				std::cout << "int: " << static_cast<int>(a) << std::endl;
				std::cout << "float: " << static_cast<float>(a) << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(a) << std::endl;
			}
		}
		else if (type == "char") {
			char a = str[0];

			if (a >= 32 && a <= 126)
				std::cout << "char: " << static_cast<char>(a) << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(a) << std::endl;
			std::cout << "float: " << static_cast<float>(a) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(a) << std::endl;
		}
		else
			std::cout << "The conversion is impossible!" << std::endl;
	}
	return (0);
}