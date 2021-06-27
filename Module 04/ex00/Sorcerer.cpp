/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 13:03:03 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/27 18:51:03 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << this->getName() << ", " << this->getTitle() << ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer & instance)
{
	*this = instance;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->getName() << ", " << this->getTitle() << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}

Sorcerer &		Sorcerer::operator=(Sorcerer const & instance)
{
	this->name = instance.getName();
	this->title = instance.getTitle();
	return (*this);
}

std::ostream &		operator<<(std::ostream & output, Sorcerer const & instance)
{
	output << "I am " << instance.getName() << ", " << instance.getTitle() << ", and I like ponies!" << std::endl;
	return (output);
}

std::string		Sorcerer::getName(void) const
{
	return (this->name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->title);
}

void	Sorcerer::polymorph(Victim const & instance)
{
	instance.getPolymorphed();
	return ;
}