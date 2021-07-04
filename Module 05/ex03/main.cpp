/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:35:44 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 18:12:36 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	try {
		Intern someRandomIntern;
		Intern I1;
		Intern I2;
		Intern I3;

		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		rrf = I1.makeForm("presidential pardon", "John");
		rrf = I1.makeForm("shrubbery creation", "Michael");
		rrf = I1.makeForm("Hello", "Michael");

		delete rrf;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}