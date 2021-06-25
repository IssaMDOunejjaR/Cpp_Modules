/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:01:25 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/25 18:00:51 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	this->hitPoints = this->FragTrap::hitPoints;
	this->energyPoints = this->ScavTrap::energyPoints;
	this->attackDamage = this->FragTrap::attackDamage;
	return ;
}