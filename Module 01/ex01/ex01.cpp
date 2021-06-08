/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:17:33 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/06 11:38:54 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak(void)
{
	std::string		*panther = new std::string("String panther");
	
	std::cout << *panther << std::endl;
	delete panther;
}

int		main(void)
{
	memoryLeak();
	return (0);
}