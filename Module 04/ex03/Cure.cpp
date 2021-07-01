/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:59:45 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 12:15:21 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const & instance)
{
	*this = instance;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure &		Cure::operator=(Cure const & instance)
{
	this->_type = instance.getType();
	this->_xp = instance.getXP();
	return (*this);
}

AMateria *		Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter & target)
{
	std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
	return ;
}