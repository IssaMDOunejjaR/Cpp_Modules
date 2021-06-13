/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:23:35 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/12 14:56:39 by iounejja         ###   ########.fr       */
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

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n);
	return ;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(n * (1 << this->_bitsNumber));
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
	this->_fixedPoint = instance._fixedPoint;
	return (*this);
}

std::ostream &		operator<<(std::ostream & output, Fixed const & instance)
{
	output << instance.toFloat();
	return (output);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function Called" << std::endl;
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw * (1 << this->_bitsNumber);
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPoint / (float)(1 << this->_bitsNumber));
}

int		Fixed::toInt(void) const
{
	return (this->_fixedPoint / (1 << this->_bitsNumber));
}

bool	Fixed::operator>(Fixed const & instance) const
{
	if (this->_fixedPoint > instance.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const & instance) const
{
	if (this->_fixedPoint < instance.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const & instance) const
{
	if (this->_fixedPoint >= instance.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const & instance) const
{
	if (this->_fixedPoint <= instance.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const & instance) const
{
	if (this->_fixedPoint == instance.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const & instance) const
{
	if (this->_fixedPoint != instance.getRawBits())
		return (true);
	return (false);
}

Fixed		Fixed::operator+(Fixed const & instance) const
{
	return (Fixed(this->toFloat() + instance.toFloat()));
}

Fixed		Fixed::operator-(Fixed const & instance) const
{
	return (Fixed(this->toFloat() - instance.toFloat()));
}

Fixed		Fixed::operator*(Fixed const & instance) const
{
	return (Fixed(this->toFloat() * instance.toFloat()));
}

Fixed		Fixed::operator/(Fixed const & instance) const
{
	return (Fixed(this->toFloat() / instance.toFloat()));
}