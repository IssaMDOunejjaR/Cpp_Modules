/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:57:43 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/02 10:40:16 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	this->numberOfUnits = 0;
	this->units = NULL;
	return ;
}

Squad::Squad(Squad & instance)
{
	t_units *	tmp;

	while (this->units != NULL)
	{
		tmp = this->units;
		this->units = this->units->next;
		delete tmp->unit;
		delete tmp;
	}
	*this = instance;
	return ;
}

Squad::~Squad(void)
{
	t_units	*	tmp;

	while (this->units != NULL)
	{
		tmp = this->units;
		this->units = this->units->next;
		delete tmp->unit;
		delete tmp;
	}
	this->numberOfUnits = 0;
	return ;
}

Squad &		Squad::operator=(Squad const & instance)
{
	if (this == &instance)
		return (*this);
	this->units = instance.units;
	this->numberOfUnits = instance.numberOfUnits;
	return (*this);
}

int		Squad::getCount(void) const
{
	return (this->numberOfUnits);
}

ISpaceMarine *	Squad::getUnit(int index) const
{
	int 		i = 0;
	t_units	*	tmp = this->units;

	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->unit);
}

int		Squad::push(ISpaceMarine * instance)
{
	if (!instance)
		return (this->getCount());
	if (this->units == NULL)
	{
		this->units = new t_units;
		this->units->unit = instance;
		this->units->next = NULL;
		this->numberOfUnits = 1;
	}
	else
	{
		t_units *	tmp = this->units;

		while (tmp != NULL)
		{
			if (tmp->unit == instance)
				return (this->getCount());
			tmp = tmp->next;
		}

		this->numberOfUnits = 0;
		tmp = this->units;
		while (tmp->next != NULL)
			tmp = tmp->next;

		t_units *	newUnit = new t_units;

		newUnit->unit = instance;
		newUnit->next = NULL;

		tmp->next = newUnit;
		tmp = this->units;
		while (tmp != NULL)
		{
			this->numberOfUnits += 1;
			tmp = tmp->next;
		}
	}
	return (this->getCount());
}