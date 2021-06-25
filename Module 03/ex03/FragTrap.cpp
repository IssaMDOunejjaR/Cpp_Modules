/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:45:33 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/25 16:14:04 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap & instance): ClapTrap(instance.name)
{
	*this = instance;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "You got me!" << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & instance)
{
	this->name = instance.name;
	this->hitPoints = instance.hitPoints;
	this->energyPoints = instance.energyPoints;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Gimme five!" << std::endl;
	return ;
}