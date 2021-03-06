/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:19:01 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/05 19:02:51 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color)
{
	this->name = name;
	this->color = color;
	return ;
}

Pony::~Pony(void)
{
	return ;
}

void	Pony::ponyIntroduction(void) const
{
	std::cout << "Hello, i am " << this->name << ", and my color is " << this->color << std::endl;
}