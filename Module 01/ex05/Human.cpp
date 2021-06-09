/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:37:24 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/08 12:39:39 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string		Human::identify(void) const
{
	return (this->_brain.identify());
}

Brain const&	Human::getBrain(void)
{
	return (this->_brain);
}
