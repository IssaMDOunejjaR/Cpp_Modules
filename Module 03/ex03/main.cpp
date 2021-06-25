/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:22:22 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/25 14:58:08 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

int		main(void)
{
	FlagTrap	c1("One");
	FlagTrap	c2("Two");
	FlagTrap	c3("Three");
	
	c1.attack("Two");
	c3.attack("One");
	c2.attack("Three");
	return (0);
}