/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:39:23 by iounejja          #+#    #+#             */
/*   Updated: 2021/09/03 12:50:58 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int		main(void) {
	Span sp = Span(5);

	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}


	return (0);
}