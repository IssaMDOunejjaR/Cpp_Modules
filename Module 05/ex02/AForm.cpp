/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 09:11:33 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/03 15:08:09 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const & name, int gradeSign, int gradeExecute): _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	this->_isSigned = false;
	if (this->getGradeSign() < 1)
		throw AForm::GradeTooHighException();
	else if (this->getGradeSign() > 150)
		throw AForm::GradeTooLowException();
	if (this->getGradeExecute() < 1)
		throw AForm::GradeTooHighException();
	else if (this->getGradeExecute() > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(AForm const & instance)
	: _name(instance.getName()), _isSigned(instance.getSigned()), _gradeSign(instance.getGradeSign()), _gradeExecute(instance.getGradeExecute())
{
	return ;
}

AForm::~AForm(void)
{
	return ;
}

AForm&	AForm::operator=(AForm const & instance)
{
	if (this == &instance)
		return (*this);
	return (*this);
}

std::ostream&	operator<<(std::ostream & output, AForm const & instance)
{
	output << instance.getName();
	return (output);
}

std::string		AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_isSigned);
}

int		AForm::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int		AForm::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

void	AForm::beSigned(Bureaucrat & instance)
{
	if (instance.getGrade() < this->getGradeSign())
		this->_isSigned = true;
	else
		throw AForm::GradeTooLowException();
	return ;
}