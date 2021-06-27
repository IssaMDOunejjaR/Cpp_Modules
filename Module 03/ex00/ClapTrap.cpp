/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:22:19 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/27 09:44:18 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Let's get this party started!" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Let's get this party started!" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(ClapTrap & instance)
{
	*this = instance;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & instance)
{
	this->name = instance.name;
	this->hitPoints = instance.hitPoints;
	this->energyPoints = instance.energyPoints;
	this->attackDamage = instance.attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " has taken " << amount << " damage!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " has been repaired " << amount << std::endl;
	return ;
}