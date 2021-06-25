/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:23:35 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/13 14:42:27 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default Constructor Called" << std::endl;
	this->_fixedPoint = 0;
	return ;
}

Fixed::Fixed(Fixed const & instance)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = instance;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor Called" << std::endl;
	return ;
}

Fixed &		Fixed::operator=(Fixed const & instance)
{
	std::cout << "Assignement Operator Called" << std::endl;
	this->_fixedPoint = instance.getRawBits();
	return (*this);
}

std::ostream &		operator<<(std::ostream & output, Fixed const & instance)
{
	output << instance.getRawBits();
	return (output);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function Called" << std::endl;
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
	return ;
}
