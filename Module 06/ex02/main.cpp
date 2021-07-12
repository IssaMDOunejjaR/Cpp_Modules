/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:24:18 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/10 09:28:09 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Base
{
	public:
		virtual ~Base(void) {}
};

class	A: public Base {};
class	B: public Base {};
class	C: public Base {};

Base*	generate(void) {
	srand(time(NULL));
	int r = rand() % 3;

	if (r == 0)
		return (new A());
	else if (r == 1)
		return (new B());
	else if (r == 2)
		return (new C());
	return (NULL);
}

void	identify(Base * p) {
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base & p) {
	try {
		A a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast & e) {
		try {
			B b = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast & e) {
			try {
				C c = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast & e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
}

int		main(void) {
	Base*	a = generate();

	identify(*a);
	identify(a);

	delete a;
	return (0);
}