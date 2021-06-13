/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:24:57 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/12 20:09:42 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->hitPoints = 100;
	this->maxHintPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	return ;
}

FragTrap::FragTrap(FragTrap & instance)
{
	*this = instance;
	return ;
}

FragTrap::~FragTrap(void)
{
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & instance)
{
	this->hitPoints = instance.hitPoints;
	this->maxHintPoints = instance.maxHintPoints;
	this->energyPoints = instance.energyPoints;
	this->maxEnergyPoints = instance.maxEnergyPoints;
	this->level = instance.level;
	this->name = instance.name;
	this->meleeAttackDamage = instance.meleeAttackDamage;
	this->rangedAttackDamage = instance.rangedAttackDamage;
	this->armorDamageReduction = instance.armorDamageReduction;
	return (*this);
}

std::ostream &	operator<<(std::ostream & output, FragTrap const & instance)
{
	return (output);
}

