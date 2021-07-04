/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:35:44 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 18:09:55 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	try {
		Bureaucrat	b1("B1", 10);
		Bureaucrat	b2("B2", 20);
		Bureaucrat	b3("B3", 50);
		Form		*f1 = new ShrubberyCreationForm("f1");
		Form		*f2 = new RobotomyRequestForm("f2");
		Form		*f3 = new PresidentialPardonForm("f3");

		f1->beSigned(b1);
		b1.executeForm(*f1);

		f2->beSigned(b2);
		b2.executeForm(*f2);

		f3->beSigned(b3);
		b3.executeForm(*f3);

		delete f1;
		delete f2;
		delete f3;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}