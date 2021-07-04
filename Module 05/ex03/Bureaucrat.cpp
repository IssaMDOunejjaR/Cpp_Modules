/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:35:36 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 10:08:30 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & instance): _name(instance.getName()), _grade(instance.getGrade())
{
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat&		Bureaucrat::operator=(Bureaucrat const & instance)
{
	if (this == &instance)
		return (*this);
	return (*this);
}

std::ostream&	operator<<(std::ostream & output, Bureaucrat const & instance)
{
	output << instance.getName() << ", bureaucrat grade " << instance.getGrade();
	return (output);
}

std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::gradeIncrement(void)
{
	this->_grade--;
	if (this->getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void	Bureaucrat::gradeDecrement(void)
{
	this->_grade++;
	if (this->getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

void	Bureaucrat::signForm(Form const & instance)
{
	if (instance.getSigned())
		std::cout << this->getName() << " signs " << instance.getName() << std::endl;
	else
		std::cout << this->getName() << " cannot sign " << instance.getName() << " because the grade is to low" << std::endl;
	return ;
}

void	Bureaucrat::executeForm(Form const & instance)
{
	if (!instance.getSigned())
		std::cout << this->getName() << " can't execute " << instance.getName() << " form because it's not signed!" << std::endl;
	else if (this->getGrade() > instance.getGradeExecute())
		std::cout << this->getName() << " can't execute " << instance.getName() << " form because his grade is too low!" << std::endl;
	else
	{
		std::cout << this->getName() << " executes " << instance.getName() << std::endl;
		instance.execute(*this);
	}
	return ;
}