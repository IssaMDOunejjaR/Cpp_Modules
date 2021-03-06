/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:18:59 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/05 19:16:30 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(std::string name, std::string color)
{
	Pony	pony(name, color);

	pony.ponyIntroduction();
}

void	ponyOnTheHeap(std::string name, std::string color)
{
	Pony	*pony = new Pony(name, color);

	pony->ponyIntroduction();

	delete	pony;
}

int		main(void)
{
	ponyOnTheStack("One", "Red");
	ponyOnTheHeap("Two", "Blue");

	return (0);
}