/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:00:10 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 13:57:42 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::Character(std::string const & name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++) {
		this->_inv[i] = NULL;
	}
	return ;
}

Character::Character(Character const & instance)
{
	for (int i = 0; i < 4; i++) {
		delete this->_inv[i];
	}
	this->_name = instance.getName();
	for (int i = 0; i < 4; i++) {
		if (instance._inv[i] != NULL)
			this->_inv[i] = instance._inv[i]->clone();
	}
	return;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++) {
		delete this->_inv[i];
	}
	return ;
}

Character &		Character::operator=(Character const & instance)
{
	for (int i = 0; i < 4; i++) {
		delete this->_inv[i];
	}
	this->_name = instance.getName();
	for (int i = 0; i < 4; i++) {
		if (instance._inv[i] != NULL)
			this->_inv[i] = instance._inv[i];
		else
			this->_inv[i] = NULL;
	}
	return (*this);
}

std::string const &		Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria * m)
{
	int i;

	if (!m)
		return ;

	for (i = 0; i < 4 && this->_inv[i] != NULL; i++) ;

	if (i < 4)
		this->_inv[i] = m;
	return ;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inv[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx >= 0 && idx < 4)
		this->_inv[idx]->use(target);
	return ;
}