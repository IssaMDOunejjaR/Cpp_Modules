/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 09:11:33 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 15:29:01 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const & name, int gradeSign, int gradeExecute): _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	this->_isSigned = false;
	if (this->getGradeSign() < 1 || this->getGradeExecute() < 1)
		throw Form::GradeTooHighException();
	else if (this->getGradeSign() > 150 || this->getGradeExecute() > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & instance)
	: _name(instance.getName()), _isSigned(instance.getSigned()), _gradeSign(instance.getGradeSign()), _gradeExecute(instance.getGradeExecute())
{
	return ;
}

Form::~Form(void)
{
	return ;
}

Form&	Form::operator=(Form const & instance)
{
	if (this == &instance)
		return (*this);
	return (*this);
}

std::ostream&	operator<<(std::ostream & output, Form const & instance)
{
	output << "The " << instance.getName() << " form need " << instance.getGradeSign() << " grade to be signed, and " << instance.getGradeExecute() << " grade to be executed!";
	return (output);
}

std::string		Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_isSigned);
}

int		Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int		Form::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

void	Form::beSigned(Bureaucrat & instance)
{
	if (instance.getGrade() < this->getGradeSign())
		this->_isSigned = true;
	else
		throw Form::GradeTooLowException();
	return ;
}