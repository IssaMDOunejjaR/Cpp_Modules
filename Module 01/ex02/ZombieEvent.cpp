/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:20:44 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/07 11:19:14 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie;

	zombie->name = name;
	zombie->type = this->type;
	zombie->announce();
	return (zombie);
}

void	ZombieEvent::setZombieType(std::string type) {
	this->type = type;
	return ;
}