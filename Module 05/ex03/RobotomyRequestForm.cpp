/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:12:48 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 11:50:06 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target): Form("robotomy request", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & instance): Form(instance), _target(instance.getTarget())
{
	*this = instance;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & instance)
{
	return (*this);
}

std::string		RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & instance) const
{
	if (instance.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	else if (!this->getSigned())
		throw Form::UnsignedException();

	std::cout << "* drilling noises *" << std::endl;
	std::cout << this->getTarget() << " has been robotomized successfully 50\% of the time" << std::endl;
	return ;
}