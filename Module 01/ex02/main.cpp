/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:21:04 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/09 18:30:12 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string		randomName(void)
{
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
	return (names[rand() % 10]);
}

std::string		randomType(void)
{
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
	return (types[rand() % 10]);
}

int		main(void)
{
	Zombie			*zombie;
	ZombieEvent		event;

	event.setZombieType(randomType());
	zombie = event.newZombie(randomName());
	zombie->announce();

	event.randomChump();
	event.randomChump();
	event.randomChump();

	delete	zombie;
	return (0);
}