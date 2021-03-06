/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:15:29 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/09 18:04:47 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
	int a;
	int b;
	int c;
};

uintptr_t	serialize(Data * ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int		main(void) {
	Data*		data = new Data();

	data->a = 13513;
	data->b = 89465;
	data->c = 46333;

	uintptr_t	p = serialize(data);
	Data*	raw = deserialize(p);

	std::cout << raw->a << std::endl;
	std::cout << raw->b << std::endl;
	std::cout << raw->c << std::endl;

	delete data;
	return (0);
}