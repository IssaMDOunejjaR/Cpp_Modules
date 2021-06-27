/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:50:52 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/27 09:16:37 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Recompiling my combat code!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20; 
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Recompiling my combat code!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20; 
	return ;
}

ScavTrap::ScavTrap(ScavTrap & instance)
{
	*this = instance;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "I'll get you next time!" << std::endl;
	return ;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & instance)
{
	this->name = instance.name;
	this->hitPoints = instance.hitPoints;
	this->energyPoints = instance.energyPoints;
	this->attackDamage = instance.attackDamage;
	return (*this);
}

void	ScavTrap::attack(std::string target)
{
	std::cout << this->name << " attack " << target << " causing " << this->attackDamage << " damage!" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->name << " has enterred in Gate Keeper mode." << std::endl;
	return ;
}