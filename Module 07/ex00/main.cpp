/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:27:32 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/10 12:25:03 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "template.hpp"

int		main(void) {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	int num1 = 156;
	int num2 = 87465;

	::swap(num1, num2);
	std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;
	std::cout << "min( num1, num2 ) = " << ::min( num1, num2 ) << std::endl;
	std::cout << "max( num1, num2 ) = " << ::max( num1, num2 ) << std::endl;

	std::string str1 = "str_1";
	std::string str2 = "str_2";

	::swap(str1, str2);
	std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;
	std::cout << "min( str1, str2 ) = " << ::min( str1, str2 ) << std::endl;
	std::cout << "max( str1, str2 ) = " << ::max( str1, str2 ) << std::endl;

	return (0);
}