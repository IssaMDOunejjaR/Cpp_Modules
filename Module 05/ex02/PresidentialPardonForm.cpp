/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:13:09 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 12:19:46 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target): Form("presidential pardon", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & instance): Form(instance), _target(instance.getTarget())
{
	*this = instance;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm&		PresidentialPardonForm::operator=(PresidentialPardonForm const & instance)
{
	if (this == &instance)
		return (*this);
	return (*this);
}

std::string		PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & instance) const
{
	if (instance.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	else if (!this->getSigned())
		throw Form::UnsignedException();

	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return ;
}