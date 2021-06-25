/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:22:22 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/25 14:34:02 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	c1("One");
	ScavTrap	c2("Two");
	ScavTrap	c3("Three");
	
	c1.attack("Two");
	c3.attack("One");
	c2.attack("Three");
	return (0);
}