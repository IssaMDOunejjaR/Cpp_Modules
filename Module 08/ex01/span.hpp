/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:39:09 by iounejja          #+#    #+#             */
/*   Updated: 2021/09/03 12:48:20 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class	Span
{
	class	OutOfSpaceException: public std::exception
	{
		virtual const char * what() const throw() {
			return ("No space left to add a new number!");
		}
	};

	class	CountSpanException: public std::exception
	{
		virtual const char * what() const throw() {
			return ("Can't count spans distance!");
		}
	};

	std::vector<int> 	_lst;
	int					_len;
	int					_capacity;

	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const & instance);
		~Span(void);

		Span&	operator=(Span const & instance);

		void	addNumber(int number);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		template <typename T>
		void	addNumber(T container) {
			if ((container.end() - container.begin()) + this->_len > this->_capacity)
				throw Span::OutOfSpaceException();
			std::copy(container.begin(), container.end(), std::back_inserter(this->_lst));
			this->_len += container.end() - container.begin();
		}
};

#endif