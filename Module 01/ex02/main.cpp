/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:21:04 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/09 10:39:10 by iounejja         ###   ########.fr       */
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

void	randomChump(void) // member function
{
	Zombie		zombie;

	zombie.name = randomName();
	zombie.type = randomType();
	zombie.announce();
}

int		main(void)
{
	Zombie			*zombie;
	ZombieEvent		event;

	event.setZombieType(randomType());
	zombie = event.newZombie(randomName());
	zombie->announce();

	randomChump();
	randomChump();
	randomChump();

	delete	zombie;
	return (0);
}