/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:59:34 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 12:15:10 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const & instance)
{
    *this = instance;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice &   Ice::operator=(Ice const & instance)
{
	this->_type = instance.getType();
	this->_xp = instance.getXP();
	return (*this);
}

AMateria *  Ice::clone(void) const
{
    return (new Ice(*this));
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
	AMateria::use(target);
	return ;
}