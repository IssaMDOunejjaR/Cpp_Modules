/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:01:25 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/26 19:32:19 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	this->name = name;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap & instance)
{
	*this = instance;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	return ;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & instance)
{
	this->name = instance.name;
	ClapTrap::name = this->name + "_clap_name";
	this->hitPoints = instance.hitPoints;
	this->energyPoints = instance.energyPoints;
	this->attackDamage = instance.attackDamage;
	return (*this);
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << this->name << " " << ClapTrap::name << std::endl;
	return ;
}