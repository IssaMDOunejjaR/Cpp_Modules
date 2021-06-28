/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:41:21 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 10:48:11 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
{
	this->hp = 170;
	this->type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant & instance)
{
	*this = instance;
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant & 	SuperMutant::operator=(SuperMutant const & instance)
{
	this->hp = instance.getHP();
	this->type = instance.getType();
	return (*this);
}

void	SuperMutant::takeDamage(int amount)
{
	if (this->getHP() - (amount - 3) >= 0)
		this->hp -= (amount - 3);
	else
		this->hp = 0;
	return ;
}