/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:32:45 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/07 11:36:28 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPointer = &str;
	std::string&	strReference = str;

	std::cout << *strPointer << std::endl;
	std::cout << strReference << std::endl;
	return (0);
}