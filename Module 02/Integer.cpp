/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:17:18 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/08 15:39:20 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

Integer::Integer(int number): _n(number)
{
	std::cout << "Contructor" << std::endl;
	return ;
}

Integer::~Integer(void)
{
	std::cout << "Destructor" << std::endl;
	return ;
}

int		Integer::getValue(void) const
{
	return (this->_n);
}

void	Integer::print(int number) const
{
	std::cout << "Integer Number" << std::endl;
	return ;
}

void	Integer::print(double number) const
{
	std::cout << "Double Number" << std::endl;
	return ;
}

Integer &	Integer::operator=(Integer const & instance)
{
	std::cout << "Calling = operator: " << this->_n << " to " << instance.getValue() << std::endl;
	this->_n = instance.getValue();
	return (*this);
}

Integer		Integer::operator+(Integer const & instance) const
{
	std::cout << "Calling + operator: " << this->_n << " to " << instance.getValue() << std::endl;
	return (Integer(this->_n + instance.getValue()));
}

std::ostream &	operator<<(std::ostream & output, Integer & instance)
{
	output << instance.getValue();
	return output;
}