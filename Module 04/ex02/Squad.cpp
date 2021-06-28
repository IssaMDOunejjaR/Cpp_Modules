/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:57:43 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 19:02:01 by iounejja         ###   ########.fr       */
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
	*this = instance;
	return ;
}

Squad::~Squad(void)
{
	return ;
}

Squad &		Squad::operator=(Squad const & instance)
{
	return (*this);
}

int		Squad::getCount(void) const
{
	return (this->numberOfUnits);
}

int		Squad::push(ISpaceMarine * instance)
{
	t_units *	tmp;
	t_units *	tmp2;

	tmp = this->units;
	while (tmp != NULL)
	{
		if (tmp->unit == instance && tmp2 != NULL)
		{
			tmp2->next = tmp->next;
			delete tmp->unit;
		}
		tmp2 = tmp;
		tmp = tmp->next;
	}
	tmp->unit = instance;
	return (this->getCount());
}