/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:57:43 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/09 10:51:11 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int numberOfZombies): _numberOfZombies(numberOfZombies)
{
	this->_zombies = new Zombie[numberOfZombies];
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
	int			i = 0;

	while (i < numberOfZombies)
	{
		this->_zombies[i].name = names[rand() % 10];
		this->_zombies[i].type = types[rand() % 10];
		i++;
	}
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete []	this->_zombies;
	return ;
}

void	ZombieHorde::annouce(void) const
{
	int	i;

	i = 0;
	while (i < this->_numberOfZombies)
	{
		this->_zombies[i].announce();
		i++;
	}
	return ;
}