/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:07:54 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/09 18:00:14 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		isAllDigit(std::string const & str) {
	size_t i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < str.length()) {
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		i++;
	}
	return (0);
}

int		checkValidFloat(std::string const & str) {
	size_t 	i = 0;
	int		found_f = 0;
	int		found_dot = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < str.length()) {
		if (str[i] == 'f' && found_f != 1)
			found_f++;
		else if (str[i] == '.' && found_dot != 1)
			found_dot++;
		else if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		i++;
	}
	if (found_f == 0)
		return (-1);
	return (0);
}

int		checkValidDouble(std::string const & str) {
	size_t 	i = 0;
	int		found_dot = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < str.length()) {
		if (str[i] == '.' && found_dot != 1)
			found_dot++;
		else if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		i++;
	}
	return (0);
}

std::string		getType(std::string const & str)
{
	if (str.length() == 1 && !(str[0] >= '0' && str[0] <= '9'))
		return ("char");
	else if ((str.find(".") != std::string::npos && checkValidDouble(str) != -1) || str == "-inf" || str == "+inf" || str == "nan")
		return ("double");
	else if (checkValidFloat(str) != -1 || str == "-inff" || str == "+inff" || str == "nanf")
		return ("float");
	else if (isAllDigit(str) != -1)
		return ("int");
	return ("none");
}

int		main(int argc, char **argv)
{
	if (argc > 1) {
		std::string str = argv[1];
		std::string type = getType(str);

		if (type == "int") {
			try {
				int a = std::stoi(str);

				if (a >= 32 && a <= 126)
					std::cout << "char: '" << static_cast<char>(a) << "'" << std::endl;
				else
					std::cout << "char: Non displayable" << std::endl;
				std::cout << "int: " << a << std::endl;
				std::cout << "float: " << static_cast<float>(a) << ".0f" << std::endl;
				std::cout << "double: " << static_cast<double>(a) << ".0" << std::endl;
			}
			catch (std::out_of_range & e) {
				std::cout << e.what() << std::endl;
			}
			catch (std::invalid_argument & e) {
				std::cout << e.what() << std::endl;
			}

		}
		else if (type == "float") {
			try {
				float a = std::stof(str);

				if (str == "-inff" || str == "+inff" || str == "nanf") {
					std::cout << "char: impossible" << std::endl;
					std::cout << "int: impossible" << std::endl;
				}
				else {
					if (a >= 32 && a <= 126)
						std::cout << "char: '" << static_cast<char>(a) << "'" << std::endl;
					else
						std::cout << "char: Non displayable" << std::endl;
					std::cout << "int: " << static_cast<int>(a) << std::endl;
				}
				std::cout << "float: " << a << (str.find(".0f") != std::string::npos ? ".0f" : "f") << std::endl;
				std::cout << "double: " << static_cast<double>(a) << (str.substr(str.find(".0") + 1, str.find("f") - (str.find(".0") + 1)).length() == 1 ? ".0" : "") << std::endl;
			}
			catch (std::out_of_range & e) {
				std::cout << e.what() << std::endl;
			}
			catch (std::invalid_argument & e) {
				std::cout << e.what() << std::endl;
			}
		}
		else if (type == "double") {
			try {
				double a = std::stod(str);

				if (str == "-inf" || str == "+inf" || str == "nan") {
					std::cout << "char: impossible" << std::endl;
					std::cout << "int: impossible" << std::endl;
				}
				else {
					if (a >= 32 && a <= 126)
						std::cout << "char: '" << static_cast<char>(a) << "'" << std::endl;
					else
						std::cout << "char: Non displayable" << std::endl;
					std::cout << "int: " << static_cast<int>(a) << std::endl;
				}
				std::cout << "float: " << static_cast<float>(a) << (str.substr(str.find(".0") + 1, str.length()).length() == 1 ? ".0" : "") << "f" << std::endl;
				std::cout << "double: " << a << (str.substr(str.find(".0") + 1, str.length()).length() == 1 ? ".0" : "") << std::endl;
			}
			catch (std::out_of_range & e) {
				std::cout << e.what() << std::endl;
			}
			catch (std::invalid_argument & e) {
				std::cout << e.what() << std::endl;
			}
		}
		else if (type == "char") {
			char a = str[0];

			std::cout << "char: '" << static_cast<char>(a) << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(a) << std::endl;
			std::cout << "float: " << static_cast<float>(a) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(a) << ".0" << std::endl;
		}
		else
			std::cout << "The conversion is impossible!" << std::endl;
	}
	return (0);
}