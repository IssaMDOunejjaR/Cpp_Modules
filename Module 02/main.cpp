/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:17:06 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/08 15:40:58 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

int		main(void)
{
	Integer		x(10);
	Integer		y(5);

	std::cout << "X = " << x << std::endl;
	std::cout << "Y = " << y << std::endl;
	x = Integer(42);
	std::cout << "X = " << x << std::endl;
	y = y + 1;
	std::cout << "Y = " << y << std::endl;
	return (0);
}