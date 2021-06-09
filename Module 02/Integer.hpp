/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:17:36 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/08 15:39:11 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_HPP
# define INTEGER_HPP

# include <iostream>

class	Integer
{
	int		_n;

	public:
		Integer(int number);
		~Integer(void);

		int		getValue(void) const;

		void	print(int number) const;
		void	print(double number) const;

		Integer &	operator=(Integer const & instance);
		Integer		operator+(Integer const & instance) const;
};

std::ostream &	operator<<(std::ostream & output, Integer & instance);

#endif