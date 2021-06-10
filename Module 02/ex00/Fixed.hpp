/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:23:16 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/09 12:55:47 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	int					_fixedPoint;
	static int const	_bitsNumber = 8;

	public:
		Fixed(void);
		Fixed(Fixed const & instance);
		Fixed(int const n);
		~Fixed(void);

		Fixed &		operator=(Fixed const & instance);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &		operator<<(std::ostream & output, Fixed const & instance);

#endif