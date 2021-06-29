/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:59:34 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/29 20:23:54 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
    this->_type = "ice";
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

AMateria *  AMateria::clone(void) const
{
    return (new AMateria());
}