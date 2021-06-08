/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:37:24 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/07 13:13:44 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) : _brain(Brain())
{
	return ;
}

std::string		Human::identify(void) const
{
	return (this->_brain.identify());
}

Brain const&	Human::getBrain(void)
{
	return (this->_brain);
}
