/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:58:39 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/07 20:22:45 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int		main(void) {
	Array<int>	arr[3] = {0, 1, 2};

	int i = arr[1];
	std::cout << arr[1] << std::endl;
	return (0);
}