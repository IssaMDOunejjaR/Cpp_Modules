/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:57:43 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/07 11:30:51 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

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

ZombieHorde::ZombieHorde(int numberOfZombies)
{
	Zombie		zombies[numberOfZombies];
	int			i = 0;

	while (i < numberOfZombies)
	{
		zombies[i].name = randomName();
		zombies[i].type = randomType();
		zombies[i].announce();
		i++;
	}
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	return ;
}