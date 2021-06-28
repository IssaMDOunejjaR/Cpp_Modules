/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:14:15 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 10:17:26 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PowerFist.hpp"

PowerFist::PowerFist(void)
{
	this->name = "Power Fist";
	this->apcost = 8;
	this->damage = 50;
	return ;
}

PowerFist::PowerFist(PowerFist & instance)
{
	*this = instance;
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist &		PowerFist::operator=(PowerFist const & instance)
{
	this->name = instance.getName();
	this->apcost = instance.getAPCost();
	this->damage = instance.getDamage();
	return (*this);
}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}