/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:16:58 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/08 15:01:40 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyFind.hpp"

int		main(void) {
	std::vector<int> arr;

	arr.push_back(5);
	arr.push_back(89);
	arr.push_back(3);

	std::cout << easyFind(arr, 89) << std::endl;
	return (0);
}