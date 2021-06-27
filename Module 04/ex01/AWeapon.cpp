/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:16:31 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/27 19:30:10 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
	return ;
}

AWeapon::AWeapon(AWeapon & instance)
{
	*this = instance;
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon &	AWeapon::operator=(AWeapon const & instance)
{
	this->name = instance.getName();
	this->apcost = instance.getAPCost();
	this->damage = instance.getDamage();
	return (*this);
}

std::string const &		AWeapon::getName