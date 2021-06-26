/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:22:22 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/26 18:51:03 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	f1("One");
	FragTrap	f2("Two");
	FragTrap	f3("Three");
	FragTrap	f4;

	f4 = f1;
	f1.attack("Two");
	f1.takeDamage(500);
	f1.beRepaired(100);
	f3.attack("One");
	f3.takeDamage(10);
	f3.beRepaired(30);
	f2.attack("Three");
	f2.takeDamage(150);
	f2.beRepaired(5);
	f4.attack("Two");
	f4.takeDamage(1);
	f4.beRepaired(50);
	return (0);
}