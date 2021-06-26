/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:22:22 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/26 18:33:41 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	s1("One");
	ScavTrap	s2("Two");
	ScavTrap	s3("Three");
	ScavTrap	s4;
	
	s4 = s3;
	s1.attack("Two");
	s1.takeDamage(10);
	s1.beRepaired(50);
	s3.attack("One");
	s3.takeDamage(100);
	s3.beRepaired(10);
	s2.attack("Three");
	s2.takeDamage(60);
	s2.beRepaired(100);
	s4.attack("One");
	s4.takeDamage(5);
	s4.beRepaired(200);
	return (0);
}