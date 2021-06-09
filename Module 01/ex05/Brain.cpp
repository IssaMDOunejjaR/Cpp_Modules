/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:36:59 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/08 12:37:21 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string		Brain::identify(void) const
{
	std::stringstream ss;

	ss << std::hex << this;
	return (ss.str());
}