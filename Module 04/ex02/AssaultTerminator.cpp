/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:02:52 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/02 10:56:20 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & instance)
{
    *this = instance;
    return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I’ll be back..." << std::endl;
    return ;
}

AssaultTerminator &     AssaultTerminator::operator=(AssaultTerminator const & instance)
{
	if (this == &instance)
		return (*this);
    return (*this);
}

ISpaceMarine *  AssaultTerminator::clone(void) const
{
    return (new AssaultTerminator(*this));
}

void    AssaultTerminator::battleCry(void) const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
    return ;
}

void    AssaultTerminator::rangedAttack(void) const
{
    std::cout << "* does nothing *" << std::endl;
    return ;
}

void    AssaultTerminator::meleeAttack(void) const
{
    std::cout << "* attacks with chainfists *" << std::endl;
    return ;
}