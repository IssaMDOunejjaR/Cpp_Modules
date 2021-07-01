/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 13:03:53 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 20:14:15 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class	Peon: public Victim
{
	public:
		Peon(void);
		Peon(std::string name);
		Peon(Peon & instance);
		virtual ~Peon(void);

		Peon &		operator=(Peon const & instance);

		void	getPolymorphed(void) const;
};

#endif