/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:22:22 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/26 19:32:35 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(void)
{
	DiamondTrap		d1("One");
	DiamondTrap		d2("Two");
	DiamondTrap		d3("Three");
	DiamondTrap		d4;

	d4 = d2;
	d1.whoAmI();
	d1.attack("Three");
	d1.guardGate();
	d1.highFivesGuys();
	d2.whoAmI();
	d2.attack("One");
	d2.guardGate();
	d2.highFivesGuys();
	d3.whoAmI();
	d3.attack("Two");
	d3.guardGate();
	d3.highFivesGuys();
	d4.whoAmI();
	d4.attack("One");
	d4.guardGate();
	d4.highFivesGuys();
	return (0);
}