/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:35:44 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/03 19:34:56 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void)
{
	try {
		Bureaucrat	b1("B1", 10);
		AForm	*f1 = new ShrubberyCreationForm("hello");
		ShrubberyCreationForm	f2("hello");
		ShrubberyCreationForm	f3(f2);

		// f3 = f2;
		std::cout << f3.getName() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}