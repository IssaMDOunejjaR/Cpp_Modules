/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:45:33 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/25 14:59:18 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	return ;
}

FlagTrap::FlagTrap(FlagTrap & instance): ClapTrap(instance.name)
{
	*this = instance;
	return ;
}

FlagTrap::~FlagTrap(void)
{
	std::cout << "You got me!" << std::endl;
	return ;
}

FlagTrap &	FlagTrap::operator=(FlagTrap const & instance)
{
	this->name = instance.name;
	this->hitPoints = instance.hitPoints;
	this->energyPoints = instance.energyPoints;
	return (*this);
}

void	FlagTrap::highFivesGuys(void)
{
	std::cout << "Gimme five!" << std::endl;
	return ;
}