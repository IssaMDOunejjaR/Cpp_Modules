/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:20:44 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/09 18:30:40 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie;

	zombie->name = name;
	zombie->type = this->type;
	return (zombie);
}

void	ZombieEvent::setZombieType(std::string type) {
	this->type = type;
	return ;
}

void	ZombieEvent::randomChump(void) const
{
	Zombie		zombie;
	std::string	names[10] = {
		"Ferdynand",
		"Shifra",
		"Hene",
		"Gugulethu",
		"Nikita",
		"Bernadette",
		"Indie",
		"Jonathan",
		"Herakleitos",
		"Betony"
	};
	std::string types[10] = {
		"Runners",
		"Crawlers",
		"Bonies",
		"Stalkers",
		"Ghouls",
		"Armored",
		"Bursters",
		"Hazmat",
		"Bursters",
		"Spitters"
	};

	zombie.name = names[rand() % 10];
	zombie.type = types[rand() % 10];
	zombie.announce();
}