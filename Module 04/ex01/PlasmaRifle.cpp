/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:06:11 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 12:08:09 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
{
	this->name = "Plasma Rifle";
	this->apcost = 5;
	this->damage = 21;
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle & instance)
{
	*this = instance;
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

PlasmaRifle &	PlasmaRifle::operator=(PlasmaRifle const & instance)
{
	this->name = instance.getName();
	this->apcost = instance.getAPCost();
	this->damage = instance.getDamage();
	return (*this);
}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}