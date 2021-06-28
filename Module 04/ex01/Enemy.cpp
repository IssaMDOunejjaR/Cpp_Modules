/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:22:33 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 10:31:22 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(int hp, std::string const & type)
{
	this->hp = hp;
	this->type = type;
	return ;
}

Enemy::Enemy(Enemy & instance)
{
	*this = instance;
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy &		Enemy::operator=(Enemy const & instance)
{
	this->hp = instance.getHP();
	this->type = instance.getType();
	return (*this);
}

std::string		Enemy::getType(void) const
{
	return (this->type);
}

int		Enemy::getHP(void) const
{
	return (this->hp);
}

void	Enemy::takeDamage(int amount)
{
	if (this->getHP() - amount >= 0)
		this->hp -= amount;
	else
		this->hp = 0;
	return ;
}