/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:41:03 by iounejja          #+#    #+#             */
/*   Updated: 2021/09/02 14:33:06 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"

int		main(void) {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	//[...]

	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	MutantStack<int> myStack;

	myStack.push(100);
	myStack.push(101);
	myStack.push(102);
	myStack.push(103);

	for (MutantStack<int>::iterator it = myStack.begin(); it != myStack.end(); it++)
		std::cout << *it << std::endl;

	return (0);
}