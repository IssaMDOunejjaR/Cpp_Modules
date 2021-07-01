/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:59:08 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 13:53:10 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    this->_xp = 0;
    return ;
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
    this->_xp = 0;
    return ;
}

AMateria::AMateria(AMateria const & instance)
{
	*this = instance;
	return ;
}

AMateria::~AMateria(void)
{
    return ;
}

AMateria &      AMateria::operator=(AMateria const & instance)
{
	this->_type = instance.getType();
	this->_xp = instance.getXP();
	return (*this);
}

std::string const &     AMateria::getType(void) const
{
    return (this->_type);
}

unsigned int    AMateria::getXP(void) const
{
    return (this->_xp);
}

void    AMateria::use(ICharacter & target)
{
    this->_xp += 10;
    return ;
}