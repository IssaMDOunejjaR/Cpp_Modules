/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:28:55 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 11:48:23 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & instance)
{
	*this = instance;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern&		Intern::operator=(Intern const & instance)
{
	return (*this);
}

Form*	Intern::makeForm(std::string const & formName, std::string const & target) const
{
	Form*	arr[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};

	for (int i = 0; i < 3; i++) {
		if (arr[i]->getName() == formName) {
			std::cout << "Intern creates " << formName << std::endl;
			return (arr[i]);
		}
	}

	std::cout << "Unknown form name!" << std::endl;

	return (NULL);
}