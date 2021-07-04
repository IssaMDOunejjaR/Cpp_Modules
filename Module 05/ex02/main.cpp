/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:35:44 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 10:24:04 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void)
{
	try {
		Bureaucrat	b1("B1", 10);
		Form		*f1 = new ShrubberyCreationForm("Test");

		f1->beSigned(b1);
		b1.executeForm(*f1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}