/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:51:42 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/08 15:54:17 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attack with his " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
	return ;
}