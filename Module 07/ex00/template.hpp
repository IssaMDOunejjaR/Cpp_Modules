/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 19:27:38 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/07 19:40:10 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template <typename T>
void	swap(T & a, T & b) {
	T tmp = a;

	a = b;
	b = tmp;
}

template <typename T>
T const &	min(T const & a, T const & b) {
	return (b <= a ? b : a);
}

template <typename T>
T const &	max(T const & a, T const & b) {
	return (b >= a ? b : a);
}

#endif