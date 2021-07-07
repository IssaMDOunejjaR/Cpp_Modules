/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:15:29 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/07 16:00:56 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
	std::string str;
	int a;
};

uintptr_t	serialize(Data * ptr) {
	return (*(reinterpret_cast<int*>(ptr)));
}

Data*	deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int		main(void) {
	Data*	a = new Data();
	int		b = serialize(a);
	Data	*c = deserialize(b);

	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	std::cout << &c << std::endl;
	return (0);
}