/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 13:03:33 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/27 18:48:42 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << this->getName() << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(Victim & instance)
{
	*this = instance;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->getName() << " just died for no apparent reason!" << std::endl;
	return ;
}

Victim &	Victim::operator=(Victim const & instance)
{
	this->name = instance.getName();
	return (*this);
}

std::ostream &		operator<<(std::ostream & output, Victim const & instance)
{
	output << "I'm " << instance.getName() << " and I like otters!" << std::endl;
	return (output);
}

std::string		Victim::getName(void) const
{
	return (this->name);
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
	return ;
}