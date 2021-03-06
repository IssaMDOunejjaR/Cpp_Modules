/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:41:44 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/10 12:28:30 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void	print(T value) {
	std::cout << value << std::endl;
}

int		main(void) {
	int tab1[] = { 0, 1, 2, 3, 4 };
	int tab2[] = { 5, 6, 7, 8, 9 };

	iter(tab1, 5, print);
	iter(tab2, 5, print);
	return (0);
}