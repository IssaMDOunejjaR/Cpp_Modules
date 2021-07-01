/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:03:34 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 20:11:24 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	this->ap = 40;
	this->weapon = NULL;
	return ;
}

Character::Character(std::string const & name)
{
	this->name = name;
	this->ap = 40;
	this->weapon = NULL;
	return ;
}

Character::Character(Character & instance)
{
	*this = instance;
	return ;
}

Character::~Character(void)
{
	return ;
}

Character &		Character::operator=(Character const & instance)
{
	this->name = instance.getName();
	this->ap = instance.getAP();
	this->weapon = instance.getWeapon();
	return (*this);
}

void	Character::recoverAP(void)
{
	if (this->ap + 10 > 40)
		this->ap = 40;
	else
		this->ap += 10;
	return ;
}

void	Character::equip(AWeapon * weapon)
{
	this->weapon = weapon;
	return ;
}

void	Character::attack(Enemy * enemy)
{
	if (enemy != NULL && this->weapon != NULL)
	{
		if (this->weapon->getAPCost() > this->getAP())
			return ;
		std::cout << this->getName() << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
		weapon->attack();
		enemy->takeDamage(weapon->getDamage());
		if (this->getAP() - weapon->getAPCost() >= 0)
			this->ap -= weapon->getAPCost();
		else
			this->ap = 0;
		if (enemy->getHP() == 0)
			delete enemy;
	}
	return ;
}

std::string const	Character::getName(void) const
{
	return (this->name);
}

int		Character::getAP(void) const
{
	return (this->ap);
}

AWeapon *	Character::getWeapon(void) const
{
	return (this->weapon);
}

std::ostream &		operator<<(std::ostream & output, Character const & instance)
{
	if (instance.getWeapon() != NULL)
		std::cout << instance.getName() << " has " << instance.getAP() << " AP and wields a " << instance.getWeapon()->getName() << std::endl;
	else
		std::cout << instance.getName() << " has " << instance.getAP() << " AP and is unarmed" << std::endl;
	return (output);
}