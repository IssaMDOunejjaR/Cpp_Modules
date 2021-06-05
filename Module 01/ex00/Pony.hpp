/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:18:57 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/05 12:03:42 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
	public:
		std::string		name;
		std::string		color;
		
		Pony(void);
		~Pony(void);

		void	ponyOnTheStack(void);
		void	ponyOnTheHeap(void);
};

#endif