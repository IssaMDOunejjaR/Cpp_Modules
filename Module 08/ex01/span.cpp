/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:39:01 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/11 10:51:44 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) {
	return ;
}

Span::Span(unsigned int N) {
	this->_lst.reserve(N);
	this->_capacity = N;
}

Span::Span(Span const & instance) {
	*this = instance;
}

Span::~Span(void) {
	return ;
}

Span&	Span::operator=(Span const & instance) {
	this->_lst = instance._lst;
	this->_capacity = instance._capacity;
	return (*this);
}

void	Span::addNumber(int number) {
	if (this->_lst.size() >= this->_capacity)
		throw Span::OutOfSpaceException();
	this->_lst.push_back(number);
}

int		Span::shortestSpan(void) const {
	if (this->_lst.size() < 2)
		throw Span::CountSpanException();

	std::vector<int>::iterator itb = (const_cast<Span *>(this))->_lst.begin();
	std::vector<int>::iterator ite = (const_cast<Span *>(this))->_lst.end();

	std::sort(itb, ite);
	int firstValue = *(this->_lst.begin());
	int secondValue = *(this->_lst.begin() + 1);
	return (secondValue - firstValue);
}

int		Span::longestSpan(void) const {
	if (this->_lst.size() < 2)
		throw Span::CountSpanException();

	std::vector<const int>::iterator itb = this->_lst.begin();
	std::vector<const int>::iterator ite = this->_lst.end();

	int max = *(std::max_element(itb, ite));
	int min = *(std::min_element(itb, ite));

	return (max - min);
}