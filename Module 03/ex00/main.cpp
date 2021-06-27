/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:22:22 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/27 09:44:22 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	c1("One");
	ClapTrap	c2("Two");
	ClapTrap	c3("Three");
	ClapTrap	c4;

	c4 = c2;
	c1.attack("Two");
	c1.takeDamage(100);
	c1.beRepaired(10);
	c3.attack("One");
	c3.takeDamage(10);
	c3.beRepaired(60);
	c2.attack("Three");
	c2.takeDamage(70);
	c2.beRepaired(500);
	c4.attack("Three");
	c4.takeDamage(200);
	c4.beRepaired(50);
	return (0);
}