/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:39:01 by iounejja          #+#    #+#             */
/*   Updated: 2021/09/03 12:59:09 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) {
	return ;
}

Span::Span(unsigned int N) {
	this->_len = 0;
	this->_lst.reserve(N);
	this->_capacity = N;
}

Span::Span(Span const & instance) {
	*this = instance;
}

Span::~Span(void) {
	this->_lst.clear();
	this->_len = 0;
	this->_capacity = 0;
	return ;
}

Span&	Span::operator=(Span const & instance) {
	this->_lst = instance._lst;
	this->_len = instance._len;
	this->_capacity = instance._capacity;
	return (*this);
}

void	Span::addNumber(int number) {
	if (this->_lst.size() >= this->_capacity)
		throw Span::OutOfSpaceException();
	this->_lst.push_back(number);
	this->_len += 1;
}

int		Span::shortestSpan(void) const {
	if (this->_lst.size() < 2)
		throw Span::CountSpanException();

	std::vector<int>::iterator itb = (const_cast<Span *>(this))->_lst.begin();
	std::vector<int>::iterator ite = (const_cast<Span *>(this))->_lst.end();

	std::sort(itb, ite);

	return (*(this->_lst.begin() + 1) - *(this->_lst.begin()));
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