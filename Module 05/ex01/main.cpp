/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:35:44 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/03 11:55:39 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	try {
		Bureaucrat	b1("b1", 15);
		Form		f1("f1", 10 , 50);

		f1.beSigned(b1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}