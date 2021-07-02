/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 13:04:01 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/02 10:37:16 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Worker.hpp"

int		main(void)
{
	Sorcerer 	robert("Robert", "the Magnificent");
	Victim 		jim("Jimmy");
	Peon 		joe("Joe");

	// Sorcerer	john("John", "the Sorcerer King");
	// Worker		gerard("Gerard");
	// Worker		anna("Anna");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	// std::cout << john << gerard << anna;
	// john.polymorph(gerard);
	// john.polymorph(anna);
	return (0);
}