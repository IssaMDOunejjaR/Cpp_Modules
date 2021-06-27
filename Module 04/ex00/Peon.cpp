/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 13:03:46 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/27 18:51:55 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
	return ;
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon & instance)
{
	*this = instance;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon &		Peon::operator=(Peon const & instance)
{
	this->name = instance.getName();
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl; 
	return ;
}