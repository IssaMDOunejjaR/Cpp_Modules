/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:39:23 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/11 10:53:40 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int		main(void) {
	// Span sp = Span(5);

	// sp.addNumber(5);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);

	std::vector<int>	lst;

	lst.push_back(91);
	lst.push_back(122);
	lst.push_back(3546);
	lst.push_back(41);
	lst.push_back(54);

	// std::sort(lst.begin(), lst.end());
	// for (std::vector<int>::iterator i = lst.begin(); i != lst.end(); i++)
	// 	std::cout << *i << std::endl;
	Span s = Span(5);

	s.addNumber(lst.begin(), lst.end());

	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;

	// Span s = Span(9);

	// s.addNumber(13);
	// s.addNumber(894);
	// s.addNumber(133);
	// s.addNumber(7897);
	// s.addNumber(0);
	// s.addNumber(47);
	// s.addNumber(741);
	// s.addNumber(4);
	// s.addNumber(894);

	// try {
	// 	std::cout << s.shortestSpan() << std::endl;
	// 	std::cout << s.longestSpan() << std::endl;
	// }
	// catch (std::exception & e) {
	// 	std::cout << e.what() << std::endl;
	// }

	return (0);
}