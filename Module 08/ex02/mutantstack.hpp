/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:41:16 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/13 13:49:17 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class	MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack<T>(void): std::stack<T>() {
			return ;
		}

		MutantStack<T>(MutantStack<T> const & instance): std::stack<T>(instance) {
			return ;
		}

		virtual ~MutantStack<T>(void) {
			return ;
		}

		MutantStack<T>&		operator=(MutantStack<T> const & instance) {
			std::stack<T>::operatpr=(instance);
			return (*this);
		}

		iterator	begin(void) {
			return (std::stack<T>::c.begin());
		}

		iterator	end(void) {
			return (std::stack<T>::c.end());
		}

		const_iterator	begin(void) const {
			return (std::stack<T>::c.begin());
		}

		const_iterator	end(void) const {
			return (std::stack<T>::c.end());
		}

		reverse_iterator	rbegin(void) {
			return (std::stack<T>::c.rbegin());
		}

		reverse_iterator	rend(void) {
			return (std::stack<T>::c.rend());
		}

		const_reverse_iterator	rbegin(void) const {
			return (std::stack<T>::c.rbegin());
		}

		const_reverse_iterator	rend(void) const {
			return (std::stack<T>::c.rend());
		}
};

#endif