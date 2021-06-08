/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:20:19 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/07 11:19:09 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	return ;
}

void	Zombie::announce(void) const
{
	std::string	quotes[6] = {
		"Braaaaaaiiiinnnnssssss........",
		"A mind is a terrible thing to waste.",
		"Zombies eat brains, you are safe.",
		"When life closes a door, it opens a window. And then, zombies climb in and eat you.",
		"Blood is really warm, it’s like drinking hot chocolate but with more screaming.",
		"If I come back as a zombie I’m eating you first!"
	};
	std::cout << "<" << this->name << " " << this->type << "> " << quotes[rand() % 6] << std::endl;
	return ;
}